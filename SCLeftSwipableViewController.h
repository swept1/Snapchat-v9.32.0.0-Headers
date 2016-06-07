//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIGestureRecognizerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSString, UIPanGestureRecognizer, UIPercentDrivenInteractiveTransition;

@interface SCLeftSwipableViewController : UIViewController <UIGestureRecognizerDelegate, UINavigationControllerDelegate>
{
    long long _leftSwipeStyle;
    UIPanGestureRecognizer *_leftSwipeRecognizer;
    UIPercentDrivenInteractiveTransition *_interactivePopTransition;
}

@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactivePopTransition; // @synthesize interactivePopTransition=_interactivePopTransition;
@property(retain, nonatomic) UIPanGestureRecognizer *leftSwipeRecognizer; // @synthesize leftSwipeRecognizer=_leftSwipeRecognizer;
@property(nonatomic) long long leftSwipeStyle; // @synthesize leftSwipeStyle=_leftSwipeStyle;
- (void).cxx_destruct;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)handlePopRecognizer:(id)arg1;
- (void)leftSwipeSucceed;
- (void)leftSwipeCancelled;
- (void)leftSwipePrepare;
- (_Bool)disableLeftSwipe;
- (_Bool)inValidView:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
