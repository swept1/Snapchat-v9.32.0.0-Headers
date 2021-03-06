//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCRegisterV2BaseView.h"

#import "SCTextViewDelegate.h"
#import "TTTAttributedLabelDelegate.h"

@class NSString, SCTextView, TTTAttributedLabel, UILabel, UIScrollView;

@interface SCRegisterEmailV2View : SCRegisterV2BaseView <SCTextViewDelegate, TTTAttributedLabelDelegate>
{
    struct UIEdgeInsets _horizontalInsets;
    UILabel *_titleLabel;
    UILabel *_emailLabel;
    SCTextView *_emailTextView;
    TTTAttributedLabel *_errorLabel;
    UIScrollView *_scrollView;
    NSString *_email;
}

@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
- (void).cxx_destruct;
- (void)setFieldsEnabled:(_Bool)arg1;
- (_Bool)isInputComplete;
- (void)_changeContinueHighlightState;
- (void)becomeFirstResponder;
- (void)keyboardWillShow:(id)arg1;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)setError:(id)arg1;
- (void)setWarningWithText:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldReturn:(id)arg1;
- (void)initErrorLabel;
- (void)initEmailField;
- (void)initEmailLabel;
- (void)initEmailTitle;
- (void)initScrollView;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

