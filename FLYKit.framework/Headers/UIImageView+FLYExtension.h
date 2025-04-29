//
//  UIImageView+FLYExtension.h
//  FLYKit
//
//  Created by fly on 2021/8/27.
//

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
