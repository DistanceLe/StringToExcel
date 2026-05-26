# -*- coding:utf-8 -*-

import os
from optparse import OptionParser
from LocalizableStringsFileUtil import LocalizableStringsFileUtil
from openpyxl import Workbook

#Add command option
def addParser():
    parser = OptionParser()

    parser.add_option("-f", "--filesDirectory",
                      help="Localizable.strings files directory.",
                      metavar="filesDirectory")

    parser.add_option("-t", "--targetFilePath",
                      help="Target File (xlsx) Path.",
                      metavar="targetFilePath")

    (options, args) = parser.parse_args()

    return options


# Start convert Localizable.strings to xlsx
def startConvert(options):
    directory = options.filesDirectory
    targetFilePath = options.targetFilePath

    if directory is not None:
        index = 0
        if targetFilePath is not None:
            wb = Workbook()
            ws = wb.active
            ws.title = 'Localizable.strings'

            for parent, dirnames, filenames in os.walk(directory):

                for dirname in dirnames:
                    if not(dirname.endswith(".lproj")) or dirname.startswith("Base."):
                        continue

                    # KeyName & CountryCode
                    if index == 0:
                        ws.cell(row=1, column=1, value='keyName')
                    conturyCode = dirname.split('.')[0]
                    ws.cell(row=1, column=index + 2, value=conturyCode)

                    # Key & Value
                    path = directory + '/' + dirname + '/Localizable.strings'
                    (keys, values) = LocalizableStringsFileUtil.getKeysAndValues(path)
                    for x in range(len(keys)):
                        key = keys[x]
                        value = values[x]
                        if (index == 0):
                            ws.cell(row=x + 2, column=1, value=key)
                            ws.cell(row=x + 2, column=2, value=value)
                        else:
                            ws.cell(row=x + 2, column=index + 2, value=value)
                    index += 1

            filePath = targetFilePath + "/Localizable.xlsx"
            wb.save(filePath)
            print("Convert successfully! you can see xlsx file in %s" % (filePath))

        else:
            print("Target file path can not be empty! try -h for help.")
    else:
        print("Localizable.strings files directory can not be empty! try -h for help.")


def main():
    options = addParser()
    startConvert(options)

main()
