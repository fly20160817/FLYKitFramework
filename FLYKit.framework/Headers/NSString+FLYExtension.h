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


/// 数组、字典转json字符串
/// @param object 数组或字典
/// @return string json字符串
+ (NSString *)objectToJson:(id)object;


/// json字符串转数组、字典
/// @param jsonString json字符串
/// @return id 数组、字典
+ (id)jsonToObject:(NSString *)jsonString;

@end

NS_ASSUME_NONNULL_END
