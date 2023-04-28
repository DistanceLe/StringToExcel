//从新添加一遍  既可以 ====================================================
ssh-add ~/.ssh/xxx_rsa
ssh-add ~/.ssh/xxx-GitHub


chmod 600 xxx_rsa


//命令行 设置代理  .zshrc  需要加上
alias proxy='export all_proxy=socks5://127.0.0.1:1086'
alias unproxy='unset all_proxy'





为了干净，请先使用以下命令删除homebrew
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/uninstall.sh)"



//安装 Homebrew
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
brew -v // 版本号查询


// 显示 zsh: command not found: brew
'curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install >> brew_install'
'git clone git://mirrors.ustc.edu.cn/homebrew-core.git/ /usr/local/Homebrew/Library/Taps/homebrew/homebrew-core --depth=1'
// 以上问题还是出现
'/usr/bin/ruby brew_install'
// 出现错误  Error: Fetching /usr/local/Homebrew/Library/Taps/homebrew/homebrew-core failed!Fetching /usr/local/Homebrew failed!
// 执行以下命令
'sudo chown -R xxx:staff'
// xxx查询命令
'whoami' // 我是谁
// 再次执行
'/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"'
// 查询brew版本
‘'brew -v' // 显示 3.1.3，成功
'pod --version' // 显示版本 1.4.0




//============更新Ruby 
//安装 rvm
curl -sSL https://get.rvm.io | bash -s stable --ruby

//关闭并重新打开你的终端。然后，安装最新版本的 Ruby
rvm install ruby --latest

//你还可以使用 rvm install 2.7.0 安装特定版本。然后，获取你已安装的所有版本的列表。
rvm list

rvm list known // 查看所有版本

//我们要切换到 2.7.0 版本
rvm use 2.7.0


//rvm 官网
https://rvm.io/rvm/install


Ruby升级报错Error running 'requirements_osx_brew_update_system ruby-2.7.0'
先运行下面命令，再安装
rvm autolibs read-only


rvm --create ruby-2.2.4

rvm 2.2.4 --default

rvm use ruby-2.2.4


第一步：输入命令：sudo gem uninstall cocoapods

别惊讶，卸载完了之后执行下一行：

第二步：输入命令:gem install cocoapods





安装字体，给oh-my-zsh 使用

关于波浪线两边的两个问号问题，是因为配置中有非ascii字符编码，这两个问号本来是好看的箭头，但是箭头在当前字体中是不会被显示的……所以解决方法是重新下载一个支持非ascii编码的字体：

github上有一个字体：yizhen20133868/fonts


打开terminal的偏好设置-描述文件，点击字体的“更改…”左上角设置按钮有个“管理字体…”，将刚刚安装的字体导入，然后在更改字体为刚刚导入的那个字体，我选择的是 Meslo LG S DZ Regular for Powerline 字体
# clone
git clone https://github.com/powerline/fonts.git
# install
cd fonts
./install.sh



