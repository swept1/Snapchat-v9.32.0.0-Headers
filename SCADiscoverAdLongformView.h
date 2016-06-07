//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "NamedEvent.h"

@class NSNumber, NSString;

@interface SCADiscoverAdLongformView : SCAUserTrackedEvent <NamedEvent>
{
    NSNumber *snapIndexCount;
    NSNumber *snapIndexPos;
    NSNumber *fullView;
    NSNumber *adIndexCount;
    NSNumber *adIndexPos;
    NSNumber *timeViewed;
    NSNumber *withCaptionOnStart;
    NSNumber *captionTimeSec;
    NSNumber *landscapeTimeSec;
    NSNumber *durationSec;
    NSNumber *aspectRatio;
    NSNumber *loadingScreenTimeSec;
    NSNumber *pageHeightTotalPixel;
    NSNumber *pageHeightSeenPixel;
    NSNumber *pageIsLoadedOnEntry;
    NSNumber *pageIsLoadedOnExit;
    NSNumber *pageUrlCount;
    NSNumber *pageLoadErrorCount;
    NSNumber *inlineVideoTimeViewed;
    NSNumber *inlineVideoViewCount;
    NSNumber *inlineVideoTotalCount;
    long long exitEvent;
    long long longformType;
    long long source;
    long long playbackAudio;
    NSString *editionId;
    NSString *publisherId;
    NSString *adsnapId;
    NSString *adId;
    NSString *scanActionId;
    NSString *deepLinkId;
    NSString *adsnapPlacementId;
    NSString *adsnapLineItemId;
    NSString *userAdId;
    NSString *videoPartnerId;
}

+ (id)copy:(id)arg1;
+ (id)create;
- (void).cxx_destruct;
- (id)asDictionary;
- (id)getVideoPartnerId;
- (void)setVideoPartnerId:(id)arg1;
- (id)getUserAdId;
- (void)setUserAdId:(id)arg1;
- (id)getAdsnapLineItemId;
- (void)setAdsnapLineItemId:(id)arg1;
- (id)getAdsnapPlacementId;
- (void)setAdsnapPlacementId:(id)arg1;
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
- (long long)getPlaybackAudio;
- (void)setPlaybackAudio:(long long)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getLongformType;
- (void)setLongformType:(long long)arg1;
- (long long)getExitEvent;
- (void)setExitEvent:(long long)arg1;
- (long long)getInlineVideoTotalCount;
- (void)setInlineVideoTotalCount:(long long)arg1;
- (long long)getInlineVideoViewCount;
- (void)setInlineVideoViewCount:(long long)arg1;
- (double)getInlineVideoTimeViewed;
- (void)setInlineVideoTimeViewed:(double)arg1;
- (long long)getPageLoadErrorCount;
- (void)setPageLoadErrorCount:(long long)arg1;
- (long long)getPageUrlCount;
- (void)setPageUrlCount:(long long)arg1;
- (_Bool)getPageIsLoadedOnExit;
- (void)setPageIsLoadedOnExit:(_Bool)arg1;
- (_Bool)getPageIsLoadedOnEntry;
- (void)setPageIsLoadedOnEntry:(_Bool)arg1;
- (long long)getPageHeightSeenPixel;
- (void)setPageHeightSeenPixel:(long long)arg1;
- (long long)getPageHeightTotalPixel;
- (void)setPageHeightTotalPixel:(long long)arg1;
- (double)getLoadingScreenTimeSec;
- (void)setLoadingScreenTimeSec:(double)arg1;
- (double)getAspectRatio;
- (void)setAspectRatio:(double)arg1;
- (double)getDurationSec;
- (void)setDurationSec:(double)arg1;
- (double)getLandscapeTimeSec;
- (void)setLandscapeTimeSec:(double)arg1;
- (double)getCaptionTimeSec;
- (void)setCaptionTimeSec:(double)arg1;
- (_Bool)getWithCaptionOnStart;
- (void)setWithCaptionOnStart:(_Bool)arg1;
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

