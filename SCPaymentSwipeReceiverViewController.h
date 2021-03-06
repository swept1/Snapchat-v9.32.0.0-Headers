//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSDate, NSTimer, UIImageView;

@interface SCPaymentSwipeReceiverViewController : UIViewController
{
    _Bool _isAnimatingGhost;
    _Bool _isIdle;
    id <SCPaymentSwipeReceiverDelegate> _delegate;
    long long _jumpCount;
    UIImageView *_ghostImageView;
    double _ghostLowest;
    double _ghostRightest;
    double _ghostHorizontalVelocity;
    NSDate *_lastSwipeTime;
    double _ghostAnimationDuration;
    NSTimer *_ghostJumpingTimer;
    struct CGPoint _ghostLastPosition;
}

@property(nonatomic) _Bool isIdle; // @synthesize isIdle=_isIdle;
@property(nonatomic) NSTimer *ghostJumpingTimer; // @synthesize ghostJumpingTimer=_ghostJumpingTimer;
@property(nonatomic) double ghostAnimationDuration; // @synthesize ghostAnimationDuration=_ghostAnimationDuration;
@property(retain, nonatomic) NSDate *lastSwipeTime; // @synthesize lastSwipeTime=_lastSwipeTime;
@property(nonatomic) _Bool isAnimatingGhost; // @synthesize isAnimatingGhost=_isAnimatingGhost;
@property(nonatomic) double ghostHorizontalVelocity; // @synthesize ghostHorizontalVelocity=_ghostHorizontalVelocity;
@property(nonatomic) struct CGPoint ghostLastPosition; // @synthesize ghostLastPosition=_ghostLastPosition;
@property(nonatomic) double ghostRightest; // @synthesize ghostRightest=_ghostRightest;
@property(nonatomic) double ghostLowest; // @synthesize ghostLowest=_ghostLowest;
@property(retain, nonatomic) UIImageView *ghostImageView; // @synthesize ghostImageView=_ghostImageView;
@property(nonatomic) long long jumpCount; // @synthesize jumpCount=_jumpCount;
@property(nonatomic) __weak id <SCPaymentSwipeReceiverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)motionAngleTo:(struct CGPoint)arg1 from:(struct CGPoint)arg2;
- (struct CGPoint)randomPointFrom:(struct CGPoint)arg1 boundary:(struct CGRect)arg2;
- (struct CGPoint)getViewCenterFromOrigin:(struct CGPoint)arg1 withBoundary:(struct CGRect)arg2;
- (struct CGPath *)newPathFromOriginList:(id)arg1;
- (void)ghostJumpTimerFired:(id)arg1;
- (void)updateGhostJumpDuration:(double)arg1;
- (id)generateGhostAnimationWithDuration:(double)arg1 isFalling:(_Bool)arg2;
- (id)generateRisingGhostAnimation:(double)arg1;
- (id)generateFallingGhostAnimation;
- (void)updateGhostImage;
- (void)displayJumpingGhostWithDuration:(double)arg1;
- (void)startFallingBillAnimation:(id)arg1 withDuration:(double)arg2;
- (void)displayFallingBillWithDuration:(double)arg1;
- (void)didReceiveMessageWithSwipeCount:(long long)arg1 wasPresent:(_Bool)arg2;
- (void)updateViewWithKeyboardNotification:(id)arg1;
- (void)dealloc;
- (void)exit;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

@end

