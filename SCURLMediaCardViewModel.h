//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCTextMediaCardViewModel.h"

#import "SCURLSummaryListener.h"

@class NSString, NSURL, SCBrowserViewController, SCURLSummary;

@interface SCURLMediaCardViewModel : SCTextMediaCardViewModel <SCURLSummaryListener>
{
    NSURL *_url;
    SCURLSummary *_summary;
    SCBrowserViewController *_cachedWebViewController;
    _Bool _canPreload;
    id <SCURLMediaCardViewModelDelegate> _delegate;
}

@property(nonatomic) __weak id <SCURLMediaCardViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SCBrowserViewController *cachedWebViewController; // @synthesize cachedWebViewController=_cachedWebViewController;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)dealloc;
- (void)preload;
- (void)setTitle:(id)arg1 subtitle:(id)arg2;
- (void)setThumbnailImage:(id)arg1 isDefaultThumbnail:(_Bool)arg2;
- (long long)type;
- (id)initWithText:(id)arg1 url:(id)arg2 canPreload:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

