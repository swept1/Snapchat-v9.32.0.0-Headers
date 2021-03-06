//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SCRequestTaskLogger : NSObject
{
    NSMutableArray *_queueDelays;
    NSMutableArray *_networkDelays;
    NSMutableArray *_requestIDs;
    double _enqueueTime;
    double _runStartTime;
    double _logStatsRate;
}

- (void).cxx_destruct;
- (_Bool)_shouldLogStatsOnTaskFinish;
- (void)taskDidFinish:(id)arg1;
- (void)taskDidRun:(id)arg1;
- (void)taskWillRun:(id)arg1;
- (void)taskDidEnqueue:(id)arg1;
- (id)init;

@end

