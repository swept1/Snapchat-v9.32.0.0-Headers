//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView, UIViewController;

@interface SCViewControllerPresentationAnimator : NSObject
{
    UIViewController *_childVC;
    UIViewController *_parentVC;
    UIView *_previousBaseViewSuperview;
    UIView *_maskLayerView;
    struct CGRect _previousBaseViewFrame;
    _Bool _isCircleTransition;
    CDUnknownBlockType _baseViewPresentationMainAnimation;
    CDUnknownBlockType _baseViewPresentationLayoutAnimation;
    CDUnknownBlockType _baseViewSetupForDismissal;
    id <SCViewControllerPresentationAnimatorDelegate> _delegate;
    id <SCViewControllerPresentationAnimatorBaseViewDelegate> _baseViewDelegate;
    UIView *_darkBackgroundView;
    UIView *_baseView;
    struct CGRect _startingFrame;
}

@property(nonatomic) struct CGRect startingFrame; // @synthesize startingFrame=_startingFrame;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
@property(readonly, nonatomic) UIView *darkBackgroundView; // @synthesize darkBackgroundView=_darkBackgroundView;
@property(nonatomic) __weak id <SCViewControllerPresentationAnimatorBaseViewDelegate> baseViewDelegate; // @synthesize baseViewDelegate=_baseViewDelegate;
@property(nonatomic) __weak id <SCViewControllerPresentationAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType baseViewSetupForDismissal; // @synthesize baseViewSetupForDismissal=_baseViewSetupForDismissal;
@property(copy, nonatomic) CDUnknownBlockType baseViewPresentationLayoutAnimation; // @synthesize baseViewPresentationLayoutAnimation=_baseViewPresentationLayoutAnimation;
@property(copy, nonatomic) CDUnknownBlockType baseViewPresentationMainAnimation; // @synthesize baseViewPresentationMainAnimation=_baseViewPresentationMainAnimation;
- (void).cxx_destruct;
- (void)setupBaseView:(id)arg1;
- (void)animateTransition;
- (id)initWithParentViewController:(id)arg1 childViewController:(id)arg2 baseView:(id)arg3 isCircleTransition:(_Bool)arg4;

@end

