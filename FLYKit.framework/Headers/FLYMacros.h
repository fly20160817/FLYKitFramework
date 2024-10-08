//
//  FLYMacros.h
//  Elevator
//
//  Created by fly on 2018/11/8.
//  Copyright © 2018年 fly. All rights reserved.
//

#ifndef FLYMacros_h
#define FLYMacros_h


#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT  [UIScreen mainScreen].bounds.size.height

//状态栏高度
#define STATUSBAR_HEIGHT [[UIApplication sharedApplication] statusBarFrame].size.height
//导航栏高度
#define NAVBAR_HEIGHT [[UINavigationController alloc] init].navigationBar.frame.size.height
//状态栏高度 + 导航栏高度
#define STATUSADDNAV_HEIGHT (STATUSBAR_HEIGHT + NAVBAR_HEIGHT)
//tabber高度
#define TABBER_HEIGHT [[UITabBarController alloc] init].tabBar.frame.size.height

//安全距离底部的高度
#define SAFE_BOTTOM [FLYTools safeAreaInsets].bottom


/* 在 DEBUG 模式下，FLYLog 会被替换成 NSLog，并保留原本的参数传递，从而输出日志。
   在 Release 模式下，FLYLog 会被替换成空，从而完全移除日志输出的代码，减少应用的体积和提高性能。
   这样在发布应用时，不会输出不必要的日志，确保应用的性能和安全性。
 */
#ifdef DEBUG
#define FLYLog(...) NSLog(__VA_ARGS__)
#else
#define FLYLog(...)
#endif


#define WeakSelf __weak typeof(self) weakSelf = self;
#define StrongSelf __strong typeof(weakSelf) strongSelf = weakSelf;


#define RGB(r,g,b,a) [UIColor colorWithRed:((r)/255.0) green:((g)/255.0) blue:((b)/255.0) alpha:a]
//随机颜色
#define RGB_ARC4 RGB(arc4random_uniform(255), arc4random_uniform(255), arc4random_uniform(255), 1)


#define IMAGENAME(name) [UIImage imageNamed:name]
#define COLORHEX(hex) [UIColor colorWithHexString:hex]


//获取APP名称
#define APP_NAME ([[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleDisplayName"])

//获取Bundle Identifier
#define APP_BUNDLEIDENTIFIER ([[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleIdentifier"])

//项目版本号
#define APP_VERSION [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]

//项目的build版本号
#define APP_BUILD ([[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"])


//获取设备名字 （用户自定义的名字）
#define DEVICE_NAME UIDevice.currentDevice.name

//设备型号  iPhone16,1  如果需要显示具体的 iPhone 15 Pro，需要自己映射
#define DEVICE_MODEL UIDevice.currentDevice.deviceModel

//获取设备的系统版本
#define DEVICE_VERSION UIDevice.currentDevice.systemVersion


#define FONT_R(Size) [UIFont fontWithName:PFSCR size:Size]
#define FONT_M(Size) [UIFont fontWithName:PFSCM size:Size]
#define FONT_S(Size) [UIFont fontWithName:PFSCS size:Size]
#define FONT_L(Size) [UIFont fontWithName:PFSCL size:Size]
#define FONT_U(Size) [UIFont fontWithName:PFSCU size:Size]
#define FONT_T(Size) [UIFont fontWithName:PFSCT size:Size]


//苹方-简 常规体
#define PFSCR @"PingFangSC-Regular"
//苹方-简 中黑体
#define PFSCM @"PingFangSC-Medium"
//苹方-简 中粗体
#define PFSCS @"PingFangSC-Semibold"
//苹方-简 细体
#define PFSCL @"PingFangSC-Light"
//苹方-简 极细体
#define PFSCU @"PingFangSC-Ultralight"
//苹方-简 纤细体
#define PFSCT @"PingFangSC-Thin"


// 根据 key 获取本地化字符串，并支持格式化。
#define LS(key, ...) FLYLocalizedString(key, ##__VA_ARGS__)


#endif

