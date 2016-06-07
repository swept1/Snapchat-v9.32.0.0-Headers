//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSnapAdsSerializableData.h"

@class NSNumber, NSString, SCTargetingData;

@interface SCAdRequestData : NSObject <SCSnapAdsSerializableData>
{
    NSString *_userAdId;
    NSString *_rawUserData;
    SCTargetingData *_targeting;
    NSString *_sessionId;
    NSNumber *_debug;
}

@property(readonly, copy, nonatomic) NSNumber *debug; // @synthesize debug=_debug;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, copy, nonatomic) SCTargetingData *targeting; // @synthesize targeting=_targeting;
@property(readonly, copy, nonatomic) NSString *rawUserData; // @synthesize rawUserData=_rawUserData;
@property(readonly, copy, nonatomic) NSString *userAdId; // @synthesize userAdId=_userAdId;
- (void).cxx_destruct;
- (id)toJson;
- (id)serialize;
- (id)initWithUserAdId:(id)arg1 rawUserData:(id)arg2 targeting:(id)arg3 sessionId:(id)arg4 debug:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

