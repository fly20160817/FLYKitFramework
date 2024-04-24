//
//  FLYModelPersistenceManager.h
//  FLYKit
//
//  Created by fly on 2024/3/20.
//  Copyright © 2024年 fly. All rights reserved.
//


/************************************************************************************
 
 本类持久化保存model数据，内部用到的是归档和解档技术，使用起来简单方便。
 🌟只适用保存少量数据🌟，如果大量数据频繁进行归档和解档操作，会增加性能消耗。
 因为每次增删改查，都要进行归档和解档操作，即使只想获取一条数据，也要对整个文件进行归档和解档。
 内部把数据写入沙盒是在主线程上，如果大量数据会阻塞主线程。
 
 
 必须是 FLYCodableModel 的子类才能使用本类。FLYCodableModel类内部有归档、解档，还有供本类查询用的id。
 
 ************************************************************************************/


#import <UIKit/UIKit.h>
#import <FLYKit/FLYCodableModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface FLYModelPersistenceManager : NSObject


// 保存模型对象
+ (void)saveModel:(FLYCodableModel *)model;

// 删除模型对象
+ (void)deleteModel:(FLYCodableModel *)model;

// 更新模型对象
+ (void)updateModel:(FLYCodableModel *)model;

// 获取指定类的所有模型对象数组
+ (NSMutableArray *)getAllModelsForClass:(Class)modelClass;


@end

NS_ASSUME_NONNULL_END
