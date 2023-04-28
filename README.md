# StringToExcel

使用Python2版本，用pyenv来管理Python的版本。

.zshrc  需要加上两个路径
export PYENV_ROOT="$HOME/.pyenv"
export PATH="$PYENV_ROOT/shims:$PATH"




这三个工具先安装
```
openpyxl-2.4.7
pyexcelerator-0.6.4.1
xlrd-1.0.0

python setup.py install
```


多语言转为Excel，安卓XML

将iOS的字符串文件 转为Excel

```
python Localizable__old.py -f ../ios/ -t ../xls/
```  
  
    
将Excel 转为安卓和iOS文件

```
python LocalizableBack.py -f ../xls/Localizable.xls -t ../android
```
