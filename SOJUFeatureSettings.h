//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUFeatureSettings.h"

@class NSNumber, NSString;

@interface SOJUFeatureSettings : NSObject <SOJUFeatureSettings>
{
    NSNumber *_smartFilters;
    NSNumber *_visualFilters;
    NSNumber *_frontFacingFlash;
    NSNumber *_replaySnaps;
    NSNumber *_travelMode;
    NSNumber *_payReplaySnaps;
    NSNumber *_lensStoreAvailable;
    NSNumber *_barcodeEnabled;
    NSNumber *_qrcodeEnabled;
    NSNumber *_lookseryFaceTrackingv2Enabled;
    NSNumber *_lookseryFaceTrackingv2InitializationEnabled;
    NSNumber *_isPrefetchForStoreLensesEnabled;
    NSNumber *_isLensesTooltipEnabled;
    NSNumber *_isBirthdayPartyEnabled;
    NSNumber *_galleryEnabled;
    NSNumber *_galleryInvited;
    NSNumber *_eSnapMedia;
}

@property(readonly, copy, nonatomic) NSNumber *eSnapMedia; // @synthesize eSnapMedia=_eSnapMedia;
@property(readonly, copy, nonatomic) NSNumber *galleryInvited; // @synthesize galleryInvited=_galleryInvited;
@property(readonly, copy, nonatomic) NSNumber *galleryEnabled; // @synthesize galleryEnabled=_galleryEnabled;
@property(readonly, copy, nonatomic) NSNumber *isBirthdayPartyEnabled; // @synthesize isBirthdayPartyEnabled=_isBirthdayPartyEnabled;
@property(readonly, copy, nonatomic) NSNumber *isLensesTooltipEnabled; // @synthesize isLensesTooltipEnabled=_isLensesTooltipEnabled;
@property(readonly, copy, nonatomic) NSNumber *isPrefetchForStoreLensesEnabled; // @synthesize isPrefetchForStoreLensesEnabled=_isPrefetchForStoreLensesEnabled;
@property(readonly, copy, nonatomic) NSNumber *lookseryFaceTrackingv2InitializationEnabled; // @synthesize lookseryFaceTrackingv2InitializationEnabled=_lookseryFaceTrackingv2InitializationEnabled;
@property(readonly, copy, nonatomic) NSNumber *lookseryFaceTrackingv2Enabled; // @synthesize lookseryFaceTrackingv2Enabled=_lookseryFaceTrackingv2Enabled;
@property(readonly, copy, nonatomic) NSNumber *qrcodeEnabled; // @synthesize qrcodeEnabled=_qrcodeEnabled;
@property(readonly, copy, nonatomic) NSNumber *barcodeEnabled; // @synthesize barcodeEnabled=_barcodeEnabled;
@property(readonly, copy, nonatomic) NSNumber *lensStoreAvailable; // @synthesize lensStoreAvailable=_lensStoreAvailable;
@property(readonly, copy, nonatomic) NSNumber *payReplaySnaps; // @synthesize payReplaySnaps=_payReplaySnaps;
@property(readonly, copy, nonatomic) NSNumber *travelMode; // @synthesize travelMode=_travelMode;
@property(readonly, copy, nonatomic) NSNumber *replaySnaps; // @synthesize replaySnaps=_replaySnaps;
@property(readonly, copy, nonatomic) NSNumber *frontFacingFlash; // @synthesize frontFacingFlash=_frontFacingFlash;
@property(readonly, copy, nonatomic) NSNumber *visualFilters; // @synthesize visualFilters=_visualFilters;
@property(readonly, copy, nonatomic) NSNumber *smartFilters; // @synthesize smartFilters=_smartFilters;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSmartFilters:(id)arg1 visualFilters:(id)arg2 frontFacingFlash:(id)arg3 replaySnaps:(id)arg4 travelMode:(id)arg5 payReplaySnaps:(id)arg6 lensStoreAvailable:(id)arg7 barcodeEnabled:(id)arg8 qrcodeEnabled:(id)arg9 lookseryFaceTrackingv2Enabled:(id)arg10 lookseryFaceTrackingv2InitializationEnabled:(id)arg11 isPrefetchForStoreLensesEnabled:(id)arg12 isLensesTooltipEnabled:(id)arg13 isBirthdayPartyEnabled:(id)arg14 galleryEnabled:(id)arg15 galleryInvited:(id)arg16 eSnapMedia:(id)arg17;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

