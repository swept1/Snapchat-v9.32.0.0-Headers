//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCInAppNotificationDisplayProtocol.h"

@class NSString;

@interface UIViewController (AppNotification) <SCInAppNotificationDisplayProtocol>
+ (_Bool)isTemporarilyDelayingViewController:(id)arg1;
+ (_Bool)isDelayingViewController:(id)arg1;
+ (_Bool)isChatController:(id)arg1 andInConversationForNotification:(id)arg2;
- (id)otherParticipant;
- (_Bool)inAudioOrVideoCall;
- (void)didVisibleNotificationGetPressed:(id)arg1 withAction:(id)arg2;
- (void)resumePlayback;
- (void)pausePlayback;
- (unsigned long long)policyForNotification:(id)arg1;
- (void)processNotification:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

