//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCNetworkConnectivityListener.h"

@class NSString;

@interface SCNetworkConnectivityListenerAnnouncer : NSObject <SCNetworkConnectivityListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCNetworkConnectivityListener>, std::__1::allocator<__weak id<SCNetworkConnectivityListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)networkConnectivityStatusDidChange:(long long)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

