//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSURL, SCManagedVideoCapturer;

@protocol SCManagedVideoCapturerDelegate <NSObject>
- (void)managedVideoCapturerDidCancel:(SCManagedVideoCapturer *)arg1;
- (void)managedVideoCapturer:(SCManagedVideoCapturer *)arg1 didFailWithError:(NSError *)arg2;
- (void)managedVideoCapturer:(SCManagedVideoCapturer *)arg1 didSucceedWithFileURL:(NSURL *)arg2;
- (void)managedVideoCapturer:(SCManagedVideoCapturer *)arg1 willAppendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)managedVideoCapturerDidBeginAudioRecording:(SCManagedVideoCapturer *)arg1;
- (void)managedVideoCapturerDidBeginVideoRecording:(SCManagedVideoCapturer *)arg1;
@end
