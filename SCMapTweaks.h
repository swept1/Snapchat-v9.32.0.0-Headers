//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBTweakObserver.h"

@class FBTweak, NSString;

@interface SCMapTweaks : NSObject <FBTweakObserver>
{
    FBTweak *_nearbyStoryTweak;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)tweakDidChange:(id)arg1;
- (_Bool)isNearbyStoryEnabled;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

