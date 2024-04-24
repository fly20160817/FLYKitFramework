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
    保存图片、视频到系统相册
 */

@interface FLYPhotoManager : NSObject


// 保存图片到系统相册
+ (void)saveImageToPhotosAlbum:(NSArray<UIImage *> *)images completion:(void (^)(BOOL success, NSError *error))completion;

// 保存图片到系统相册 (参数是图片的本地路径)
+ (void)saveImageToPhotosAlbumWithFileURLs:(NSArray<NSURL *> *)imageFileURLs completion:(void (^)(BOOL success, NSError *error))completion;

// 保存视频到系统相册 (参数是视频的本地路径)
+ (void)saveVideoToPhotosAlbum:(NSArray<NSURL *> *)videoFileURLs completion:(void (^)(BOOL success, NSError *error))completion;



// 保存图片到自定义的相册
+ (void)saveImages:(NSArray<UIImage *> *)images albumTitle:(NSString *)albumTitle completion:(void(^)(BOOL success, NSError *error))completion;

// 保存图片到自定义的相册 (参数是图片的本地路径)
+ (void)saveImageWithFileURLs:(NSArray<NSURL *> *)imageFileURLs albumTitle:(NSString *)albumTitle completion:(void(^)(BOOL success, NSError *error))completion;

// 保存视频到自定义的相册 (参数是视频的本地路径)
+ (void)saveVideoWithFileURLs:(NSArray<NSURL *> *)videoFileURLs albumTitle:(NSString *)albumTitle completion:(void (^)(BOOL success, NSError *error))completion;


@end

NS_ASSUME_NONNULL_END
