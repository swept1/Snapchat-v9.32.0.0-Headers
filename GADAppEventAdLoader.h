//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADAppEventDelegate.h"
#import "GADBannerViewDelegate.h"
#import "GADNativeAdLoadDelegate.h"

@class DFPBannerView, GADNativeAd, NSDictionary, NSSet, NSString, UIViewController;

@interface GADAppEventAdLoader : NSObject <GADBannerViewDelegate, GADAppEventDelegate, GADNativeAdLoadDelegate>
{
    NSString *_adUnitID;
    DFPBannerView *_loadingBannerView;
    GADNativeAd *_loadingNativeAd;
    UIViewController *_rootViewController;
    NSSet *_adTypes;
    NSDictionary *_adClassRequestParameters;
    id <GADAppEventAdLoaderDelegate> _delegate;
}

@property(nonatomic) __weak id <GADAppEventAdLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)nativeAdDidFailToLoadRequiredAssets:(id)arg1;
- (void)nativeAdDidFinishLoadingAssets:(id)arg1;
- (void)adView:(id)arg1 didReceiveAppEvent:(id)arg2 withInfo:(id)arg3;
- (void)adView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)adViewDidReceiveAd:(id)arg1;
- (void)loadAssetsForAdConfiguration:(id)arg1 adUnitID:(id)arg2 slot:(id)arg3;
- (void)failedToLoadAdWithError:(id)arg1;
- (void)loadRequest:(id)arg1;
- (void)cancel;
- (void)cancelNativeAd;
- (void)cancelBannerView;
- (void)dealloc;
- (id)initWithAdUnitID:(id)arg1 rootViewController:(id)arg2 adTypes:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

