//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCCameraCardViewController.h"

#import "SCCameraCardViewControllerDelegate.h"
#import "SCDeepLinkableView.h"
#import "SCDiscoverEditionPresenterDelegate.h"
#import "SCScanCardDeepLinkDelegate.h"
#import "SCScanCardProviderDelegate.h"

@class NSArray, NSMutableArray, NSString, SCDiscoverEditionPresenter, SCScanCardProvider, SCScanCardTableViewCell, SCScanCardTableViewCell<SCScanCardDeepLinkProtocol>, SCUserSession, Sound, UITapGestureRecognizer;

@interface SCScanResultViewController : SCCameraCardViewController <SCDiscoverEditionPresenterDelegate, SCScanCardProviderDelegate, SCCameraCardViewControllerDelegate, SCScanCardDeepLinkDelegate, SCDeepLinkableView>
{
    NSArray *_scanResults;
    NSMutableArray *_stagedScanCards;
    SCScanCardProvider *_scanCardProvider;
    Sound *_scanSound;
    SCDiscoverEditionPresenter *_discoverEditionPresenter;
    SCScanCardTableViewCell<SCScanCardDeepLinkProtocol> *_deepLinkScanCard;
    _Bool _firstCardLoaded;
    SCUserSession *_userSession;
    UITapGestureRecognizer *_tapGestureRecognizer;
    SCScanCardTableViewCell *_initialLoadingCard;
    double _initialLoadingCardHeight;
    _Bool _overrideInitialCardHeight;
    _Bool _shouldReportAnalytics;
    id <SCScanResultViewControllerDelegate> _delegate;
    id <NavigationDelegate> _navigationDelegate;
}

+ (id)scanResultViewControllerForScanResults:(id)arg1 userSession:(id)arg2;
@property(nonatomic) _Bool shouldReportAnalytics; // @synthesize shouldReportAnalytics=_shouldReportAnalytics;
@property(nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(nonatomic) __weak id <SCScanResultViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)discoverEditionPresenterDidFailToPresentEdition:(id)arg1;
- (void)discoverEditionPresenter:(id)arg1 didDismissEdition:(id)arg2 becameFullyViewed:(_Bool)arg3;
- (void)discoverEditionPresenterDidFinishDismissing:(id)arg1;
- (void)discoverEditionPresenterWillBeginAnimatingToDismissEdition:(id)arg1;
- (void)discoverEditionPresenterDidCancelDismissingEdition:(id)arg1;
- (void)discoverEditionPresenterDidBeginDismissingEdition:(id)arg1 transitionAnimator:(id)arg2;
- (void)discoverEditionPresenterDidFinishPresentingEdition:(id)arg1;
- (void)discoverEditionPresenterWillBeginPresentingEdition:(id)arg1 transitionAnimator:(id)arg2;
- (id)discoverEditionPresenter;
- (id)presentingVC;
- (void)viewDidAppearWithURL:(id)arg1 additionalInfo:(id)arg2;
- (void)cameraCardViewControllerDidDismiss:(id)arg1 dismissType:(unsigned long long)arg2;
- (void)deepLinkCard:(id)arg1 didTapShareUrl:(id)arg2;
- (void)deepLinkCard:(id)arg1 didDeepLinkToURL:(id)arg2;
- (void)scanCardDidFinish;
- (void)scanCardDismissViewController;
- (void)scanCardPresentViewController:(id)arg1;
- (void)scanCardProvider:(id)arg1 didProvideScanCards:(id)arg2;
- (_Bool)shouldDismissViewControllerLater;
- (void)cameraCardTableViewCell:(id)arg1 willAnimateHeightWithAnimations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_handleEditionPresenterDidDismissEdition:(id)arg1;
- (void)_showScanCards:(id)arg1;
- (void)_provideScanFeedback;
- (void)_presentCardsAnimated;
- (void)_didTapTableView;
- (void)resumePlayback;
- (void)pausePlayback;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dismissScanResultsAnimated:(_Bool)arg1;
- (id)initWithScanResults:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
