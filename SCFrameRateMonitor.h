//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface SCFrameRateMonitor : NSObject
{
    CADisplayLink *_displayLink;
    _Bool _fromBackground;
    _Bool _isMonitoring;
    _Bool _isEnabled;
    NSObject<OS_dispatch_queue> *_monitoringQueue;
    NSObject<OS_dispatch_source> *_monitoringTimer;
    NSMutableArray *_frameRateRecords;
    long long _currentRecord;
    double _runningStartTime;
    long long _runningFrameCount;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)_logFrameRatesReport:(id)arg1;
- (void)_logFirstFrameTime:(double)arg1 fromBackground:(_Bool)arg2;
- (void)_updateWithNewFrameCount:(long long)arg1 startTime:(double)arg2;
- (long long)_leftIndexFrom:(long long)arg1;
- (id)syncFrameRatesInTheLastSeconds:(unsigned long long)arg1 nowTimeStamp:(double)arg2;
- (double)_averageFrameRateFromFrameRates:(id)arg1;
- (void)_periodicMonitor;
- (void)_stopPeriodicMonitorTimer;
- (void)_startPeriodicMonitorTimerWithInterval:(double)arg1;
- (double)averageFrameRateInTheLastSeconds:(unsigned long long)arg1;
- (id)frameRatesInTheLastSeconds:(unsigned long long)arg1;
- (void)reportFrameRateForPageView:(id)arg1 after:(unsigned long long)arg2;
- (id)frameRatesReportInTheLastSeconds:(unsigned long long)arg1;
- (void)handleDisplayLink:(id)arg1;
- (void)stopDisplayLink;
- (void)startDisplayLink;
- (void)dealloc;
- (id)init;

@end

