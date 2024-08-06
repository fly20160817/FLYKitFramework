//
//  UIDevice+FLYExtension.h
//  FLYKit
//
//  Created by fly on 2024/8/6.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIDevice (FLYExtension)

//设备型号  例如：iPhone16,1  如果需要显示具体的 iPhone 15 Pro，需要自己映射
- (NSString *)deviceModel;

@end

NS_ASSUME_NONNULL_END
