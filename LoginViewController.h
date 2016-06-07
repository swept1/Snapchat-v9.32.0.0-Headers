//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCHeaderDataSource.h"
#import "SCHeaderDelegate.h"
#import "SCTextViewDelegate.h"

@class NSString, SCButton, SCHeader, SCTextView, UIButton;

@interface LoginViewController : UIViewController <SCHeaderDataSource, SCHeaderDelegate, SCTextViewDelegate>
{
    _Bool _loggingIn;
    SCButton *_enterButton;
    SCHeader *_header;
    SCTextView *_passwordTextView;
    SCTextView *_usernameTextView;
    UIButton *_forgotPasswordButton;
}

@property(nonatomic) _Bool loggingIn; // @synthesize loggingIn=_loggingIn;
@property(retain, nonatomic) UIButton *forgotPasswordButton; // @synthesize forgotPasswordButton=_forgotPasswordButton;
@property(retain, nonatomic) SCTextView *usernameTextView; // @synthesize usernameTextView=_usernameTextView;
@property(retain, nonatomic) SCTextView *passwordTextView; // @synthesize passwordTextView=_passwordTextView;
@property(retain, nonatomic) SCHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) SCButton *enterButton; // @synthesize enterButton=_enterButton;
- (void).cxx_destruct;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldReturn:(id)arg1;
- (void)loginReactivationStatus:(id)arg1;
- (void)loginReactivationConfirmationNeeded:(id)arg1;
- (void)loginDidFail:(id)arg1;
- (void)loginVerificationNeeded:(id)arg1;
- (void)loginUsernameNeeded:(id)arg1;
- (void)loginTwoFANeeded:(id)arg1;
- (void)loginDidSucceed:(id)arg1;
- (void)removeLoginNotificationListeners;
- (void)addLoginNotificationListeners;
- (void)_presentResetPasswordChoiceAlertView;
- (void)_presentEmptyUsernameAlertView;
- (void)_SMSOptionSelected;
- (void)_toSMSResetPwdPage;
- (void)_toEmailResetPwdPage;
- (void)_forgotPasswordClicked;
- (void)enterButtonClicked;
- (void)displayOrHideEnterButton;
- (void)leftButtonPressed;
- (void)keyboardWillShowOrHide:(id)arg1;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initHeader;
- (void)loadView;
- (id)getPageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

