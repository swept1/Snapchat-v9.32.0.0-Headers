//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TTTAttributedLabelDelegate.h"

@class NSString;

@interface SCOperaSafeBrowsingWarningView : UIView <TTTAttributedLabelDelegate>
{
    id <SCOperaSafeBrowsingWarningViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCOperaSafeBrowsingWarningViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)learnMoreFromSafeBrowsing;
- (void)goBackFromSafeBrowsing;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)loadWarningView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

