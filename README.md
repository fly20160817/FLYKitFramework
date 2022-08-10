# FLYKit.framework依赖

### 不要在podspec里设置依赖，因为使用依赖的方法可能只有几个而已，而这几个方法我们还不一定使用，没必要全部依赖进去。当我们需要使用那几个依赖三方的方法时，我们再手动的pod三方进项目里。

---



## Kingfisher

如果想使用以下几个类来加载URL图片，就必须pod 'Kingfisher'
- ImageBrowserView(图片浏览器)、
- ImageZoomView(图片缩放)、
- ProgressImageView(图片下载进度)





