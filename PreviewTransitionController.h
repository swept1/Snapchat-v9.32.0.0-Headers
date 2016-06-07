//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerTransitioningDelegate.h"

@class  , NSString, SCCameraTimer;

@interface PreviewTransitionController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    _Bool _presenting;
    SCCameraTimer *_cameraTimer;
      *_cameraViewController;
}

@property(nonatomic) __weak   *cameraViewController; // @synthesize cameraViewController=_cameraViewController;
@property(retain, nonatomic) SCCameraTimer *cameraTimer; // @synthesize cameraTimer=_cameraTimer;
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)mainViewControllerForTransitionContext:(id)arg1;
- (id)previewViewControllerForTransitionContext:(id)arg1;
- (id)initWithCameraViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
