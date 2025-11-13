//
//  FLYRSA.h
//  FLYKit
//
//  Created by fly on 2021/10/20.
//

/*
 
 RSA（非对称加密）
    • 基于一对密钥：公钥加密、私钥解密。
    • 优点：密钥不用直接传输，安全性高。
    • 缺点：加解密速度慢，不适合加密大数据。
 
 
 通常会使用 混合加密：
    先用 AES 加密数据，
    再用 RSA 公钥 加密 AES 密钥，
    实现既能保证 数据传输安全，又能兼顾 加密解密速度。
 
 
 AES 和 RSA 都是对二进制数据进行加密，输入和输出都是 Data 类型。
 加密方法接收的参数是 Data，可以先将字符串、字典或数组等转换为 Data 再加密。
 为了便于传输和存储，通常会用 Base64 将加密结果转成可读字符串。
 
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FLYRSA : NSObject

/// RSA加密
/// @param data 需要加密的data (外界可以用 FLYDataConverter 把需要加密的数据转成 NSData)
/// @param publicKey 公钥
/// @return 加密后的结果(原始为 NSData 类型)，这里会把它转成 Base64 编码的字符串
+ (NSString *)rsaEncryptData:(NSData *)data publicKey:(NSString *)publicKey;


/// RSA解密
/// @param content 需要解密的字符串 (Base64 编码的字符串)
/// @param privateKey 私钥
/// @return 解密后的data（外界可以用 FLYDataConverter 把 Data 转换成想要的类型）
+ (NSData *)rsaDecryptString:(NSString *)content privateKey:(NSString *)privateKey;

@end

NS_ASSUME_NONNULL_END
