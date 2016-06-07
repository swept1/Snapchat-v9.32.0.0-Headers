//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GenericSettingsViewController.h"

#import "SCMobileSettingsDelegate.h"
#import "TwoFARecoveryCodeViewBackDelegate.h"

@class NSString, SCButton;

@interface TwoFASmsPromptViewController : GenericSettingsViewController <SCMobileSettingsDelegate, TwoFARecoveryCodeViewBackDelegate>
{
    NSString *_pageViewName;
    NSString *_infoText;
    SCButton *_continueButton;
}

@property(retain, nonatomic) SCButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) NSString *infoText; // @synthesize infoText=_infoText;
@property(retain, nonatomic) NSString *pageViewName; // @synthesize pageViewName=_pageViewName;
- (void).cxx_destruct;
- (void)presentTwoFAConfirmationView;
- (void)presentMobileSettingView;
- (void)onTapLeftBackButton:(id)arg1;
- (_Bool)disableLeftSwipe;
- (void)verifyMobileWasCancelled;
- (void)verifyMobileDidSucceed;
- (void)continueButtonPressed;
- (void)rightButtonPressed;
- (void)setIsWorking:(_Bool)arg1;
- (id)getTitle;
- (id)getPageViewName;
- (void)createBackgroundImageView;
- (void)createHeaderRightButton;
- (void)createContinueButton;
- (void)createLabel;
- (void)loadView;
- (id)initWithPageViewName:(id)arg1 title:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

