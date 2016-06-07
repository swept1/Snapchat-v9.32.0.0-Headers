//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCBlockerResolver.h"
#import "SCCashIneligibleVCDelegate.h"
#import "SCMobileSettingsDelegate.h"

@class MobileSettingsViewController, NSString, SCPaymentBlocker, SCPaymentMessage;

@interface SCVerifiedPhoneBlockerResolver : NSObject <SCMobileSettingsDelegate, SCCashIneligibleVCDelegate, SCBlockerResolver>
{
    _Bool _viewIsDone;
    _Bool _newNumberMode;
    SCPaymentBlocker *_blocker;
    SCPaymentMessage *_paymentMessage;
    id <SCBlockerResolutionResultDelegate> _resolutionResultDelegate;
    MobileSettingsViewController *_viewController;
}

@property(nonatomic) _Bool newNumberMode; // @synthesize newNumberMode=_newNumberMode;
@property(nonatomic) _Bool viewIsDone; // @synthesize viewIsDone=_viewIsDone;
@property(retain, nonatomic) MobileSettingsViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) id <SCBlockerResolutionResultDelegate> resolutionResultDelegate; // @synthesize resolutionResultDelegate=_resolutionResultDelegate;
@property(retain, nonatomic) SCPaymentMessage *paymentMessage; // @synthesize paymentMessage=_paymentMessage;
@property(retain, nonatomic) SCPaymentBlocker *blocker; // @synthesize blocker=_blocker;
- (void).cxx_destruct;
- (void)okayButtonPressed;
- (_Bool)isIneligible;
- (_Bool)needsMobileSettingsViewController;
- (void)verifyMobileWasCancelled;
- (void)verifyMobileDidSucceed;
- (void)resolve;
- (void)resolveIfViewIsDoneAndDelegateAvailable;
- (void)showIneligibleViewController;
- (id)ineligibleViewController;
- (long long)blockerType;
- (void)resolveBlockerWithDelegate:(id)arg1;
- (id)getViewController;
- (id)mobileSettingsViewController;
- (id)initWithBlocker:(id)arg1 paymentMessage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

