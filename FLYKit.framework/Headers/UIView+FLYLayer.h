//
//  UIView+FLYLayer.h
//  FLYKit
//
//  Created by fly on 2021/8/13.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (FLYLayer)


/// 设置圆角
/// @param cornerRadius 圆角半径
- (void)cornerRadius:(CGFloat)cornerRadius;

/// 设置指定角的圆角 (设置完frame调用，或者在自动布局后面调用)
/// @param cornerRadius 圆角半径
/// @param corners 需要设置为圆角的角
-(void)cornerRadius:(CGFloat)cornerRadius roundCorners:(UIRectCorner)corners;

/// 设置边框
/// @param borderWidth 边框宽度
/// @param borderColor 边框颜色
- (void)borderWidth:(CGFloat)borderWidth color:(UIColor *)borderColor;

/// 设置阴影
/// @param shadowColor 阴影颜色
/// @param opacity 阴影透明度
/// @param radius 阴影半径
/// @param offset 阴影偏移
-(void)shadowColor:(UIColor *)shadowColor opacity:(CGFloat)opacity radius:(CGFloat)radius offset:(CGSize)offset;



/// 设置圆角 + 边框
/// @param cornerRadius 圆角半径
/// @param borderWidth 边框宽度
/// @param borderColor 边框颜色
- (void)cornerRadius:(CGFloat)cornerRadius borderWidth:(CGFloat)borderWidth borderColor:(UIColor *)borderColor;

///  设置圆角 + 阴影
/// @param cornerRadius 圆角半径
/// @param shadowColor 阴影颜色
/// @param shadowOpacity 阴影透明度
/// @param shadowRadius 阴影半径
/// @param shadowOffset 阴影偏移量
- (void)cornerRadius:(CGFloat)cornerRadius shadowColor:(UIColor *)shadowColor shadowOpacity:(CGFloat)shadowOpacity shadowRadius:(CGFloat)shadowRadius shadowOffset:(CGSize)shadowOffset;

/// 设置指定圆角 + 边框 (设置完frame调用，或者在自动布局后面调用)
/// @param cornerRadius 圆角半径
/// @param corners 需要设置为圆角的角
/// @param borderWidth 边框宽度
/// @param borderColor 边框颜色
-(void)cornerRadius:(CGFloat)cornerRadius roundCorners:(UIRectCorner)corners borderWidth:(CGFloat)borderWidth borderColor:(UIColor *)borderColor;

///  设置指定圆角 + 阴影 (设置完frame并且执行完addSubview再调用，或者在自动布局后面调用)
/// @param cornerRadius 圆角半径
/// @param corners 需要设置为圆角的角
/// @param shadowColor 阴影颜色
/// @param shadowOpacity 阴影透明度
/// @param shadowRadius 阴影半径
/// @param shadowOffset 阴影偏移量
- (void)cornerRadius:(CGFloat)cornerRadius roundCorners:(UIRectCorner)corners shadowColor:(UIColor *)shadowColor shadowOpacity:(CGFloat)shadowOpacity shadowRadius:(CGFloat)shadowRadius shadowOffset:(CGSize)shadowOffset;

/// 设置边框 + 阴影
/// @param borderWidth 边框宽度
/// @param borderColor 边框颜色
/// @param shadowColor 阴影颜色
/// @param shadowOpacity 阴影透明度
/// @param shadowRadius 阴影半径
/// @param shadowOffset 阴影偏移量
-(void)borderWidth:(CGFloat)borderWidth borderColor:(UIColor *)borderColor shadowColor:(UIColor *)shadowColor shadowOpacity:(CGFloat)shadowOpacity shadowRadius:(CGFloat)shadowRadius shadowOffset:(CGSize)shadowOffset;



/// 设置圆角 + 边框 + 阴影
/// @param cornerRadius 圆角半径
/// @param borderWidth 边框宽度
/// @param borderColor 边框颜色
/// @param shadowColor 阴影颜色
/// @param shadowOpacity 阴影透明度
/// @param shadowRadius 阴影半径
/// @param shadowOffset 阴影偏移量
-(void)cornerRadius:(CGFloat)cornerRadius borderWidth:(CGFloat)borderWidth borderColor:(UIColor *)borderColor shadowColor:(UIColor *)shadowColor shadowOpacity:(CGFloat)shadowOpacity shadowRadius:(CGFloat)shadowRadius shadowOffset:(CGSize)shadowOffset;

/// 设置指定圆角 + 边框 + 阴影 (设置完frame并且执行完addSubview再调用，或者在自动布局后面调用)
/// @param cornerRadius 圆角半径
/// @param corners 需要设置为圆角的角
/// @param borderWidth 边框宽度
/// @param borderColor 边框颜色
/// @param shadowColor 阴影颜色
/// @param shadowOpacity 阴影透明度
/// @param shadowRadius 阴影半径
/// @param shadowOffset 阴影偏移量
-(void)cornerRadius:(CGFloat)cornerRadius roundCorners:(UIRectCorner)corners borderWidth:(CGFloat)borderWidth borderColor:(UIColor *)borderColor shadowColor:(UIColor *)shadowColor shadowOpacity:(CGFloat)shadowOpacity shadowRadius:(CGFloat)shadowRadius shadowOffset:(CGSize)shadowOffset;


@end

NS_ASSUME_NONNULL_END


