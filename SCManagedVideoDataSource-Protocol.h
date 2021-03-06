//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureSession, SCQueuePerformer;

@protocol SCManagedVideoDataSource <NSObject>
@property(readonly, nonatomic) SCQueuePerformer *performer;
@property(readonly, nonatomic) _Bool isStreaming;
- (void)commitConfiguration;
- (void)setDevicePosition:(unsigned long long)arg1;
- (void)beginConfiguration;
- (void)removeAsOutput:(AVCaptureSession *)arg1;
- (void)setAsOutput:(AVCaptureSession *)arg1 devicePosition:(unsigned long long)arg2;
- (void)setVideoStabilizationEnabledIfSupported:(_Bool)arg1;
- (void)removeListener:(id <SCManagedVideoDataSourceListener>)arg1;
- (void)addListener:(id <SCManagedVideoDataSourceListener>)arg1;
- (void)stopStreaming;
- (void)startStreaming;
@end

