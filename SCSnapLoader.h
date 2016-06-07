//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCPreloadListener.h"

@class FBKVOController, NSString;

@interface SCSnapLoader : NSObject <SCPreloadListener>
{
    FBKVOController *_observeController;
}

@property(retain, nonatomic) FBKVOController *observeController; // @synthesize observeController=_observeController;
- (void).cxx_destruct;
- (void)preloadController:(id)arg1 preloadModeDidChange:(long long)arg2;
- (_Bool)firstBatchOfSnapsLoadedInChat:(id)arg1;
- (_Bool)firstBatchOfSnapsLoadingInChat:(id)arg1;
- (void)loadUnviewedSnapStacksOnWifiWithLimit:(long long)arg1;
- (void)autoLoadUnviewedSnapsOnWifiAfterSnapLoaded:(id)arg1;
- (void)autoLoadUnviewedSnapStackOnWifiAfterSnapStackLoaded:(id)arg1;
- (void)loadRecentSnapStacks;
- (void)networkReachabilityDidChange;
- (void)removeObservers;
- (void)addObservers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
