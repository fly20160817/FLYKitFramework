Pod::Spec.new do |spec|


  # 框架的名字
  spec.name         = "FLYIKit"
  
  # 当前版本（注意，是当前版本，假如后续更新了新版本，需要修改此处，以后打的tag，保持和versin一致）
  spec.version      = "0.5.9"
  
  # 简要描述 (在 pod search FLYKit 的时候会显示该信息)
  spec.summary      = "fly的工具包"

  # 详细描述 （字数一定要比summary的字数多，不然提交的时候会报警告）
  spec.description  = "平时常用的方法都集成了进来，方便开发。"

  # 框架的首页 （填框架远程仓库的地址就可以）
  spec.homepage     = "https://github.com/fly20160817/FLYKitFramework"
  
  # 截图
  # spec.screenshots  = "www.example.com/screenshots_1.gif", "www.example.com/screenshots_2.gif"



  # 开源协议 （填MIT就可以）
  spec.license      = "MIT"
  # spec.license      = { :type => "MIT", :file => "FILE_LICENSE" }



  # 作者
  spec.author             = { "“fly”" => "“809176334@qq.com”" }
  # Or just: spec.author    = "“fly”"
  # spec.authors            = { "“fly”" => "“809176334@qq.com”" }
  # spec.social_media_url   = "https://twitter.com/“fly”"
  
  
  
  # 支持的平台和版本
  # spec.platform     = :ios, "5.0"

  #  当需要支持多个平台时，需要详细写
   spec.ios.deployment_target = "12.0"
  # spec.osx.deployment_target = "10.7"
  # spec.watchos.deployment_target = "2.0"
  # spec.tvos.deployment_target = "9.0"
  


  # 代码存放的远程地址和tag
  # (地址是.git结尾，tag要在github的releases存在，不然找不到代码) (上面填写的version要和这里的tag保持一致)
  spec.source       = { :git => "https://github.com/fly20160817/FLYKitFramework.git", :tag => "#{spec.version}" }



  # 需要下载的文件 （"Classes/**/*.{h,m}"  代表Classes文件夹下，/**通配符，通配的是目录，在里面创子文件夹也可以识别，/*代表匹配的文件，.{h,m} 匹配的文件类型） （并不是所有文件都要下载，比如案例文件和README.md等文件都不需要放到框架中）
  #spec.source_files  = "Classes", "Classes/**/*.{h,m,swift}"
  
  # 如果想以framework而非源码形式提供，需要指定framework所在工程相对目录
  spec.vendored_frameworks = "**/FLYKit.framework"
  
  
  # 需要忽略的文件
  # spec.exclude_files = "Classes/Exclude"

  # 公开头文件(.h文件)
  # spec.public_header_files = "Classes/**/*.h"



  # 资源文件（配置的文件都会被放到mainBundle中）
  # spec.resource  = "icon.png"
  # spec.resources = "Resources/*.png"
    spec.resource = "**/FLYKit.framework/FLYKitBundle.bundle"


  # 框架 install 或者 update 之后不会更新的文件路径
  # spec.preserve_paths = "FilesToSave", "MoreFilesToSave"



  # 框架依赖的framework
  # spec.framework  = "SomeFramework"
  # spec.frameworks = "SomeFramework", "AnotherFramework"

  # 框架依赖的librarie
  # spec.library   = "iconv"
  # spec.libraries = "iconv", "xml2"



  # 框架是否支持ARC
  # spec.requires_arc = true

  # 框架需要配置的参数环境，如头文件搜索路径
  # spec.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  
  # 依赖的其他pod模块 (如果有多个，每个单独写一行)
   spec.dependency "Kingfisher"
   spec.dependency "MJRefresh"
  
  
  # pod_target_xcconfig：当前库的 Build Settings 设置
  # 'VALID_ARCHS' => 'x86_64 armv7 arm64' 上传framework包必须设置这个，不然上传会报错
  spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 arm64' }

end
