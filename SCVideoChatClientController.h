//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatViewLifeCycleListener.h"
#import "SCChatViewModelListener.h"
#import "SCVideoChatControllerV2Delegate.h"

@class CTCallCenter, NSString, SCBubbleChatController, SCChat, SCChatViewModelForChat, SCVideoChatControllerV2;

@interface SCVideoChatClientController : NSObject <SCVideoChatControllerV2Delegate, SCChatViewLifeCycleListener, SCChatViewModelListener>
{
    SCChatViewModelForChat *_chatViewModel;
    id <SCVideoChatClientControllerDelegate> _delegate;
    SCVideoChatControllerV2 *_videoChatController;
    SCBubbleChatController *_bubbleChatController;
    unsigned long long _backgroundState;
    CTCallCenter *_callCenter;
    SCChat *_chat;
}

@property(nonatomic) __weak SCChat *chat; // @synthesize chat=_chat;
@property(retain, nonatomic) CTCallCenter *callCenter; // @synthesize callCenter=_callCenter;
@property(nonatomic) unsigned long long backgroundState; // @synthesize backgroundState=_backgroundState;
@property(retain, nonatomic) SCBubbleChatController *bubbleChatController; // @synthesize bubbleChatController=_bubbleChatController;
@property(retain, nonatomic) SCVideoChatControllerV2 *videoChatController; // @synthesize videoChatController=_videoChatController;
@property(nonatomic) __weak id <SCVideoChatClientControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isH264Enabled;
- (_Bool)pausingDownloadManagerEnabledFromStudy;
- (double)deferredDisconnectTimeFromStudy;
- (void)resetPresenceTimers;
- (void)prepareVideoChatMaybe;
- (void)didReceiveChatMessage;
- (void)didSendChatMessage;
- (void)resumeVideoChatAudioMaybeWithCompletion:(CDUnknownBlockType)arg1;
- (void)suspendVideoChatAudioWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)shouldPreviewRecognizeTapGestureRecognizer:(id)arg1;
- (_Bool)isTouchInsideChatBubble:(id)arg1;
- (_Bool)recipientUsingV2;
- (void)onStreamingActivityChanged:(_Bool)arg1;
- (_Bool)isRecipientPresent;
- (_Bool)isReachable;
- (_Bool)isTextLengthBlockingPreview;
- (id)remoteUsername;
- (id)remoteUserDisplayName;
- (void)inputTextHeightDidChangeAnimated:(_Bool)arg1;
- (id)inputView;
- (id)bubbleChatView;
- (id)containerView;
- (void)setFullscreenAccessoryImagesUsed:(_Bool)arg1;
- (void)setInputViewTransparent:(_Bool)arg1;
- (_Bool)keyboardHidden;
- (void)setKeyboardHidden:(_Bool)arg1;
- (void)setInputAccessoriesHidden:(_Bool)arg1;
- (void)setSnapAccessoryHidden:(_Bool)arg1;
- (void)outgoingCardDidHide;
- (void)outgoindCardWillBeShown;
- (void)cancelAudioVideoNoteMaybeWithCompletion:(CDUnknownBlockType)arg1;
- (void)previewsWillResignFullscreen;
- (void)previewWillGoFullscreen:(id)arg1;
- (void)remoteStreamUnpublished:(unsigned long long)arg1;
- (void)remoteStreamPublished:(unsigned long long)arg1;
- (void)didRemoteIgnore;
- (void)didRemoteConsume;
- (void)didRemotelJoin;
- (void)didLocalIgnore;
- (void)didLocalConsume;
- (void)didLocalJoin;
- (void)didStopAsyncCall:(unsigned long long)arg1;
- (void)didStartAsyncCall:(unsigned long long)arg1;
- (void)showStatusMessageWithText:(id)arg1;
- (void)resetVideoAccessory;
- (void)resetAudioAccessory;
- (void)triggerVideoAccessoryTap;
- (void)triggerAudioAccessoryTap;
- (void)callTimedOutForTypeOfCall:(unsigned long long)arg1;
- (void)panInputAccessoriesWithGestureRecognizer:(id)arg1 dragToHide:(_Bool)arg2;
- (void)updateTableContentInsetForPresenceWithHeight:(double)arg1;
- (_Bool)isRemoteOrLocalFullscreen;
- (void)panFullscreenWithGestureRecognizer:(id)arg1;
- (void)resizePreview:(_Bool)arg1 dueToTextInput:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)drawerInactive;
- (void)drawerActive;
- (void)_setupCallEventsHandler;
- (_Bool)isAnimatingFullscreen;
- (_Bool)receivingVideo;
- (_Bool)sendingVideo;
- (_Bool)receivingAudioOrVideo;
- (_Bool)sendingAudioOrVideo;
- (void)unpublishMedia:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)publishMedia:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)reachabilityChanged:(id)arg1;
- (void)removeReachabilityObserver;
- (void)addReachabilityObserver;
- (void)recipientDoesntSupportVideoChat:(unsigned long long)arg1;
- (void)userInChatDueToTalkPushWithMediaType:(unsigned long long)arg1 mac:(id)arg2 payload:(id)arg3;
- (void)connectViaChatAuthMaybe;
- (_Bool)canStartVideoChatSession;
- (_Bool)shouldStartVideoChatSessionUsingPresence;
- (_Bool)shouldStartVideoChatSession;
- (void)resetPresenceIndicator;
- (void)leaveVideoChatView;
- (void)releaseVideoChatWithCompletion:(CDUnknownBlockType)arg1;
- (void)initVideoChatWithMac:(id)arg1 andPayload:(id)arg2;
- (void)initVideoChatWithHereAuth;
- (void)presenceUpdated;
- (_Bool)_isApplicationInTheBackground;
- (void)resumingBackgroundModeMaybe;
- (void)enteringBackgroundModeMaybe:(_Bool)arg1;
- (void)viewResigningActive;
- (void)viewWillEnterBackground;
- (void)viewDidFullyDisappear;
- (void)viewDidSwipeOut;
- (void)viewDidFullyAppear;
- (void)viewDidBecomeActive;
- (void)viewDidSwipeIn;
- (void)setChatViewModel:(id)arg1;
- (id)initWithParentViewController:(id)arg1 chatInputController:(id)arg2 navigationDelegate:(id)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

