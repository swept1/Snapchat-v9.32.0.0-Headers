//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SnapAdsStudySettingsAbstraction.h"

@class NSString;

@interface SCSnapAdsStudySettingsAbstractionImpl : NSObject <SnapAdsStudySettingsAbstraction>
{
}

- (id)stringForStudy:(id)arg1 forVariable:(id)arg2 defaultValue:(id)arg3;
- (_Bool)boolForStudy:(id)arg1 forVariable:(id)arg2 defaultValue:(_Bool)arg3;
- (double)doubleForStudy:(id)arg1 forVariable:(id)arg2 defaultValue:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
