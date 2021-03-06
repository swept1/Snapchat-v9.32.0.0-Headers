//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCBrowserViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, SCBrowserViewController, SCDiscoverBarContents, SCDiscoverBarGradientView, UIActivityIndicatorView, UIImageView, UILabel, UIViewController<SCChatCellBaseGestureDelegate>;

@interface SCDiscoverBarView : UIView <UIGestureRecognizerDelegate, SCBrowserViewControllerDelegate>
{
    _Bool _shouldExpand;
    SCDiscoverBarContents *_contents;
    id <SCDiscoverBarDelegate> _delegate;
    UIActivityIndicatorView *_activityIndicator;
    UIView *_animatingContainerView;
    UIImageView *_channelIcon;
    SCDiscoverBarGradientView *_gradientView;
    UIView *_loadingChannelIcon;
    UILabel *_mainLabel;
    UILabel *_subLabel;
    SCBrowserViewController *_browserViewController;
    UIViewController<SCChatCellBaseGestureDelegate> *_parentVC;
    struct CGRect _finalFrame;
}

+ (id)loadingIconColor;
+ (id)labelFontName;
+ (id)backgroundColor;
@property(nonatomic) __weak UIViewController<SCChatCellBaseGestureDelegate> *parentVC; // @synthesize parentVC=_parentVC;
@property(retain, nonatomic) SCBrowserViewController *browserViewController; // @synthesize browserViewController=_browserViewController;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(nonatomic) _Bool shouldExpand; // @synthesize shouldExpand=_shouldExpand;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(retain, nonatomic) UIView *loadingChannelIcon; // @synthesize loadingChannelIcon=_loadingChannelIcon;
@property(retain, nonatomic) SCDiscoverBarGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(nonatomic) struct CGRect finalFrame; // @synthesize finalFrame=_finalFrame;
@property(retain, nonatomic) UIImageView *channelIcon; // @synthesize channelIcon=_channelIcon;
@property(retain, nonatomic) UIView *animatingContainerView; // @synthesize animatingContainerView=_animatingContainerView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) __weak id <SCDiscoverBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCDiscoverBarContents *contents; // @synthesize contents=_contents;
- (void).cxx_destruct;
- (void)handleTap:(id)arg1;
- (void)setTextAndShow:(id)arg1 text:(id)arg2;
- (void)styleLabel:(id)arg1;
- (struct CGRect)channelIconFrame;
- (struct CGRect)centeredFrameWithWidth:(double)arg1 height:(double)arg2 inContainingFrame:(struct CGRect)arg3;
- (struct CGPoint)centerPointForActivityIndicator;
- (void)browserViewIsClosing;
- (void)preloadWebView;
- (void)presentWebView:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didDismiss;
- (void)didExpand;
- (_Bool)canExpandOrDismiss;
- (void)retryPopulatingContents;
- (CDUnknownBlockType)contentsPopulatedFailedForMessage:(id)arg1;
- (CDUnknownBlockType)contentsPopulatedSucceededForMessage:(id)arg1 withValidator:(id)arg2 successBlock:(CDUnknownBlockType)arg3;
- (void)populateContentsWithMessage:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)populateContentsWithContents:(id)arg1;
- (id)mainLabelText;
- (void)linkToSnap;
- (void)linkToRemoteUrl:(id)arg1;
- (void)linkToPublisher:(id)arg1;
- (void)linkToDiscover;
- (void)setRetryState;
- (void)setLoadingState;
- (void)hideAll;
- (void)initGestures;
- (void)initActivityIndicator;
- (void)initLoadingChannelIcon;
- (void)initGradientView;
- (id)initWithInitialFrame:(struct CGRect)arg1 finalFrame:(struct CGRect)arg2 shouldExpand:(_Bool)arg3 delegate:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

