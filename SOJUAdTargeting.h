//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUAdTargeting.h"

@class NSDictionary, NSString;

@interface SOJUAdTargeting : NSObject <SOJUAdTargeting>
{
    NSString *_contentStreamId;
    NSString *_sessionTargetingString;
    NSDictionary *_targetingMap;
}

@property(readonly, copy, nonatomic) NSDictionary *targetingMap; // @synthesize targetingMap=_targetingMap;
@property(readonly, copy, nonatomic) NSString *sessionTargetingString; // @synthesize sessionTargetingString=_sessionTargetingString;
@property(readonly, copy, nonatomic) NSString *contentStreamId; // @synthesize contentStreamId=_contentStreamId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContentStreamId:(id)arg1 sessionTargetingString:(id)arg2 targetingMap:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

