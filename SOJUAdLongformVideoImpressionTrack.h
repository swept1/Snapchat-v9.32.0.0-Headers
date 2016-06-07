//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUAdLongformVideoImpressionTrack.h"

@class NSNumber, NSString;

@interface SOJUAdLongformVideoImpressionTrack : NSObject <SOJUAdLongformVideoImpressionTrack>
{
    NSNumber *_topsnapTimeViewedSeconds;
    NSNumber *_longformTimeViewedSeconds;
    NSNumber *_topsnapMediaDurationSeconds;
    NSNumber *_longformMediaDurationSeconds;
    NSNumber *_swiped;
}

@property(readonly, copy, nonatomic) NSNumber *swiped; // @synthesize swiped=_swiped;
@property(readonly, copy, nonatomic) NSNumber *longformMediaDurationSeconds; // @synthesize longformMediaDurationSeconds=_longformMediaDurationSeconds;
@property(readonly, copy, nonatomic) NSNumber *topsnapMediaDurationSeconds; // @synthesize topsnapMediaDurationSeconds=_topsnapMediaDurationSeconds;
@property(readonly, copy, nonatomic) NSNumber *longformTimeViewedSeconds; // @synthesize longformTimeViewedSeconds=_longformTimeViewedSeconds;
@property(readonly, copy, nonatomic) NSNumber *topsnapTimeViewedSeconds; // @synthesize topsnapTimeViewedSeconds=_topsnapTimeViewedSeconds;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTopsnapTimeViewedSeconds:(id)arg1 longformTimeViewedSeconds:(id)arg2 topsnapMediaDurationSeconds:(id)arg3 longformMediaDurationSeconds:(id)arg4 swiped:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

