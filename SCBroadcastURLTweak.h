//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBTweakObserver.h"

@class FBTweak, NSDictionary, NSString;

@interface SCBroadcastURLTweak : NSObject <FBTweakObserver>
{
    FBTweak *_regionTweak;
    NSDictionary *_regionMap;
}

- (void).cxx_destruct;
- (id)channelsURLForPreviousURL:(id)arg1 newRegion:(id)arg2;
- (id)currentChannelsURL;
- (void)tweakDidChange:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
