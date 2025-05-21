//
//  UIImageView+FLYExtension.h
//  FLYKit
//
//  Created by fly on 2021/8/27.
//

/**
 加载大的gif的时候，会白一下再显示(解析GIF需要时间)。
 如果不满意，可以使用成熟的三方框架来实现，比如 SDWebImage
 例子：
    let imageView = SDAnimatedImageView()
    imageView.image = SDAnimatedImage(named: "lanya_sousuo.gif")
 
     其他创建 gif image 的方式
    // SDAnimatedImage(data: <#T##NSData#>)
    // SDAnimatedImage(contentsOfFile: <#T##String#>)
 
 */


#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImageView (FLYExtension)

/// 加载本地GIF (通过文件名，不需要带扩展名)
- (void)loadGIFNamed:(NSString *)name;

/// 加载本地GIF (通过NSData)
- (void)loadGIFWithData:(NSData *)data;

/// 加载网络GIF (通过URL)
- (void)loadGIFWithURL:(NSURL *)url;

@end

NS_ASSUME_NONNULL_END
