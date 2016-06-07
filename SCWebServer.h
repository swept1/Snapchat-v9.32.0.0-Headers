//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSHashTable, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSTimer;

@interface SCWebServer : NSObject
{
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_group> *_sourceGroup;
    NSMutableArray *_handlers;
    long long _activeConnections;
    _Bool _connected;
    NSDictionary *_options;
    NSString *_serverName;
    unsigned long long _port;
    NSObject<OS_dispatch_source> *_source4;
    NSObject<OS_dispatch_source> *_source6;
    NSHashTable *_activeConnectionHash;
    NSTimer *_stopConnectionsTimer;
    _Bool _shouldAutomaticallyMapHEADToGET;
    NSString *_authenticationRealm;
    NSDictionary *_authenticationBasicAccounts;
    NSDictionary *_authenticationDigestAccounts;
}

+ (void)initialize;
@property(readonly, nonatomic) _Bool shouldAutomaticallyMapHEADToGET; // @synthesize shouldAutomaticallyMapHEADToGET=_shouldAutomaticallyMapHEADToGET;
@property(readonly, nonatomic) NSDictionary *authenticationDigestAccounts; // @synthesize authenticationDigestAccounts=_authenticationDigestAccounts;
@property(readonly, nonatomic) NSDictionary *authenticationBasicAccounts; // @synthesize authenticationBasicAccounts=_authenticationBasicAccounts;
@property(readonly, nonatomic) NSString *authenticationRealm; // @synthesize authenticationRealm=_authenticationRealm;
@property(readonly, nonatomic) NSString *serverName; // @synthesize serverName=_serverName;
@property(readonly, nonatomic) unsigned long long port; // @synthesize port=_port;
@property(readonly, nonatomic) NSArray *handlers; // @synthesize handlers=_handlers;
- (void).cxx_destruct;
- (void)stop;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (_Bool)startWithOptions:(id)arg1 error:(id *)arg2;
- (void)_didEnterBackground:(id)arg1;
- (void)_stop;
- (void)_stopConnections;
- (_Bool)_start:(id *)arg1;
- (id)_createDispatchSourceWithListeningSocket:(int)arg1 IPv6:(_Bool)arg2;
- (int)_createListeningSocket:(_Bool)arg1 localAddress:(const void *)arg2 length:(unsigned int)arg3 maxPendingConnections:(unsigned long long)arg4 error:(id *)arg5;
- (void)addHandlerWithMatchBlock:(CDUnknownBlockType)arg1 asyncProcessBlock:(CDUnknownBlockType)arg2;
- (void)didEndConnection:(id)arg1;
- (void)_didDisconnect;
- (void)willStartConnection:(id)arg1;
- (void)_didConnect;
- (void)dealloc;
- (id)init;

@end

