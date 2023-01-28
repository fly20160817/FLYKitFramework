//
//  FLYTime.h
//  FLYKit
//
//  Created by fly on 2018/11/20.
//  Copyright © 2018年 fly. All rights reserved.
//

/****************** 关于时间格式yyyy-MM-dd HH:mm:ss具体讲解 *****************
 
 y       不包含纪元的年份。不具有前导零。
 yy      不包含纪元的年份。具有前导零。
 yyyy    包含纪元的四位数的年份。

 M       月份数字。一位数的月份没有前导零。
 MM      月份数字。一位数的月份有一个前导零。
 MMM     月份的缩写名称，在AbbreviatedMonthNames中定义。
 MMMM    月份的完整名称，在MonthNames中定义。

 d       月中的某一天。一位数的日期没有前导零。
 dd      月中的某一天。一位数的日期有一个前导零。
 ddd     周中某天的缩写名称，在AbbreviatedDayNames中定义。
 dddd    周中某天的完整名称，在DayNames中定义。

 h       12小时制的小时。一位数的小时数没有前导零。
 hh      12小时制的小时。一位数的小时数有前导零。
 H       24小时制的小时。一位数的小时数没有前导零。
 HH      24小时制的小时。一位数的小时数有前导零。

 m       分钟。一位数的分钟数没有前导零。
 mm      分钟。一位数的分钟数有一个前导零。

 s       秒。一位数的秒数没有前导零。
 ss      秒。一位数的秒数有一个前导零。
 
 *******************************************************************/

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, FLYDateFormatType) {
    FLYDateFormatTypeYMDHMS,    //yyyy-MM-dd HH:mm:ss
    FLYDateFormatTypeYMDHM,     //yyyy-MM-dd HH:mm
    FLYDateFormatTypeYMD,       //yyyy-MM-dd
    FLYDateFormatTypeZYMDHMS,   //yyyy年MM月dd日 HH:mm:ss
    FLYDateFormatTypeZYMDHM,    //yyyy年MM月dd日 HH:mm
    FLYDateFormatTypeZYMD,      //yyyy年MM月dd日
    FLYDateFormatTypeHMS,       //HH:mm:ss
    FLYDateFormatTypeHM,        //HH:mm
};

typedef NS_ENUM(NSInteger, FLYTimeStampType) {
    /* 1和1000这两个值不要改，内部会直接取到枚举的值进行计算 */
    FLYTimeStampTypeSecond = 1,           //秒
    FLYTimeStampTypeMillisecond = 1000    //毫秒
};



// date、时间戳、字符串时间的相互转换

@interface FLYTime : NSObject

/// date转换字符串 (枚举格式字符串)
+ (NSString *)dateToString:(NSDate *)date dateFormatType:(FLYDateFormatType)dateFormatType;

/// date转换字符串 (自定义格式字符串)
+ (NSString *)dateToString:(NSDate *)date dateFormat:(NSString *)dateFormat;

/// date转时间戳
+ (NSString *)dateToTimeStamp:(NSDate *)date timeStampType:(FLYTimeStampType)timeStampType;



/// 字符串转date (枚举格式字符串)
+ (NSDate *)stringToDate:(NSString *)string dateFormatType:(FLYDateFormatType)dateFormatType;

/// 字符串转date (自定义格式字符串)
+ (NSDate *)stringToDate:(NSString *)string dateFormat:(NSString *)dateFormat;

/// 字符串转时间戳 (枚举格式字符串)
+ (NSString *)stringToTimeStamp:(NSString *)string dateFormatType:(FLYDateFormatType)dateFormatType timeStampType:(FLYTimeStampType)timeStampType;

/// 字符串转时间戳 (自定义格式字符串)
+ (NSString *)stringToTimeStamp:(NSString *)string dateFormat:(NSString *)dateFormat timeStampType:(FLYTimeStampType)timeStampType;



/// 时间戳转date
+ (NSDate *)timeStampToDate:(NSString *)timeStamp timeStampType:(FLYTimeStampType)timeStampType;

/// 时间戳转字符串 (枚举格式字符串)
+ (NSString *)timeStampToString:(NSString *)timeStamp dateFormatType:(FLYDateFormatType)dateFormatType timeStampType:(FLYTimeStampType)timeStampType;

/// 时间戳转字符串 (自定义格式字符串)
+ (NSString *)timeStampToString:(NSString *)timeStamp dateFormat:(NSString *)dateFormat timeStampType:(FLYTimeStampType)timeStampType;


@end

NS_ASSUME_NONNULL_END

