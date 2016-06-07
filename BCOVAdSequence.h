//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface BCOVAdSequence : NSObject
{
    NSArray *_ads;
    NSDictionary *_properties;
}

@property(readonly, copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, copy, nonatomic) NSArray *ads; // @synthesize ads=_ads;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqualToAdSequence:(id)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 beginTime;
- (id)initWithAds:(id)arg1 properties:(id)arg2;

@end

