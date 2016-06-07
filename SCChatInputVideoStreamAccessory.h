//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatInputAccessory.h"
#import "SCChatVideoNoteRecorderDelegate.h"
#import "SCTimeProfilable.h"

@class NSString, SCChatInputAudioStreamAccessory, SCChatVideoNoteRecorder, UIButton, UIImageView, UILongPressGestureRecognizer;

@interface SCChatInputVideoStreamAccessory : NSObject <SCChatVideoNoteRecorderDelegate, SCChatInputAccessory, SCTimeProfilable>
{
    id <SCChatDrawerSender> _sender;
    UIButton *_miniatureView;
    UIImageView *_cancelNote;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    SCChatVideoNoteRecorder *_videoNoteRecorder;
    _Bool _didCancelNote;
    _Bool _fullscreenImageUsed;
    _Bool _isActive;
    _Bool _isVideoNoteRecording;
    id <SCChatInputVideoStreamAccessoryDelegate> _delegate;
    SCChatInputAudioStreamAccessory *_audioAccessory;
}

+ (long long)context;
+ (id)profiledSelectorNames;
@property(nonatomic) __weak SCChatInputAudioStreamAccessory *audioAccessory; // @synthesize audioAccessory=_audioAccessory;
@property(nonatomic) _Bool isVideoNoteRecording; // @synthesize isVideoNoteRecording=_isVideoNoteRecording;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) __weak id <SCChatInputVideoStreamAccessoryDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool fullscreenImageUsed; // @synthesize fullscreenImageUsed=_fullscreenImageUsed;
- (void).cxx_destruct;
- (void)resumeVideoChatAudioMaybeWithCompletion:(CDUnknownBlockType)arg1;
- (void)suspendVideoChatAudioWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isOnPhoneCall;
- (void)_sendVideoNoteMaybe;
- (void)_cleanupRecording;
- (void)accessoryLongPressed:(id)arg1;
- (void)_setDidCancelNote:(_Bool)arg1;
- (void)cancelNoteRecordingMaybeWithCompletion:(CDUnknownBlockType)arg1;
- (id)videoNoteRecorder;
- (void)fadeInVideoNoteImage;
- (void)fadeOutVideoNoteImage;
- (void)setMiniatureViewImageForVideoNoteRecordingState;
- (void)setMiniatureViewImageForVideoChatState;
- (void)resetMiniatureViewImageForNormalControlState;
- (void)resetAccessoryWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetAccessory;
- (void)toggleAccesory;
- (void)accessoryPressed;
- (id)miniatureView;
- (void)dealloc;
- (id)initWithSender:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

