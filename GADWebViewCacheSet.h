//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADCacheSet.h"

#import "UIWebViewDelegate.h"

@class NSMutableSet, NSString;

@interface GADWebViewCacheSet : GADCacheSet <UIWebViewDelegate>
{
    NSMutableSet *_clearingWebViews;
}

- (void).cxx_destruct;
- (void)adView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)clearWebView:(id)arg1;
- (id)anyObject;
- (void)addObject:(id)arg1;
- (void)dealloc;
- (id)initWithMaxCapacity:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

