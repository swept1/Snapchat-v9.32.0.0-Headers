//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSString;

@protocol SCCachedSnapchatter <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) long long lastFetchedTimestamp;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, nonatomic) _Bool exists;
@end

