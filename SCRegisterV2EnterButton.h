//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCButton.h"

@class SCLoadingIndicatorView;

@interface SCRegisterV2EnterButton : SCButton
{
    id <SCRegisterEnterButtonDelegate> _delegate;
    SCLoadingIndicatorView *_indicator;
}

@property(retain, nonatomic) SCLoadingIndicatorView *indicator; // @synthesize indicator=_indicator;
- (void).cxx_destruct;
- (void)setActivityIndicatorHidden:(_Bool)arg1 alignment:(long long)arg2;
- (void)setInteractionEnabled:(_Bool)arg1;
- (void)continueButtonClicked;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2;

@end

