//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AMPConfig : NSObject
{
    _Bool _sessionTrackingEnabled;
    _Bool _authUploadEnabled;
    int _eventUploadThreshold;
    int _eventUploadMaxBatchSize;
    int _eventMaxCount;
    int _eventRemoveBatchSize;
    int _eventUploadPeriodSeconds;
    int _minTimeBetweenSessionsSeconds;
    NSString *_unauthUploadUrl;
    NSString *_storageNameSpace;
}

+ (id)AMPConfigWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) int minTimeBetweenSessionsSeconds; // @synthesize minTimeBetweenSessionsSeconds=_minTimeBetweenSessionsSeconds;
@property(readonly, nonatomic) int eventUploadPeriodSeconds; // @synthesize eventUploadPeriodSeconds=_eventUploadPeriodSeconds;
@property(readonly, nonatomic) int eventRemoveBatchSize; // @synthesize eventRemoveBatchSize=_eventRemoveBatchSize;
@property(readonly, nonatomic) int eventMaxCount; // @synthesize eventMaxCount=_eventMaxCount;
@property(readonly, nonatomic) int eventUploadMaxBatchSize; // @synthesize eventUploadMaxBatchSize=_eventUploadMaxBatchSize;
@property(readonly, nonatomic) int eventUploadThreshold; // @synthesize eventUploadThreshold=_eventUploadThreshold;
@property(readonly, nonatomic) _Bool authUploadEnabled; // @synthesize authUploadEnabled=_authUploadEnabled;
@property(readonly, nonatomic) _Bool sessionTrackingEnabled; // @synthesize sessionTrackingEnabled=_sessionTrackingEnabled;
@property(readonly, nonatomic) NSString *storageNameSpace; // @synthesize storageNameSpace=_storageNameSpace;
@property(readonly, nonatomic) NSString *unauthUploadUrl; // @synthesize unauthUploadUrl=_unauthUploadUrl;
- (void).cxx_destruct;
- (id)initWithBuilder:(id)arg1;

@end
