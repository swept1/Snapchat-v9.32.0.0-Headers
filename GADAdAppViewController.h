//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADViewController.h"

@class GADAdAppAdViewDelegate, GADAdView, NSString, NSURL, UIButton, UIViewController;

@interface GADAdAppViewController : GADViewController
{
    _Bool _viewHasAppeared;
    NSURL *_URLToLoad;
    NSString *_HTMLToLoad;
    NSURL *_HTMLBaseURLToLoad;
    _Bool _useCustomClose;
    long long _customClosePosition;
    GADAdView *_adView;
    UIViewController *_hostViewController;
    GADAdAppAdViewDelegate *_adViewDelegate;
    UIButton *_closeButton;
}

@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) GADAdAppAdViewDelegate *adViewDelegate; // @synthesize adViewDelegate=_adViewDelegate;
@property(readonly, nonatomic) UIViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
@property(retain, nonatomic) GADAdView *adView; // @synthesize adView=_adView;
@property(nonatomic) long long customClosePosition; // @synthesize customClosePosition=_customClosePosition;
@property(nonatomic) _Bool useCustomClose; // @synthesize useCustomClose=_useCustomClose;
- (void).cxx_destruct;
- (void)loadHTML:(id)arg1 baseURL:(id)arg2;
- (void)load:(id)arg1;
- (void)viewChangedToOrientation:(long long)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)configureView;
- (void)positionMRAIDCloseButton;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldDismissOnApplicationEnteringForeground;
- (void)closeButtonPressed:(id)arg1;
- (_Bool)isLoaded;
- (void)updateCloseButtonVisibilityAndImage;
@property(nonatomic, getter=isFileAccessAllowed) _Bool fileAccessAllowed;
- (void)dealloc;
- (id)initWithAdView:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

@end

