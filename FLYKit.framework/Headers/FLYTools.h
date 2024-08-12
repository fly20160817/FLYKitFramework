//
//  FLYTools.h
//  FLYKit
//
//  Created by fly on 2021/8/11.
//


#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface FLYTools : NSObject


/**
 * 本地化字符串，并支持格式化。
 *
 * 该函数首先根据提供的键（key）从本地化文件中获取对应的字符串，然后
 * 使用可变参数列表对字符串进行格式化。如果本地化字符串中包含格式占位符
 * （例如 %@、%d 等），可变参数列表中的值将替换这些占位符。
 *
 * @param key 需要本地化的字符串键。该键将用于从 Localizable.strings 文件中获取对应的值。
 * @param ... 可变参数列表，用于格式化字符串。可以传递多个参数，这些参数将按顺序替换字符串中的占位符。
 *
 * @return 本地化并格式化后的字符串。如果没有找到对应的本地化字符串，返回键本身。
 */
NSString* FLYLocalizedString(NSString *key, ...);



/// 获取文字高度
/// @param text 文字内容
/// @param font 字体
/// @param width 宽度
+ (float)heightForText:(NSString *)text font:(UIFont *)font width:(float)width;


/// 获取文字宽度
/// @param text 文字内容
/// @param font 字体
/// @param height 高度
+ (float)widthForText:(NSString *)text font:(UIFont *)font height:(float)height;


/// 获取当前屏幕显示的ViewController
+ (UIViewController *)currentViewController;


/// 获取keyWindow
+ (UIWindow *)keyWindow;


/// 获取安全区
+ (UIEdgeInsets)safeAreaInsets;


/// 获取视图的屏幕截图 (view转image)
+ (UIImage *)takeScreenshotOfView:(UIView *)view;


/**
 * 比较版本号
 *
 * @param v1 当前版本号
 * @param v2 appStore版本号
 *
 * @return 如果版本号相等，返回 0,
 *         如果第一个版本号低于第二个，返回 -1，否则返回 1.
 */
+ (NSInteger)compareVersionWithCurrentVersion:(NSString *)v1 appStoreVersion:(NSString *)v2;



@end

NS_ASSUME_NONNULL_END
