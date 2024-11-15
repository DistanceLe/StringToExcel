Mac安装多个Python版本
安装前准备
利用Mac包管理工具brew安装pyenv，pyenv用来管理所有python版本

安装pyevn
  -- 安装pyenv用来管理python的版本
  $ brew install pyenv
  -- 查看当前安装的pyenv的版本
  $ pyenv -v
  pyenv 1.2.6


将pyenv配置到全局环境变量中
  -- 打开全局的环境变量配置文件
  vim /etc/profile 
  -- 在最下边加上这两行配置
  export PYENV_ROOT=~/.pyenv
  export PATH=$PYENV_ROOT/shims:$PATH
  -- 重新加载一次环境变量配置文件
  source /etc/profile 



查看所有的python版本（pyenv管理的所有版本）
  -- *指向的是当前所使用的版本，system是系统安装的python
  $ pyenv versions
  * system (set by /Users/xxx/.pyenv/version)



查看所有可以安装的python版本
  $ pyenv install --list
  Available versions:
    2.1.3
    2.2.3
    2.3.7
    ...

//命令行 设置代理  .zshrc  需要加上
alias proxy='export all_proxy=socks5://127.0.0.1:1086'
alias unproxy='unset all_proxy'


找到自己需要的版本进行安装
  $ pyenv install 3.5.5
  python-build: use openssl from homebrew
  python-build: use readline from homebrew
  Downloading Python-3.5.5.tar.xz...
  -> https://www.python.org/ftp/python/3.5.5/Python-3.5.5.tar.xz
  Installing Python-3.5.5...
  python-build: use readline from homebrew
  Installed Python-3.5.5 to /Users/xxx/.pyenv/versions/3.5.5




查看当前安装的所有版本
  $ pyenv versions
  * system (set by /Users/xxx/.pyenv/version)
    3.5.5



切换python版本到自己需要的版本上
  $ pyenv global 3.5.5 # 全局切换
  $ python -V # 验证一下是否切换成功



查看当前的python版本
  $ pyenv local 3.5.5 # 当前目录及其目录切换
  $ python -V # 验证一下是否切换成功
————————————————



.zshrc  需要加上两个路径
export PYENV_ROOT="$HOME/.pyenv"
export PATH="$PYENV_ROOT/shims:$PATH"

pyenv global 2.7.18
pyenv global 3.11.3



