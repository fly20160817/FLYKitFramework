//
//  FLYDataConverter.h
//  test111111
//
//  Created by fly on 2025/11/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FLYDataConverter : NSObject

/// 字符串 -> NSData
+ (NSData *)dataFromString:(NSString *)string;

/// 字典 -> NSData
+ (NSData *)dataFromDictionary:(NSDictionary *)dictionary;

/// 数组 -> NSData
+ (NSData *)dataFromArray:(NSArray *)array;


/// NSData -> 字符串
+ (NSString *)stringFromData:(NSData *)data;

/// 字典 -> 字符串
+ (NSString *)stringFromDictionary:(NSDictionary *)dictionary;

/// 数组 -> 字符串
+ (NSString *)jsonStringFromArray:(NSArray *)array;


/// NSData -> 数组
+ (NSArray *)arrayFromData:(NSData *)data;

/// 字符串 -> 数组
+ (NSArray *)arrayFromString:(NSString *)string;


/// NSData -> 字典
+ (NSDictionary *)dictionaryFromData:(NSData *)data;

/// 字符串 -> 字典
+ (NSDictionary *)dictionaryFromString:(NSString *)string;



/// NSData -> 十六进制字符串
+ (NSString *)hexStringFromData:(NSData *)data;

/// 十六进制字符串 -> NSData
+ (NSData *)dataFromHexString:(NSString *)hexString;


@end

NS_ASSUME_NONNULL_END
