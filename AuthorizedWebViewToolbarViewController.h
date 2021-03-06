//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebViewToolbarViewController.h"

#import "UIWebViewDelegate.h"

@class NSString;

@interface AuthorizedWebViewToolbarViewController : WebViewToolbarViewController <UIWebViewDelegate>
{
}

- (void)rightButtonPressed;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(_Bool)arg1;
- (void)configureWebView;
- (id)createRequest:(id)arg1;
- (id)generateParameters:(_Bool)arg1;
- (id)getPageViewName;
- (id)initForSnapcash:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

