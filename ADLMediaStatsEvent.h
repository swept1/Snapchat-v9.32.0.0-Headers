//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface ADLMediaStatsEvent : NSObject
{
    NSString *_scopeId;
    long long _mediaType;
    long long _remoteUserId;
    NSDictionary *_stats;
}

+ (id)MediaStatsEventWithScopeId:(id)arg1 mediaType:(long long)arg2 remoteUserId:(long long)arg3 stats:(id)arg4;
@property(readonly, nonatomic) NSDictionary *stats; // @synthesize stats=_stats;
@property(readonly, nonatomic) long long remoteUserId; // @synthesize remoteUserId=_remoteUserId;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) NSString *scopeId; // @synthesize scopeId=_scopeId;
- (void).cxx_destruct;
- (id)description;
- (id)initWithScopeId:(id)arg1 mediaType:(long long)arg2 remoteUserId:(long long)arg3 stats:(id)arg4;

@end

