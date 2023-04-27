//
//  FLYAudioPlayerManager.h
//  FLYAudioRecorder
//
//  Created by fly on 2023/4/27.
//

/********************* AVAudioPlayer 和 AVPlayer 的区别 ************************************
 
 AVAudioPlayer是AVFoundation框架中的一个基本音频播放器，用于播放本地的音频文件，支持多种音频格式，如mp3、wav、aac等。它也提供了基本的播放控制，如播放、暂停、停止、调节音量等。
 
 AVPlayer是AVFoundation框架中的一个高级播放器，可以播放本地和远程音频和视频文件。它提供了丰富的播放控制，如播放、暂停、快进、慢进、跳转、调节音量等，同时还支持后台播放、远程控制等功能。
 
 总的来说，AVPlayer更加高级，支持更多的功能和格式，适用于播放音频和视频文件，
 而AVAudioPlayer则更加简单，适用于基本的音频播放需求，不支持播放网络文件(可以先下载到本地再播)。
 
 ******************************************************************************************/


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FLYAudioPlayerManager : NSObject

+ (instancetype)sharedManager;

// 播放
- (void)playWithURL:(NSURL *)url;

// 暂停
- (void)pause;

// 继续
- (void)resume;

// 停止
- (void)stop;


@end

NS_ASSUME_NONNULL_END
