//
//  FLYDataConverter.h
//  FLYKit
//
//  Created by fly on 2025/11/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FLYDataConverter : NSObject

/// 字符串 -> NSData
+ (NSData *)dataFromString:(NSString *)string
NS_SWIFT_NAME(data(fromString:));

/// 字典 -> NSData
+ (NSData *)dataFromDictionary:(NSDictionary *)dictionary
NS_SWIFT_NAME(data(fromDictionary:));

/// 数组 -> NSData
+ (NSData *)dataFromArray:(NSArray *)array
NS_SWIFT_NAME(data(fromArray:));


/// NSData -> 字符串
+ (NSString *)stringFromData:(NSData *)data
NS_SWIFT_NAME(string(fromData:));

/// 字典 -> 字符串
+ (NSString *)stringFromDictionary:(NSDictionary *)dictionary
NS_SWIFT_NAME(string(fromDictionary:));

/// 数组 -> 字符串
+ (NSString *)stringFromArray:(NSArray *)array
NS_SWIFT_NAME(string(fromArray:));


/// NSData -> 数组
+ (NSArray *)arrayFromData:(NSData *)data
NS_SWIFT_NAME(array(fromData:));

/// 字符串 -> 数组
+ (NSArray *)arrayFromString:(NSString *)string
NS_SWIFT_NAME(array(fromString:));


/// NSData -> 字典
+ (NSDictionary *)dictionaryFromData:(NSData *)data
NS_SWIFT_NAME(dictionary(fromData:));

/// 字符串 -> 字典
+ (NSDictionary *)dictionaryFromString:(NSString *)string
NS_SWIFT_NAME(dictionary(fromString:));



/// NSData -> 十六进制字符串
+ (NSString *)hexStringFromData:(NSData *)data
NS_SWIFT_NAME(hexString(fromData:));

/// 十六进制字符串 -> NSData
+ (NSData *)dataFromHexString:(NSString *)hexString
NS_SWIFT_NAME(data(fromHexString:));


@end

NS_ASSUME_NONNULL_END
