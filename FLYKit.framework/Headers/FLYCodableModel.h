//
//  FLYCodableModel.h
//  FLYKit
//
//  Created by fly on 2024/4/19.
//  Copyright © 2024年 fly. All rights reserved.
//


/************** NSCoding、NSSecureCoding **************
 
 NSCoding 是一个协议，定义了两个方法，分别是 encodeWithCoder: 和 initWithCoder:。
 实现了 NSCoding 协议的对象可以通过 NSKeyedArchiver 进行归档（序列化）为二进制数据，
 以及通过 NSKeyedUnarchiver 进行解档（反序列化）还原为对象。

 
 NSSecureCoding 是 NSCoding 的一个子协议，它增加了安全性的要求。实现了 NSSecureCoding 协议的对象要求必须实现一个静态方法 +supportsSecureCoding，并返回 YES，以确保对象的序列化和反序列化过程中的数据安全性。
 
 (因为iOS12之后，新出的解档方法[NSKeyedUnarchiver unarchivedObjectOfClasses:set fromData:data error:&error] 默认是启用 requiresSecureCoding的，所以归档解档的类还要遵守NSSecureCoding协议)
 
 ******************************************************/



/************************************************************************************
 
 本类的内部已经实现了归档解档的方法，以后需要归档解档的类，直接继承本类就好了，不用再去实现归档解档的方法。
 本类提供了 identity 属性，init的时候会自动赋值，具有唯一性，每个实例化对象都不会重复。
 
*************************************************************************************/


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FLYCodableModel : NSObject < NSCoding, NSSecureCoding >

// identity，给 FLYModelPersistenceManager 类用来查找model的 (只读属性，内部都会给它赋值)
@property (nonatomic, readonly) NSString * identity;

@end

NS_ASSUME_NONNULL_END
