//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCRegisterV2BaseView.h"

#import "SCTextViewDelegate.h"

@class NSString, SCTextView, UIButton, UILabel, UIScrollView, UIView;

@interface SCRegisterPasswordV2View : SCRegisterV2BaseView <SCTextViewDelegate>
{
    struct UIEdgeInsets _horizontalInsets;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UILabel *_passwordLabel;
    UIView *_passwordFieldContainer;
    SCTextView *_passwordTextView;
    UILabel *_errorLabel;
    UIScrollView *_scrollView;
    _Bool _isInErrorState;
    UIButton *_showHidePasswordButton;
    NSString *_password;
}

@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
- (void).cxx_destruct;
- (_Bool)isInputIncomplete;
- (void)refreshContinueButtonEnabledState;
- (void)showOrHidePassword;
- (void)setError:(id)arg1;
- (void)setFieldsEnabled:(_Bool)arg1;
- (void)hideInput;
- (void)becomeFirstResponder;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)initErrorLabel;
- (void)initPasswordField;
- (void)initPasswordLabel;
- (void)initPasswordDescription;
- (void)initPasswordTitle;
- (void)initScrollView;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
