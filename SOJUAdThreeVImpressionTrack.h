//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUAdThreeVImpressionTrack.h"

@class NSNumber, NSString;

@interface SOJUAdThreeVImpressionTrack : NSObject <SOJUAdThreeVImpressionTrack>
{
    NSNumber *_topsnapTimeViewedSeconds;
    NSNumber *_topsnapMediaDurationSeconds;
}

@property(readonly, copy, nonatomic) NSNumber *topsnapMediaDurationSeconds; // @synthesize topsnapMediaDurationSeconds=_topsnapMediaDurationSeconds;
@property(readonly, copy, nonatomic) NSNumber *topsnapTimeViewedSeconds; // @synthesize topsnapTimeViewedSeconds=_topsnapTimeViewedSeconds;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTopsnapTimeViewedSeconds:(id)arg1 topsnapMediaDurationSeconds:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

