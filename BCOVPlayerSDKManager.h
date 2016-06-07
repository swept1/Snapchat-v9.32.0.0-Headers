//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface BCOVPlayerSDKManager : NSObject
{
    NSString *_managerID;
    NSMutableArray *_registeredComponents;
    NSObject<OS_dispatch_queue> *_componentsIsolationQueue;
    NSDictionary *_options;
    NSMutableArray *_analyticses;
}

+ (id)sharedManager;
+ (id)sharedManagerWithOptions:(id)arg1;
@property(retain, nonatomic) NSMutableArray *analyticses; // @synthesize analyticses=_analyticses;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *componentsIsolationQueue; // @synthesize componentsIsolationQueue=_componentsIsolationQueue;
@property(retain, nonatomic) NSMutableArray *registeredComponents; // @synthesize registeredComponents=_registeredComponents;
@property(copy, nonatomic) NSString *managerID; // @synthesize managerID=_managerID;
- (void).cxx_destruct;
- (id)createCrashlytics;
- (void)logToCrashlytics:(id)arg1;
- (void)logToConsole:(id)arg1;
- (void)logIdentity:(id)arg1;
- (id)messageForIdentity:(id)arg1;
- (id)contextForIdentity:(id)arg1;
- (void)registerComponent:(id)arg1;
- (CDUnknownBlockType)defaultControlsViewStrategy;
- (id)createBasicSessionProviderWithOptions:(id)arg1;
- (id)createPlaybackControllerWithSessionProvider:(id)arg1 viewStrategy:(CDUnknownBlockType)arg2;
- (id)createPlaybackControllerWithViewStrategy:(CDUnknownBlockType)arg1;
- (id)createPlaybackController;
- (id)initWithIdentifier:(id)arg1 options:(id)arg2;
- (id)init;

@end

