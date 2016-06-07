//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GenericSettingsViewController.h"

#import "SCLayoutAccessoryTableViewCellDelegate.h"
#import "SCMobileSettingsDelegate.h"
#import "TwoFARecoveryCodeViewBackDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, SCLoadingScreen, UILabel, UISwitch, UITableView;

@interface TwoFAEnabledSettingsViewController : GenericSettingsViewController <UITableViewDataSource, UITableViewDelegate, SCLayoutAccessoryTableViewCellDelegate, SCMobileSettingsDelegate, TwoFARecoveryCodeViewBackDelegate>
{
    _Bool _leftSwipeable;
    NSString *_pageViewName;
    UILabel *_infoLabel;
    UITableView *_tableView;
    UISwitch *_SMSSwitch;
    UISwitch *_TPASwitch;
    SCLoadingScreen *_loadingScreen;
}

@property(nonatomic) _Bool leftSwipeable; // @synthesize leftSwipeable=_leftSwipeable;
@property(retain, nonatomic) SCLoadingScreen *loadingScreen; // @synthesize loadingScreen=_loadingScreen;
@property(retain, nonatomic) UISwitch *TPASwitch; // @synthesize TPASwitch=_TPASwitch;
@property(retain, nonatomic) UISwitch *SMSSwitch; // @synthesize SMSSwitch=_SMSSwitch;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) NSString *pageViewName; // @synthesize pageViewName=_pageViewName;
- (void).cxx_destruct;
- (void)hideLoadingScreen;
- (void)showLoadingScreenWithLabelText:(id)arg1;
- (void)verifyMobileWasCancelled;
- (void)verifyMobileDidSucceed;
- (_Bool)disableLeftSwipe;
- (struct CGRect)layoutAccessoryTableViewCell:(id)arg1 frameForAccessoryView:(id)arg2;
- (void)onTapLeftBackButton:(id)arg1;
- (void)presentSettingPage;
- (void)presentSmsCodeConfirmationView;
- (void)presentMobileSettingView;
- (void)presentRecoveryCode;
- (void)presentForgetDevice;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)getTPAToggleCell;
- (id)getSMSToggleCell;
- (id)getToggleCellWithReuseIdentifier:(id)arg1 title:(id)arg2 info:(id)arg3 toggler:(id)arg4;
- (id)getDisableAlertDescription:(id)arg1;
- (id)getDisableAlertTitle:(id)arg1;
- (void)disableSwitch:(id)arg1 WithAction:(long long)arg2;
- (void)presentAuthAppSetupView;
- (void)tryEnableSMSSwitch;
- (void)updateTPASwitchState:(id)arg1;
- (void)updateSMSSwitchState:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)leftButtonPressed;
- (id)getTitle;
- (id)getPageViewName;
- (void)refreshRecoveryCodeCell;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithPageViewName:(id)arg1 title:(id)arg2 leftSwipeable:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
