# -*- coding:utf-8 -*-

from optparse import OptionParser
from XlsFileUtil import XlsFileUtil
from StringsXmlFileUtil import StringsXmlFileUtil
from LocalizableStringsFileUtil import LocalizableStringsFileUtil
from Log import Log
import shutil

def addParser():
    parser = OptionParser()

    parser.add_option("-f", "--filePath",
                      help="original.xls File Path.",
                      metavar="filePath")

    parser.add_option("-t", "--targetFloderPath",
                      help="Target Floder Path.",
                      metavar="targetFloderPath")

    parser.add_option("-i", "--iOSAdditional",
                      help="iOS additional info.",
                      metavar = "iOSAdditional")

    parser.add_option("-a", "--androidAdditional",
                      help="android additional info.",
                      metavar="androidAdditional")

    (options, args) = parser.parse_args()
    Log.info("options: %s, args: %s" % (options, args))

    return options


def startConvert(options):
    filePath = options.filePath
    targetFloderPath = options.targetFloderPath
    iOSAdditional = options.iOSAdditional
    androidAdditional = options.androidAdditional

    if filePath is not None:
        if targetFloderPath is None:
            Log.error("targetFloderPath is None！use -h for help.")
            return

        # xls
        Log.info("read xls file from"+filePath)
        xlsFileUtil = XlsFileUtil(filePath)

        # iOS & Android
        #先删除 旧的文件夹
        try:
            shutil.rmtree(targetFloderPath + "/ios字符串/")
            shutil.rmtree(targetFloderPath + "/android字符串/")
        except OSError as e:
            print("删除旧的文件夹 时出错:"+e.strerror)


        return

        #开始写入
        table = xlsFileUtil.getTableByIndex(0)
        convertiOSAndAndroidFile(table,targetFloderPath,iOSAdditional,androidAdditional)

        Log.info("Finished,go to see it -> "+targetFloderPath)

    else:
        Log.error("file path is None！use -h for help.")


def convertiOSAndAndroidFile(table,targetFloderPath,iOSAdditional,androidAdditional):
    firstRow = table.row_values(0)

    keys = table.col_values(0)
    del keys[0]

    for index in range(len(firstRow)):
        if index > 0:
            languageName = firstRow[index]
            values = table.col_values(index)
            del values[0]
            # iOS
            LocalizableStringsFileUtil.writeToFile(keys,values,targetFloderPath + "/ios字符串/"+languageName+".lproj/",iOSAdditional)

            # Android 中文 文件名称需要更换
            if languageName == "zh-Hans":
                languageName = "zh-rCN"
                
            if languageName == "zh-Hant":
                languageName = "zh-rHK"

            path = targetFloderPath + "/android字符串/values-"+languageName+"/"
#            英文的 文件名 不知道为什么要改。。。
#            if languageName == 'en':
#                path = targetFloderPath + "/android/values/"

            for tempIndex in range(len(values)):
                values[tempIndex] = values[tempIndex].replace("&","&amp;")
                values[tempIndex] = values[tempIndex].replace("<","&lt;")
                values[tempIndex] = values[tempIndex].replace("%@","%s")
                values[tempIndex] = values[tempIndex].replace("'","\\'")
                values[tempIndex] = values[tempIndex].replace("⚠️","")


            StringsXmlFileUtil.writeToFile(keys,values,path,androidAdditional)

def main():
    options = addParser()
    startConvert(options)

main()
