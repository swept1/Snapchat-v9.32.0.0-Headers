//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCStoriesAutoAdvanceConfiguration : NSObject
{
}

+ (id)shared;
- (_Bool)shouldUsePageViewControllerAnimation;
- (_Bool)shouldNotFreeAVPlayerItem;
- (_Bool)shouldUseSingleMediaViewForAutoAdvance;
- (_Bool)shouldNotFreeAVPlayerItemForLowEndDevices;
- (unsigned long long)shouldUsePageViewControllerAnimationForLowEndDevices;
- (unsigned long long)shouldUseSingleMediaViewForAutoAdvanceInLowEndDevices;
- (unsigned long long)shouldEnableAutoAdvanceInRecentUpdates;

@end
