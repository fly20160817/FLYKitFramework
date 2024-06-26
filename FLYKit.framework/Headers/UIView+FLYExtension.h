//
//  UIView+FLYExtension.h
//  FLYKit
//
//  Created by fly on 2021/9/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (FLYExtension)

/// 获取当前 view 所在的 viewController
@property (nullable, nonatomic, readonly) UIViewController *viewController;


/// 移除所有子视图
- (void)removeAllSubviews;

@end

NS_ASSUME_NONNULL_END
