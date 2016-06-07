//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface SOJUDynamicContentSettingBuilder : NSObject
{
    NSNumber *_autoRefreshDelayInMilli;
    NSNumber *_autoRefreshMessageXPortrait;
    NSNumber *_autoRefreshMessageXLandscape;
    NSNumber *_autoRefreshMessageYPortrait;
    NSNumber *_autoRefreshMessageYLandscape;
    NSString *_dynamicFilterRefreshHint;
    NSString *_dynamicFilterUpdatingMessage;
}

+ (id)withJUDynamicContentSetting:(id)arg1;
- (void).cxx_destruct;
- (id)setDynamicFilterUpdatingMessage:(id)arg1;
- (id)setDynamicFilterRefreshHint:(id)arg1;
- (id)setAutoRefreshMessageYLandscape:(id)arg1;
- (id)setAutoRefreshMessageYPortrait:(id)arg1;
- (id)setAutoRefreshMessageXLandscape:(id)arg1;
- (id)setAutoRefreshMessageXPortrait:(id)arg1;
- (id)setAutoRefreshDelayInMilli:(id)arg1;
- (id)build;

@end

