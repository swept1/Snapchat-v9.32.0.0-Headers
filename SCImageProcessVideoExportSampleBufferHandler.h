//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCImageProcessVideoExportHandler.h"

@class AVAssetReader, AVAssetReaderOutput, AVAssetWriter, AVAssetWriterInput, NSObject<OS_dispatch_queue>, NSString;

@interface SCImageProcessVideoExportSampleBufferHandler : NSObject <SCImageProcessVideoExportHandler>
{
    AVAssetReader *_assetReader;
    AVAssetWriter *_assetWriter;
    AVAssetReaderOutput *_readerOutput;
    AVAssetWriterInput *_writerInput;
    NSObject<OS_dispatch_queue> *_queue;
    struct opaqueCMSampleBuffer *_sampleBuffer;
    CDStruct_1b6d18a9 _presentationTime;
    _Bool _done;
    id <SCImageProcessVideoExportHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCImageProcessVideoExportHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool done; // @synthesize done=_done;
- (void).cxx_destruct;
- (void)startTranscodingWhenReady;
- (void)dealloc;
- (id)initWithAssetReader:(id)arg1 assetWriter:(id)arg2 readerOutput:(id)arg3 writerInput:(id)arg4 queue:(id)arg5 firstSampleBufer:(struct opaqueCMSampleBuffer *)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

