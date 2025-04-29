//
//  UIImage+FLYExtension.h
//  FLYKit
//
//  Created by fly on 2021/8/27.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (FLYExtension)

/// 返回一个渲染模式为原始模式的image
/// @param name 图片名字
+ (UIImage *)imageNamedWithOriginal:(NSString *)name;

/// 根据颜色和大小，生成一张图片
/// @param color 颜色
/// @param size 大小
+ (UIImage *)imageWithColor:(UIColor*)color size:(CGSize)size;


/// 拉伸image
/// @param capInsets 设置拉伸的范围
- (UIImage *)resizableImageStretchWithCapInsets:(UIEdgeInsets)capInsets;


/// 异步压缩图片到指定大小
/// @param maxSizeKB 最大图片大小（单位：KB）
/// @param completion 压缩完成后回调，返回压缩后的 UIImage
- (void)compressToMaxSizeKB:(NSInteger)maxSizeKB completion:(void (^)(UIImage *compressedImage))completion;


@end

NS_ASSUME_NONNULL_END
