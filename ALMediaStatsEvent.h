//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALMediaStats, NSString;

@interface ALMediaStatsEvent : NSObject
{
    NSString *_scopeId;
    NSString *_mediaType;
    long long _remoteUserId;
    ALMediaStats *_stats;
}

@property(retain, nonatomic) ALMediaStats *stats; // @synthesize stats=_stats;
@property(nonatomic) long long remoteUserId; // @synthesize remoteUserId=_remoteUserId;
@property(copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *scopeId; // @synthesize scopeId=_scopeId;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDict:(id)arg1;

@end

