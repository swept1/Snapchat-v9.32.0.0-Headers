//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "NamedEvent.h"

@class NSNumber, NSString;

@interface SCADiscoverAdView : SCAUserTrackedEvent <NamedEvent>
{
    NSNumber *snapIndexCount;
    NSNumber *snapIndexPos;
    NSNumber *fullView;
    NSNumber *adIndexCount;
    NSNumber *adIndexPos;
    NSNumber *timeViewed;
    NSNumber *snapTimeSec;
    NSNumber *mediaDisplayTimeSec;
    long long exitEvent;
    long long playbackAudio;
    long long mediaType;
    long long source;
    NSString *editionId;
    NSString *publisherId;
    NSString *adsnapId;
    NSString *adId;
    NSString *scanActionId;
    NSString *deepLinkId;
    NSString *adUnitId;
    NSString *adRequestClientId;
    NSString *adsnapPlacementId;
    NSString *adsnapLineItemId;
    NSString *userAdId;
}

+ (id)copy:(id)arg1;
+ (id)create;
- (void).cxx_destruct;
- (id)asDictionary;
- (id)getUserAdId;
- (void)setUserAdId:(id)arg1;
- (id)getAdsnapLineItemId;
- (void)setAdsnapLineItemId:(id)arg1;
- (id)getAdsnapPlacementId;
- (void)setAdsnapPlacementId:(id)arg1;
- (id)getAdRequestClientId;
- (void)setAdRequestClientId:(id)arg1;
- (id)getAdUnitId;
- (void)setAdUnitId:(id)arg1;
- (id)getDeepLinkId;
- (void)setDeepLinkId:(id)arg1;
- (id)getScanActionId;
- (void)setScanActionId:(id)arg1;
- (id)getAdId;
- (void)setAdId:(id)arg1;
- (id)getAdsnapId;
- (void)setAdsnapId:(id)arg1;
- (id)getPublisherId;
- (void)setPublisherId:(id)arg1;
- (id)getEditionId;
- (void)setEditionId:(id)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getMediaType;
- (void)setMediaType:(long long)arg1;
- (long long)getPlaybackAudio;
- (void)setPlaybackAudio:(long long)arg1;
- (long long)getExitEvent;
- (void)setExitEvent:(long long)arg1;
- (double)getMediaDisplayTimeSec;
- (void)setMediaDisplayTimeSec:(double)arg1;
- (double)getSnapTimeSec;
- (void)setSnapTimeSec:(double)arg1;
- (double)getTimeViewed;
- (void)setTimeViewed:(double)arg1;
- (long long)getAdIndexPos;
- (void)setAdIndexPos:(long long)arg1;
- (long long)getAdIndexCount;
- (void)setAdIndexCount:(long long)arg1;
- (_Bool)getFullView;
- (void)setFullView:(_Bool)arg1;
- (long long)getSnapIndexPos;
- (void)setSnapIndexPos:(long long)arg1;
- (long long)getSnapIndexCount;
- (void)setSnapIndexCount:(long long)arg1;
- (id)getEventName;
- (id)init;

@end
