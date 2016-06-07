//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCLeftSwipableViewController.h"

#import "SCHeaderDataSource.h"
#import "SCHeaderDelegate.h"
#import "SCPotentiallyEligibleFlowDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FBKVOController, NSArray, NSString, SCHeader, SCPotentiallyEligibleCashUserFlow, SCUserSession, UILabel, UILongPressGestureRecognizer, UITableView;

@interface  i : SCLeftSwipableViewController <SCHeaderDataSource, SCHeaderDelegate, SCPotentiallyEligibleFlowDelegate, UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    SCUserSession *_userSession;
    NSArray *_settingsAccountOptions;
    _Bool _notificationSoundsOn;
    SCPotentiallyEligibleCashUserFlow *_potentiallyEligibleFlow;
    UILongPressGestureRecognizer *_press;
    SCHeader *_header;
    UITableView *_tableView;
    UILabel *_madeLabel;
    FBKVOController *_KVOController;
}

@property(retain, nonatomic) FBKVOController *KVOController; // @synthesize KVOController=_KVOController;
@property(retain, nonatomic) UILabel *madeLabel; // @synthesize madeLabel=_madeLabel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SCHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) UILongPressGestureRecognizer *press; // @synthesize press=_press;
@property(retain, nonatomic) SCPotentiallyEligibleCashUserFlow *potentiallyEligibleFlow; // @synthesize potentiallyEligibleFlow=_potentiallyEligibleFlow;
@property(nonatomic) _Bool notificationSoundsOn; // @synthesize notificationSoundsOn=_notificationSoundsOn;
- (void).cxx_destruct;
- (id)_pageNameForPageView;
- (long long)getSettingsServicesTypeForRow:(long long)arg1;
- (_Bool)showOfficialStorySettings;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)processNotification:(id)arg1;
- (_Bool)shouldPopToRootViewControllerLater;
- (_Bool)shouldPopToRootViewController;
- (_Bool)inValidView:(id)arg1;
- (void)flowSuccessfullyCompleted;
- (void)presentNotificationSettings;
- (void)presentBlocked;
- (void)restorePurchases;
- (void)clearBrowserData;
- (void)presentClearBrowserData;
- (void)presentClearDataVC;
- (void)presentClearConversations;
- (void)logPresentPreview;
- (void)presentOfficialStorySettings;
- (void)presentAdditionalServices;
- (void)_presentLogoutAlert;
- (void)presentLogout;
- (void)presentSupportPage;
- (void)presentLicenses;
- (void)presentTermsOfUse;
- (void)presentPrivacyPolicy;
- (void)presentViewMyStoriesSettings;
- (void)presentSendMeSnapsSettings;
- (void)presentGallerySettings;
- (void)presentCashSettingsVC;
- (void)presentTwoFASettings;
- (void)presentPasswordSettings;
- (void)presentEmailSettings;
- (void)presentMobileSettings;
- (void)presentBirthdaySettings;
- (void)presentDisplayNameSettings;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateSwitchState:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onNotificationSoundEnabledChanged;
- (void)reloadTableOnMainThread;
- (void)addPrivacyObservers;
- (void)addNotificationSoundObserver;
- (void)addEmailObservers;
- (void)addSettingsObservers;
- (void)leftButtonPressed;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)initSettingsAccountOptions;
- (void)initHeader;
- (void)loadView;
- (id)initWithUserSession:(id)arg1;
- (id)getPageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

