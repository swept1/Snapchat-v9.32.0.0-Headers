//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, SCQueuePerformer;

@interface SCArchiveLoader : NSObject
{
    Class _class;
    NSString *_path;
    CDUnknownBlockType _completion;
    NSMutableArray *_loadedFromDiskCallbacks;
    SCQueuePerformer *_queuePerformer;
    unsigned long long _loadState;
}

@property(nonatomic) unsigned long long loadState; // @synthesize loadState=_loadState;
@property(readonly, nonatomic) SCQueuePerformer *queuePerformer; // @synthesize queuePerformer=_queuePerformer;
- (void).cxx_destruct;
- (void)_runOnMainThreadAsynchronouslyIfNecessary:(CDUnknownBlockType)arg1;
- (_Bool)saveObject:(id)arg1;
- (void)_didFinishLoadingFromDiskWithObject:(id)arg1;
- (void)waitUntilLoadFromDiskCallback:(CDUnknownBlockType)arg1;
- (void)unarchive;
- (void)loadFromDiskAsync:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithClass:(Class)arg1 fileName:(id)arg2;

@end
