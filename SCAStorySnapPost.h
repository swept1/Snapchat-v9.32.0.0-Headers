//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "NamedEvent.h"

@class NSNumber, NSString;

@interface SCAStorySnapPost : SCAUserTrackedEvent <NamedEvent>
{
    NSNumber *caption;
    NSNumber *captionTracking;
    NSNumber *camera;
    NSNumber *drawing;
    NSNumber *flash;
    NSNumber *snapTime;
    NSNumber *withSnap;
    NSNumber *withGallery;
    NSNumber *storyPostCount;
    NSNumber *view_time_sec;
    NSNumber *stickerTrackingCount;
    NSNumber *stickerCount;
    NSNumber *filterReverse;
    NSNumber *swipeCount;
    NSNumber *latitude;
    NSNumber *longitude;
    NSNumber *withSearch;
    long long filterType;
    long long source;
    long long mediaType;
    long long storyType;
    long long filterVisual;
    long long filterInfo;
    long long filterMotion;
    long long galleryContextMenuSource;
    NSString *filter;
    NSString *geoFence;
    NSString *posterId;
    NSString *filterGeofence;
    NSString *filterSponsor;
    NSString *filterLensId;
}

+ (id)copy:(id)arg1;
+ (id)create;
- (void).cxx_destruct;
- (id)asDictionary;
- (id)getFilterLensId;
- (void)setFilterLensId:(id)arg1;
- (id)getFilterSponsor;
- (void)setFilterSponsor:(id)arg1;
- (id)getFilterGeofence;
- (void)setFilterGeofence:(id)arg1;
- (id)getPosterId;
- (void)setPosterId:(id)arg1;
- (id)getGeoFence;
- (void)setGeoFence:(id)arg1;
- (id)getFilter;
- (void)setFilter:(id)arg1;
- (long long)getGalleryContextMenuSource;
- (void)setGalleryContextMenuSource:(long long)arg1;
- (long long)getFilterMotion;
- (void)setFilterMotion:(long long)arg1;
- (long long)getFilterInfo;
- (void)setFilterInfo:(long long)arg1;
- (long long)getFilterVisual;
- (void)setFilterVisual:(long long)arg1;
- (long long)getStoryType;
- (void)setStoryType:(long long)arg1;
- (long long)getMediaType;
- (void)setMediaType:(long long)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getFilterType;
- (void)setFilterType:(long long)arg1;
- (_Bool)getWithSearch;
- (void)setWithSearch:(_Bool)arg1;
- (double)getLongitude;
- (void)setLongitude:(double)arg1;
- (double)getLatitude;
- (void)setLatitude:(double)arg1;
- (long long)getSwipeCount;
- (void)setSwipeCount:(long long)arg1;
- (_Bool)getFilterReverse;
- (void)setFilterReverse:(_Bool)arg1;
- (long long)getStickerCount;
- (void)setStickerCount:(long long)arg1;
- (long long)getStickerTrackingCount;
- (void)setStickerTrackingCount:(long long)arg1;
- (double)getView_time_sec;
- (void)setView_time_sec:(double)arg1;
- (long long)getStoryPostCount;
- (void)setStoryPostCount:(long long)arg1;
- (_Bool)getWithGallery;
- (void)setWithGallery:(_Bool)arg1;
- (_Bool)getWithSnap;
- (void)setWithSnap:(_Bool)arg1;
- (double)getSnapTime;
- (void)setSnapTime:(double)arg1;
- (_Bool)getFlash;
- (void)setFlash:(_Bool)arg1;
- (_Bool)getDrawing;
- (void)setDrawing:(_Bool)arg1;
- (long long)getCamera;
- (void)setCamera:(long long)arg1;
- (_Bool)getCaptionTracking;
- (void)setCaptionTracking:(_Bool)arg1;
- (long long)getCaption;
- (void)setCaption:(long long)arg1;
- (id)getEventName;
- (id)init;

@end

