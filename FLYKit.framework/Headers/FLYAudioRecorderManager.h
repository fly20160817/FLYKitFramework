//
//  FLYAudioRecorderManager.h
//  FLYKit
//
//  Created by fly on 2023/4/25.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^FinishRecordingBlock)(NSURL * url);

@interface FLYAudioRecorderManager : NSObject

+ (instancetype)sharedManager;

// 开始录音
- (BOOL)start;

// 暂停录音
- (void)pause;

// 继续录音
- (void)resume;

// 停止录音 (回调里面是录音的路径)
- (void)stop:(FinishRecordingBlock)recordingBlock;

@end

NS_ASSUME_NONNULL_END
