//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADSlot.h"

@interface GADSlot (SwipeToViewController)
- (_Bool)shouldProcessTouch:(struct CGPoint)arg1 inView:(id)arg2;
- (void)loadStoreProductViewController;
- (void)handlePanGesture:(id)arg1;
- (void)setUpAnimationController;
- (void)disableSwipeToViewController;
- (void)enableSwipeToViewController;
- (void)canEnableSwipeToViewController;
- (void)unscheduleSwipeToViewControllerChecker;
- (void)scheduleSwipeToViewControllerChecker;
@end

