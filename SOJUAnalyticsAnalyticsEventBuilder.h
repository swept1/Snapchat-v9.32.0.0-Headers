//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNumber, NSString, SOJUAnalyticsAnalyticsMetrics;

@interface SOJUAnalyticsAnalyticsEventBuilder : NSObject
{
    NSString *_eventName;
    NSDictionary *_params;
    SOJUAnalyticsAnalyticsMetrics *_metrics;
    NSNumber *_ts;
    NSString *_userId;
}

+ (id)withJUAnalyticsAnalyticsEvent:(id)arg1;
- (void).cxx_destruct;
- (id)setUserId:(id)arg1;
- (id)setTs:(id)arg1;
- (id)setMetrics:(id)arg1;
- (id)setParams:(id)arg1;
- (id)setEventName:(id)arg1;
- (id)build;

@end
