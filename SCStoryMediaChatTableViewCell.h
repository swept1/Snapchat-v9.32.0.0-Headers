//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCSavableItemChatTableViewCell.h"

#import "SCBaseMediaFullScreenDelegate.h"
#import "SCBaseMediaFullScreenViewSource.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, SCBaseMediaFullScreenBrowserController, SCStoryMediaCardView, UIGestureRecognizer, UIViewController<SCChatCellBaseGestureDelegate>, UIWindow;

@interface SCStoryMediaChatTableViewCell : SCSavableItemChatTableViewCell <SCBaseMediaFullScreenDelegate, UIGestureRecognizerDelegate, SCBaseMediaFullScreenViewSource>
{
    SCStoryMediaCardView *_mediaCardView;
    UIViewController<SCChatCellBaseGestureDelegate> *_parentVC;
    id <SCChatExpandableMediaChatTableCellDelegate> _delegate;
    UIWindow *_mediaFullScreenWindow;
    UIGestureRecognizer *_tapGestureRecognizer;
    SCBaseMediaFullScreenBrowserController *_baseMediaBrowserController;
}

- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)fullScreenIsShown;
- (void)dismissFullScreenView;
- (void)didReachEnd;
- (struct CGRect)destinationBoundingFrame;
- (id)thumbnailViewForMedia:(id)arg1;
- (void)fullScreenViewDidShow;
- (void)fullScreenViewEndPanning;
- (void)fullScreenViewStartPanning;
- (void)fullScreenViewWasDismissed:(id)arg1;
- (void)fullScreenViewWillDismiss:(id)arg1;
- (id)baseMediaBrowserController;
- (void)tap:(id)arg1;
- (id)viewModelList;
- (void)renderPayload;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 parentVC:(id)arg3 delegate:(id)arg4;
- (id)storyMediaViewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

