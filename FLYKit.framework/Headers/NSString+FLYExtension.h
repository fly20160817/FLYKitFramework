//
//  NSString+FLYExtension.h
//  FLYKit
//
//  Created by fly on 2021/10/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (FLYExtension)


/// double转字符串 (本方法不会精度丢失) (如果直接用stringValue或stringWithFormat来转换成String展示，很容易造成精度的丢失)
/// @param number 数字
+ (NSString *)doubleToString:(double)number;

@end

NS_ASSUME_NONNULL_END
