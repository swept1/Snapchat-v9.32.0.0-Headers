//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLoggerAmplitudeProtocol.h"

@class AMPConfig, NSMutableDictionary, NSObject<SCAEventFieldProvider>, NSOperationQueue, NSString;

@interface Amplitude : NSObject <SCLoggerAmplitudeProtocol>
{
    _Bool _isSessionOpen;
    _Bool _updateScheduled;
    _Bool _updatingCurrently;
    NSString *_validationServerUrl;
    unsigned long long _uploadTaskID;
    AMPConfig *_config;
    NSString *_sessionId;
    NSMutableDictionary *_propertyList;
    NSString *_propertyListPath;
    NSMutableDictionary *_eventsData;
    NSString *_eventsDataPath;
    NSOperationQueue *_mainQueue;
    NSOperationQueue *_initializerQueue;
    NSOperationQueue *_backgroundQueue;
    NSOperationQueue *_sessionQueue;
    NSObject<SCAEventFieldProvider> *_eventFieldProvider;
    CDUnknownBlockType _isUserCreated;
    CDUnknownBlockType _eventFilter;
}

+ (id)eventsDataDirectory;
+ (id)eventsDataPath:(id)arg1;
+ (id)propertyListPath:(id)arg1;
+ (double)getRelativeTimeNow;
+ (double)getAbsoluteTimeNow;
+ (id)epoch;
@property(copy, nonatomic) CDUnknownBlockType eventFilter; // @synthesize eventFilter=_eventFilter;
@property(copy, nonatomic) CDUnknownBlockType isUserCreated; // @synthesize isUserCreated=_isUserCreated;
@property(retain, nonatomic) NSObject<SCAEventFieldProvider> *eventFieldProvider; // @synthesize eventFieldProvider=_eventFieldProvider;
@property(retain, nonatomic) NSOperationQueue *sessionQueue; // @synthesize sessionQueue=_sessionQueue;
@property(retain, nonatomic) NSOperationQueue *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
@property(retain, nonatomic) NSOperationQueue *initializerQueue; // @synthesize initializerQueue=_initializerQueue;
@property(retain, nonatomic) NSOperationQueue *mainQueue; // @synthesize mainQueue=_mainQueue;
@property(retain, nonatomic) NSString *eventsDataPath; // @synthesize eventsDataPath=_eventsDataPath;
@property(retain, nonatomic) NSMutableDictionary *eventsData; // @synthesize eventsData=_eventsData;
@property(retain, nonatomic) NSString *propertyListPath; // @synthesize propertyListPath=_propertyListPath;
@property(retain, nonatomic) NSMutableDictionary *propertyList; // @synthesize propertyList=_propertyList;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) AMPConfig *config; // @synthesize config=_config;
@property(nonatomic) unsigned long long uploadTaskID; // @synthesize uploadTaskID=_uploadTaskID;
@property(nonatomic) _Bool updatingCurrently; // @synthesize updatingCurrently=_updatingCurrently;
@property(nonatomic) _Bool updateScheduled; // @synthesize updateScheduled=_updateScheduled;
@property(nonatomic) _Bool isSessionOpen; // @synthesize isSessionOpen=_isSessionOpen;
@property(retain) NSString *validationServerUrl; // @synthesize validationServerUrl=_validationServerUrl;
- (void).cxx_destruct;
- (void)updateValidationServerUrl:(id)arg1;
- (void)moveFileIfNotExists:(id)arg1 to:(id)arg2;
- (id)md5HexDigest:(id)arg1;
- (_Bool)isArgument:(id)arg1 validType:(Class)arg2 methodName:(id)arg3;
- (id)makeJSONSerializable:(id)arg1;
- (void)savePropertyList;
- (double)getSessionLength;
- (double)getSessionGap:(double)arg1;
- (_Bool)sessionExpired:(double)arg1;
- (void)closeSession;
- (void)resumeSessionIfPossible;
- (void)openSession;
- (void)saveEventsData;
- (unsigned char)isRetryable:(long long)arg1;
- (unsigned char)hasFailuresToReport;
- (void)addFailureEvent:(id)arg1;
- (void)resetFailureParameters;
- (void)uploadToUnauthEndpointWithRequest:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)uploadToAuthEndpointWithParameters:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (_Bool)useAuthEndpoint;
- (void)makeEventUploadPostRequest:(id)arg1 lastSeqIdUploaded:(long long)arg2;
- (void)handleUploadResponse:(id)arg1 data:(id)arg2 error:(id)arg3 lastSeqIdUploaded:(long long)arg4;
- (void)uploadEventsWithLimit:(int)arg1;
- (void)uploadEvents;
- (void)uploadEventsExecute;
- (void)uploadEventsWithDelay:(int)arg1;
- (id)dequeueSessionEndEvent;
- (void)enqueueSessionEndEvent:(id)arg1;
- (id)getCommonParameters;
- (void)addCommonParameters:(id)arg1;
- (void)logEvent:(id)arg1;
- (void)logTypedEvent:(id)arg1;
- (void)logUserNotTrackedEvent:(id)arg1;
- (void)logUserTrackedEvent:(id)arg1;
- (void)filterEvent:(id)arg1;
- (id)initWithEventFieldProvider:(id)arg1 config:(id)arg2 eventFilter:(CDUnknownBlockType)arg3 userCheckBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

