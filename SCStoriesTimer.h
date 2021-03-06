//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CADisplayLink, CAShapeLayer;

@interface SCStoriesTimer : UIView
{
    CAShapeLayer *_blackFullBackgroundLayer;
    CAShapeLayer *_blackOuterRingLayer;
    CAShapeLayer *_whiteOuterTimerLayer;
    CAShapeLayer *_whiteInnerTimerLayer;
    double _innerCircleRecalibratedArcStartingEndAngle;
    _Bool _totalTimeFrozen;
    _Bool _recalibrate;
    _Bool _autotimer;
    double _timerFadeoutFactor;
    _Bool _innerTimerVisible;
    CADisplayLink *_borderDisplayLink;
    double _lastDrawTime;
    double _snapTime;
    double _snapTimeLeft;
    double _totalTime;
    double _totalTimeLeft;
}

@property(nonatomic) _Bool innerTimerVisible; // @synthesize innerTimerVisible=_innerTimerVisible;
@property(nonatomic) double totalTimeLeft; // @synthesize totalTimeLeft=_totalTimeLeft;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) double snapTimeLeft; // @synthesize snapTimeLeft=_snapTimeLeft;
@property(nonatomic) double snapTime; // @synthesize snapTime=_snapTime;
@property(nonatomic) double lastDrawTime; // @synthesize lastDrawTime=_lastDrawTime;
@property(retain, nonatomic) CADisplayLink *borderDisplayLink; // @synthesize borderDisplayLink=_borderDisplayLink;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (double)calculateInnerCircleEndAngle;
- (void)updateWithPercentOffset:(double)arg1;
- (void)borderDisplayLinkFired:(id)arg1;
- (void)stopBorderDisplayLink;
- (void)startBorderDisplayLink;
- (void)setBorderWithSnapTime:(double)arg1 snapTimeLeft:(double)arg2 totalTime:(double)arg3 totalTimeLeft:(double)arg4;
- (void)recalibrateTimer;
- (void)dealloc;
- (void)resetTimer;
- (id)initWithAutotimer:(_Bool)arg1;

@end

