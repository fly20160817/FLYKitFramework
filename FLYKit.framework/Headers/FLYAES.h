//
//  FLYAES.h
//  FLYKit
//
//  Created by fly on 2021/10/25.
//


/*
 
 AES（对称加密）
    • 特点：加密和解密使用同一个密钥。
    • 优点：速度快、适合加密大量数据。
    • 缺点：密钥需要安全传输，否则容易泄露。
 
 
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

@interface FLYAES : NSObject

/// AES加密
/// @param data 需要加密的data (外界可以用 FLYDataConverter 把需要加密的数据转成 NSData)
/// @param key 支持两种方式：
///              1.长度为16的字符串
///              2.Base64编码的16字节二进制密钥(后台随机生成16字节二进制密钥，再把二进制密钥Base64编码后传给我)
/// @return 加密后的结果(原始为 NSData 类型)，这里会把它转成 Base64 编码的字符串
+ (NSString *)aes128EncryptData:(NSData *)data key:(NSString *)key;

/// AES解密
/// @param content 需要解密的字符串 (Base64 编码的字符串)
/// @param key 支持两种方式：
///              1.长度为16的字符串
///              2.Base64编码的16字节二进制密钥(后台随机生成16字节二进制密钥，再把二进制密钥Base64编码后传给我)
/// @return 解密后的data（外界可以用 FLYDataConverter 把 Data 转换成想要的类型）
+ (NSData *)aes128DecryptString:(NSString *)content key:(NSString *)key;


/// 随机生成一个 AES密钥（长度16）
+ (NSString *)randomAESKey;

@end

NS_ASSUME_NONNULL_END
