//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCNetworkProfileWatcher : NSObject
{
    long long _currentNetworkProfileStatus;
}

+ (id)shared;
@property(nonatomic) long long currentNetworkProfileStatus; // @synthesize currentNetworkProfileStatus=_currentNetworkProfileStatus;
- (id)stringForCurrentNetworkProfileStatus;
- (void)updateNetworkProfileStatus:(int)arg1;
- (void)didAppStartupComplete:(id)arg1;
- (void)networkReachabilityChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end
