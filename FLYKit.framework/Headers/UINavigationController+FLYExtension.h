//
//  UINavigationController+FLYExtension.h
//  FLYKit
//
//  Created by fly on 2023/6/5.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UINavigationController (FLYExtension)

/// 跳转到导航栏前面指定的页面
- (void)popToViewControllerClass:(Class)viewControllerClass animated:(BOOL)animated;


/// 移除导航栏的中间页面 (传Class数组)
- (void)removeMiddleViewControllersWithClasses:(NSArray<Class> *)viewControllerClasses;

/// 移除导航栏的中间页面 (传实例数组)
- (void)removeMiddleViewControllers:(NSArray<UIViewController *> *)removeViewControllers;

@end

NS_ASSUME_NONNULL_END
