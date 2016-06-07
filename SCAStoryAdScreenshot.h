//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "NamedEvent.h"

@class NSNumber, NSString;

@interface SCAStoryAdScreenshot : SCAUserTrackedEvent <NamedEvent>
{
    NSNumber *viewLocation;
    NSNumber *timeViewed;
    NSNumber *fullView;
    NSNumber *snapIndexCount;
    NSNumber *snapIndexPos;
    NSNumber *adIndexCount;
    NSNumber *adIndexPos;
    NSNumber *snapTime;
    NSNumber *withGallery;
    long long storyType;
    long long mediaType;
    NSString *storySnapId;
    NSString *posterId;
    NSString *geoFence;
    NSString *sponsor;
    NSString *adsnapId;
    NSString *adId;
    NSString *adsnapPlacementId;
    NSString *adsnapLineItemId;
    NSString *userAdId;
    NSString *hydraSearchId;
}

+ (id)copy:(id)arg1;
+ (id)create;
- (void).cxx_destruct;
- (id)asDictionary;
- (id)getHydraSearchId;
- (void)setHydraSearchId:(id)arg1;
- (id)getUserAdId;
- (void)setUserAdId:(id)arg1;
- (id)getAdsnapLineItemId;
- (void)setAdsnapLineItemId:(id)arg1;
- (id)getAdsnapPlacementId;
- (void)setAdsnapPlacementId:(id)arg1;
- (id)getAdId;
- (void)setAdId:(id)arg1;
- (id)getAdsnapId;
- (void)setAdsnapId:(id)arg1;
- (id)getSponsor;
- (void)setSponsor:(id)arg1;
- (id)getGeoFence;
- (void)setGeoFence:(id)arg1;
- (id)getPosterId;
- (void)setPosterId:(id)arg1;
- (id)getStorySnapId;
- (void)setStorySnapId:(id)arg1;
- (long long)getMediaType;
- (void)setMediaType:(long long)arg1;
- (long long)getStoryType;
- (void)setStoryType:(long long)arg1;
- (_Bool)getWithGallery;
- (void)setWithGallery:(_Bool)arg1;
- (double)getSnapTime;
- (void)setSnapTime:(double)arg1;
- (long long)getAdIndexPos;
- (void)setAdIndexPos:(long long)arg1;
- (long long)getAdIndexCount;
- (void)setAdIndexCount:(long long)arg1;
- (long long)getSnapIndexPos;
- (void)setSnapIndexPos:(long long)arg1;
- (long long)getSnapIndexCount;
- (void)setSnapIndexCount:(long long)arg1;
- (_Bool)getFullView;
- (void)setFullView:(_Bool)arg1;
- (double)getTimeViewed;
- (void)setTimeViewed:(double)arg1;
- (long long)getViewLocation;
- (void)setViewLocation:(long long)arg1;
- (id)getEventName;
- (id)init;

@end

