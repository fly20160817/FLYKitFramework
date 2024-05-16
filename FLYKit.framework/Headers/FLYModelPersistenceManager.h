//
//  FLYModelPersistenceManager.h
//  FLYKit
//
//  Created by fly on 2024/3/20.
//  Copyright © 2024年 fly. All rights reserved.
//


/************************************************************************************
 
 本类用于持久化保存model数据，内部用到的是归档和解档技术，使用起来简单方便。
 🌟只适用保存少量数据🌟，如果大量数据频繁进行归档和解档操作，会增加性能消耗。
 每次增删改查，都要进行归档和解档操作，即使只想获取一条数据，也要对整个文件进行归档和解档。
 内部读取和写入都是在主线程上，如果大量数据或者频繁调用(大概每秒调用5次以上)，会阻塞主线程，导致页面一卡一卡的。
 不使用子线程的原因:异步操作虽然可以避免阻塞主线程，但如果在多个地方同时对同一个文件进行读写操作就会出现问题，需要做并发、事务、死锁等一系列的处理，使用起来也变得不方便，违背了本类简单易用的初衷。如果需要存储大量数据或者频繁调用，建议使用其他存储方式。

 
 传入的模型必须是FLYCodableModel的子类，因为FLYCodableModel类内部实现了归档、解档操作，并提供了用于查询的id。
 
 ************************************************************************************/



#import <UIKit/UIKit.h>
#import <FLYKit/FLYCodableModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface FLYModelPersistenceManager : NSObject


// 获取指定类的所有模型对象
+ (NSMutableArray *)getModelsForClass:(Class)modelClass;

// 根据 id 查找模型对象
+ (FLYCodableModel *)getModel:(Class)modelClass forIdentity:(NSString *)identity;

// 保存模型对象
+ (void)saveModel:(FLYCodableModel *)model;

// 更新模型对象
+ (void)updateModel:(FLYCodableModel *)model;

// 删除模型对象 (如果要删除多个数据，不要循环调用本方法，建议使用下面批量删除的方法。因为每次调用，内部都有一次解档归档操作，多次频繁调用会影响性能)
+ (void)deleteModel:(FLYCodableModel *)model;

// 删除多个模型对象
+ (void)deleteModels:(NSArray<FLYCodableModel *> *)models forClass:(Class)modelClass;

// 删除指定类的所有对象
+ (void)deleteAllModelForClass:(Class)modelClass;

// 删除所有模型
+ (void)deleteAllModel;


@end

NS_ASSUME_NONNULL_END
