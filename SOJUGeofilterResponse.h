//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUGeofilterResponse.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUDynamicContentSetting, SOJUGeofence, SOJULensData, SOJUSponsoredSlugPosAndText;

@interface SOJUGeofilterResponse : NSObject <SOJUGeofilterResponse>
{
    NSString *_filterId;
    NSNumber *_expiresCountdown;
    NSString *_image;
    SOJUGeofence *_geofence;
    NSNumber *_priority;
    NSArray *_position;
    NSArray *_dynamicContent;
    NSNumber *_isDynamicGeofilter;
    NSDictionary *_clientCacheExpirationDateTime;
    NSNumber *_clientCacheTtlMinutes;
    NSNumber *_isSponsored;
    SOJUSponsoredSlugPosAndText *_sponsoredSlug;
    NSString *_sponsoredSlugPosition;
    NSString *_sponsoredSlugImgLink;
    SOJUDynamicContentSetting *_dynamicContentSetting;
    NSNumber *_isLens;
    SOJULensData *_lensData;
    NSString *_section;
    NSNumber *_isFeatured;
    NSString *_appstoreIapId;
    NSString *_gplayIapId;
    NSString *_targetingType;
    NSNumber *_belowDrawingLayer;
    NSString *_encGeoData;
}

@property(readonly, copy, nonatomic) NSString *encGeoData; // @synthesize encGeoData=_encGeoData;
@property(readonly, copy, nonatomic) NSNumber *belowDrawingLayer; // @synthesize belowDrawingLayer=_belowDrawingLayer;
@property(readonly, copy, nonatomic) NSString *targetingType; // @synthesize targetingType=_targetingType;
@property(readonly, copy, nonatomic) NSString *gplayIapId; // @synthesize gplayIapId=_gplayIapId;
@property(readonly, copy, nonatomic) NSString *appstoreIapId; // @synthesize appstoreIapId=_appstoreIapId;
@property(readonly, copy, nonatomic) NSNumber *isFeatured; // @synthesize isFeatured=_isFeatured;
@property(readonly, copy, nonatomic) NSString *section; // @synthesize section=_section;
@property(readonly, copy, nonatomic) SOJULensData *lensData; // @synthesize lensData=_lensData;
@property(readonly, copy, nonatomic) NSNumber *isLens; // @synthesize isLens=_isLens;
@property(readonly, copy, nonatomic) SOJUDynamicContentSetting *dynamicContentSetting; // @synthesize dynamicContentSetting=_dynamicContentSetting;
@property(readonly, copy, nonatomic) NSString *sponsoredSlugImgLink; // @synthesize sponsoredSlugImgLink=_sponsoredSlugImgLink;
@property(readonly, copy, nonatomic) NSString *sponsoredSlugPosition; // @synthesize sponsoredSlugPosition=_sponsoredSlugPosition;
@property(readonly, copy, nonatomic) SOJUSponsoredSlugPosAndText *sponsoredSlug; // @synthesize sponsoredSlug=_sponsoredSlug;
@property(readonly, copy, nonatomic) NSNumber *isSponsored; // @synthesize isSponsored=_isSponsored;
@property(readonly, copy, nonatomic) NSNumber *clientCacheTtlMinutes; // @synthesize clientCacheTtlMinutes=_clientCacheTtlMinutes;
@property(readonly, copy, nonatomic) NSDictionary *clientCacheExpirationDateTime; // @synthesize clientCacheExpirationDateTime=_clientCacheExpirationDateTime;
@property(readonly, copy, nonatomic) NSNumber *isDynamicGeofilter; // @synthesize isDynamicGeofilter=_isDynamicGeofilter;
@property(readonly, copy, nonatomic) NSArray *dynamicContent; // @synthesize dynamicContent=_dynamicContent;
@property(readonly, copy, nonatomic) NSArray *position; // @synthesize position=_position;
@property(readonly, copy, nonatomic) NSNumber *priority; // @synthesize priority=_priority;
@property(readonly, copy, nonatomic) SOJUGeofence *geofence; // @synthesize geofence=_geofence;
@property(readonly, copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSNumber *expiresCountdown; // @synthesize expiresCountdown=_expiresCountdown;
@property(readonly, copy, nonatomic) NSString *filterId; // @synthesize filterId=_filterId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFilterId:(id)arg1 expiresCountdown:(id)arg2 image:(id)arg3 geofence:(id)arg4 priority:(id)arg5 position:(id)arg6 dynamicContent:(id)arg7 isDynamicGeofilter:(id)arg8 clientCacheExpirationDateTime:(id)arg9 clientCacheTtlMinutes:(id)arg10 isSponsored:(id)arg11 sponsoredSlug:(id)arg12 sponsoredSlugPosition:(id)arg13 sponsoredSlugImgLink:(id)arg14 dynamicContentSetting:(id)arg15 isLens:(id)arg16 lensData:(id)arg17 section:(id)arg18 isFeatured:(id)arg19 appstoreIapId:(id)arg20 gplayIapId:(id)arg21 targetingType:(id)arg22 belowDrawingLayer:(id)arg23 encGeoData:(id)arg24;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

