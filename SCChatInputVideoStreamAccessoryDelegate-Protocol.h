//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SCChatInputVideoStreamAccessoryDelegate <NSObject>
- (void)resumeVideoChatAudioMaybeWithCompletion:(void (^)(void))arg1;
- (void)suspendVideoChatAudioWithCompletion:(void (^)(void))arg1;
- (void)enableAccessoryViewInteractionAfterChatNotesRecording;
- (void)disableAccessoryViewInteractionBeforeChatNotesRecording;
- (void)removeCanceNoteButton;
- (_Bool)isDraggingPointWithinCancel:(struct CGPoint)arg1;
- (void)showCancelNoteButton;
- (void)resizePreview:(_Bool)arg1 withCompletion:(void (^)(void))arg2;
- (_Bool)isAnimatingVideoChatFullscreen;
- (_Bool)receivingAudioOrVideo;
- (_Bool)sendingAudioOrVideo;
- (void)unpublishMedia:(unsigned long long)arg1 withCompletion:(void (^)(_Bool))arg2;
- (void)publishMedia:(unsigned long long)arg1 withCompletion:(void (^)(_Bool))arg2;
@end

