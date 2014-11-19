//
//  ZZDownloadTaskManager.h
//  Pods
//
//  Created by zhangxinzheng on 11/13/14.
//
//

#import <Foundation/Foundation.h>
#import "ZZDownloadTask.h"
#import "ZZDownloadOperation.h"

#import "ZZDownloadBaseEntity.h"

@interface ZZDownloadTaskManager : NSObject

+ (id)shared;
+ (NSArray *)getBiliTaskFilePathList;
- (void)addOp:(ZZDownloadOperation *)operation withEntity:(ZZDownloadBaseEntity *)entity block:(void (^)(id))block;

@end
