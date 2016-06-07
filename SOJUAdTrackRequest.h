//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUAdTrackRequest.h"

@class NSNumber, NSString, SOJUAdImpressionData, SOJUAdTargeting;

@interface SOJUAdTrackRequest : NSObject <SOJUAdTrackRequest>
{
    NSString *_requestId;
    NSNumber *_canTrack;
    NSString *_userAdId;
    NSString *_rawUserData;
    NSString *_rawAdData;
    SOJUAdTargeting *_targeting;
    SOJUAdImpressionData *_impressionData;
    NSNumber *_debug;
    NSString *_sessionId;
}

@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, copy, nonatomic) NSNumber *debug; // @synthesize debug=_debug;
@property(readonly, copy, nonatomic) SOJUAdImpressionData *impressionData; // @synthesize impressionData=_impressionData;
@property(readonly, copy, nonatomic) SOJUAdTargeting *targeting; // @synthesize targeting=_targeting;
@property(readonly, copy, nonatomic) NSString *rawAdData; // @synthesize rawAdData=_rawAdData;
@property(readonly, copy, nonatomic) NSString *rawUserData; // @synthesize rawUserData=_rawUserData;
@property(readonly, copy, nonatomic) NSString *userAdId; // @synthesize userAdId=_userAdId;
@property(readonly, copy, nonatomic) NSNumber *canTrack; // @synthesize canTrack=_canTrack;
@property(readonly, copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestId:(id)arg1 canTrack:(id)arg2 userAdId:(id)arg3 rawUserData:(id)arg4 rawAdData:(id)arg5 targeting:(id)arg6 impressionData:(id)arg7 debug:(id)arg8 sessionId:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

