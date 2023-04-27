//
//  FLYSoundTools.h
//  FLYKit
//
//  Created by fly on 2019/4/29.
//  Copyright © 2019 fly. All rights reserved.
//

/**
 用于播放短暂的声音，例如提示音、电铃声、键盘按键声等。
 它通常被用于在应用程序中播放简短的提示音，比如用户接收到通知时播放的提示音。
 它不能用于播放长音频文件。
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FLYSoundTools : NSObject

/** 播放声音 （如果手机被设置为静音，用户什么也听不到）*/
+ (void)playSystemSoundWithURL:(NSURL *)url;

/** 播放声音 （如果手机被设置为静音或震动，将通过震动提醒用户）*/
+ (void)playAlertSoundWithURL:(NSURL *)url;

/** 清空音效文件的内存 (可以在收到内存警告时调用) */
+ (void)clearMemory;

@end

NS_ASSUME_NONNULL_END
