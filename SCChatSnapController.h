//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCaptionManagerDelegate.h"
#import "SendSnapNavigationControllerDelegate.h"

@class NSString, SCCaptionManager, SCUserSession, UIViewController;

@interface SCChatSnapController : NSObject <SendSnapNavigationControllerDelegate, SCCaptionManagerDelegate>
{
    NSString *_token;
    SCUserSession *_userSession;
    id <SCChatSnapControllerDelegate> _delegate;
    UIViewController *_parentViewController;
    SCCaptionManager *_captionManager;
}

- (void).cxx_destruct;
- (void)_didSendSnapOrChatMessage;
- (void)_dismissPreviewIfPresented;
- (void)didPostStoryWithoutSendingSnap;
- (void)didSendToGallery;
- (void)didSendChatMessage;
- (void)didSendSnap:(id)arg1;
- (void)didCancelFromPreview:(id)arg1;
- (void)didComeFromCameraWithoutSendingSnap;
- (_Bool)canStartEditingCaption;
- (void)presentPreviewforInChatImage:(id)arg1 fromSnapSource:(long long)arg2 fromGallery:(_Bool)arg3 fromFrontFacingCamera:(_Bool)arg4 fromStoryReply:(_Bool)arg5 replyUsername:(id)arg6 captionText:(id)arg7 initialCaptionVertical:(double)arg8 completion:(CDUnknownBlockType)arg9;
- (void)presentInChatSnapWithReplyUsername:(id)arg1 captionText:(id)arg2 initialCaptionVertical:(double)arg3;
- (id)initWithParentViewController:(id)arg1 delegate:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

