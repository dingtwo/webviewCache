# webviewCache
webview缓存

突然好几个人一起问webview缓存的问题, 从网上找了一段代码接着往下写, 写的比较笨重, 用正则找css和js文件保存到本地, 然后发现还要处理跳转, 奔溃了, 所以就断掉了, 推荐还是用NSURLProtocol吧