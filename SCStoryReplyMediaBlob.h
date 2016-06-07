//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCMediaDownloadUnarchiver.h"

@class NSData, NSString;

@interface SCStoryReplyMediaBlob : NSObject <SCMediaDownloadUnarchiver>
{
    _Bool _containsVideo;
    NSData *_mediaData;
    NSData *_overlayData;
}

@property(copy, nonatomic) NSData *overlayData; // @synthesize overlayData=_overlayData;
@property(copy, nonatomic) NSData *mediaData; // @synthesize mediaData=_mediaData;
@property(nonatomic) _Bool containsVideo; // @synthesize containsVideo=_containsVideo;
- (void).cxx_destruct;
- (void)unzipData:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)unarchiveBlobFromData:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
