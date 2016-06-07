//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCHeaderDataSource.h"
#import "TwoFAGenericCodeVerificationDelegate.h"

@class NSString, TwoFAGenericCodeVerificationView;

@interface TwoFAGenericCodeVerificationController : UIViewController <SCHeaderDataSource, TwoFAGenericCodeVerificationDelegate>
{
    TwoFAGenericCodeVerificationView *_verificationView;
}

@property(retain, nonatomic) TwoFAGenericCodeVerificationView *verificationView; // @synthesize verificationView=_verificationView;
- (void).cxx_destruct;
- (void)resendPressed:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)verifySucceed:(id)arg1;
- (void)verifyPressed:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)leftButtonPressed:(id)arg1;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)shouldPopToRootViewController;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithInfoText:(id)arg1 type:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
