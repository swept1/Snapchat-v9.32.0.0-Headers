//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADSlot.h"

@interface GADSlot (Mediation)
- (id)viewControllerForPresentingModalView;
- (_Bool)hasConsistentMediationConfigForAdType:(id)arg1;
- (void)requestAdWithType:(id)arg1 mediationConfig:(id)arg2;
- (void)processMediationAdResponse:(id)arg1;
- (void)presentMediatedInterstitialFromRootViewController:(id)arg1;
- (_Bool)isMediating;
- (_Bool)changeAdTypeTo:(id)arg1;
- (id)adNetworkClassName;
@end

