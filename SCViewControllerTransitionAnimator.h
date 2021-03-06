//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCViewControllerPresentationAnimatorBaseViewDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSString, SCViewControllerDismissalAnimator, SCViewControllerPresentationAnimator, UIView, UIViewController;

@interface SCViewControllerTransitionAnimator : NSObject <SCViewControllerPresentationAnimatorBaseViewDelegate, UIViewControllerTransitioningDelegate>
{
    UIView *_baseView;
    _Bool _isCircleTransition;
    SCViewControllerDismissalAnimator *_dismissalAnimator;
    SCViewControllerPresentationAnimator *_presentationAnimator;
    UIViewController *_parentVC;
    UIViewController *_childVC;
    CDUnknownBlockType _baseViewPresentationMainAnimation;
    CDUnknownBlockType _baseViewPresentationLayoutAnimation;
    CDUnknownBlockType _baseViewDismissalAnimation;
    CDUnknownBlockType _baseViewSetupForDismissal;
    id <SCViewControllerTransitionAnimatorDelegate> _delegate;
    id <SCPullToDismissVolumeController> _volumeController;
    struct CGRect _baseViewFrame;
}

@property(nonatomic) __weak id <SCPullToDismissVolumeController> volumeController; // @synthesize volumeController=_volumeController;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
@property(nonatomic) struct CGRect baseViewFrame; // @synthesize baseViewFrame=_baseViewFrame;
@property(nonatomic) __weak id <SCViewControllerTransitionAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType baseViewSetupForDismissal; // @synthesize baseViewSetupForDismissal=_baseViewSetupForDismissal;
@property(copy, nonatomic) CDUnknownBlockType baseViewDismissalAnimation; // @synthesize baseViewDismissalAnimation=_baseViewDismissalAnimation;
@property(copy, nonatomic) CDUnknownBlockType baseViewPresentationLayoutAnimation; // @synthesize baseViewPresentationLayoutAnimation=_baseViewPresentationLayoutAnimation;
@property(copy, nonatomic) CDUnknownBlockType baseViewPresentationMainAnimation; // @synthesize baseViewPresentationMainAnimation=_baseViewPresentationMainAnimation;
@property(readonly, nonatomic) __weak UIViewController *childVC; // @synthesize childVC=_childVC;
@property(readonly, nonatomic) __weak UIViewController *parentVC; // @synthesize parentVC=_parentVC;
- (void).cxx_destruct;
- (void)viewControllerPresentationAnimatorDidCreateBaseViewForDismissal:(id)arg1;
- (void)dismiss;
- (void)present;
- (id)initWithParentViewController:(id)arg1 childViewController:(id)arg2 baseView:(id)arg3 isCircleTransition:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

