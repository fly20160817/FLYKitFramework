//
//  FLYPhotoManager.h
//  FLYKit
//
//  Created by fly on 2019/2/27.
//  Copyright © 2019年 fly. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/*
    处理图片 (保存)
 */

@interface FLYPhotoManager : NSObject


/// 保存图片到系统相册
/// - Parameters:
///   - image: 图片
///   - completion: 保存完成的回调
+ (void)saveImageToPhotosAlbum:(UIImage *)image completion:(void (^)(BOOL success, NSError *error))completion;


/**
    保存图片到自己自定义的相册
    image: 图片
    albumTitle: 自定义相册的名字
    completion: 保存完成的回调
 */
+ (void)saveImage:(UIImage *)image albumTitle:(NSString *)albumTitle completion:(void(^)(BOOL success, NSError *error))completion;



@end

NS_ASSUME_NONNULL_END
