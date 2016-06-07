//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "SCMessage.h"
#import "SCMessageIterToken.h"
#import "SCMessageState.h"

@class NSAttributedString, NSDate, NSNumber, NSString, SCChatMessage;

@interface SCBaseMessage : NSObject <NSCoding, SCMessage, SCMessageState, SCMessageIterToken>
{
    _Bool _failedAtLeastOnce;
    _Bool _failedToSend;
    _Bool _releasedByFriend;
    _Bool _releasedByUser;
    _Bool _savedByUser;
    _Bool _savedByFriend;
    _Bool _preserved;
    _Bool _sentByUser;
    _Bool _sending;
    _Bool _storyReply;
    _Bool _pending;
    SCChatMessage *_chatMessage;
    id <SCBaseMessageParametersDelegate> _delegate;
    unsigned long long _friendSaveVersion;
    NSString *__id;
    NSString *_iterToken;
    long long _groupId;
    NSString *_recipient;
    NSString *_sender;
    long long _sendResult;
    NSString *_text;
    NSDate *_creationTimestamp;
    NSDate *_timestamp;
    NSDate *_sentTimestamp;
    NSDate *_viewedTimestamp;
    unsigned long long _userSaveVersion;
    unsigned long long _sendAttempts;
    NSString *_conversationId;
    NSNumber *_sequenceNumber;
    NSAttributedString *_attributedText;
}

+ (id)conversationIdForParticipants:(id)arg1;
@property(retain, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(retain, nonatomic) NSNumber *sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(nonatomic, getter=isPending) _Bool pending; // @synthesize pending=_pending;
@property(nonatomic) unsigned long long sendAttempts; // @synthesize sendAttempts=_sendAttempts;
@property(nonatomic) _Bool storyReply; // @synthesize storyReply=_storyReply;
@property(nonatomic) unsigned long long userSaveVersion; // @synthesize userSaveVersion=_userSaveVersion;
@property(retain, nonatomic) NSDate *viewedTimestamp; // @synthesize viewedTimestamp=_viewedTimestamp;
@property(retain, nonatomic) NSDate *sentTimestamp; // @synthesize sentTimestamp=_sentTimestamp;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSDate *creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) long long sendResult; // @synthesize sendResult=_sendResult;
@property(nonatomic) _Bool sending; // @synthesize sending=_sending;
@property(nonatomic) _Bool sentByUser; // @synthesize sentByUser=_sentByUser;
@property(retain, nonatomic) NSString *sender; // @synthesize sender=_sender;
@property(nonatomic) _Bool preserved; // @synthesize preserved=_preserved;
@property(nonatomic) _Bool savedByFriend; // @synthesize savedByFriend=_savedByFriend;
@property(nonatomic) _Bool savedByUser; // @synthesize savedByUser=_savedByUser;
@property(nonatomic) _Bool releasedByUser; // @synthesize releasedByUser=_releasedByUser;
@property(nonatomic) _Bool releasedByFriend; // @synthesize releasedByFriend=_releasedByFriend;
@property(retain, nonatomic) NSString *recipient; // @synthesize recipient=_recipient;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *iterToken; // @synthesize iterToken=_iterToken;
@property(retain, nonatomic) NSString *_id; // @synthesize _id=__id;
@property(nonatomic) unsigned long long friendSaveVersion; // @synthesize friendSaveVersion=_friendSaveVersion;
@property(nonatomic) _Bool failedToSend; // @synthesize failedToSend=_failedToSend;
@property(nonatomic) _Bool failedAtLeastOnce; // @synthesize failedAtLeastOnce=_failedAtLeastOnce;
@property(nonatomic) __weak id <SCBaseMessageParametersDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCChatMessage *chatMessage; // @synthesize chatMessage=_chatMessage;
- (void).cxx_destruct;
- (long long)scaMediaType;
- (long long)scaMessageType;
- (id)logEventName;
@property(readonly, copy) NSString *description;
- (_Bool)shouldNotifyUserOfFailure;
- (unsigned long long)notificationType;
- (id)uploadSuccessUserDefaultsKey;
- (id)sendJSON;
- (id)unpreserveJSON;
- (id)preserveJSON;
- (id)unsaveJSON;
- (id)saveJSON;
- (id)jsonForMessageType:(long long)arg1;
- (id)chatMessageOfType:(long long)arg1 parametersDelegate:(id)arg2;
- (id)messageParameters;
- (long long)getGroupId;
- (unsigned long long)sequenceValue;
- (_Bool)validSequence;
- (void)setFailed;
- (_Bool)hasFailedAtLeastOnce;
- (long long)getSendResult;
- (void)setSendResult:(long long)arg1;
- (_Bool)isSendingOrHasFailed;
- (_Bool)isInvalidAfterUnarchiving;
- (id)messageRecipient;
- (id)messageSender;
- (id)feedSortTimestamp;
- (id)feedDisplayTimestamp;
- (id)messageTimestamp;
- (_Bool)isUnread;
- (id)consistentId;
- (_Bool)hasFailed;
- (_Bool)isSending;
- (_Bool)shouldDisplayBelowFoldInChat;
- (_Bool)isPreserved;
- (_Bool)isSaved;
- (_Bool)isReleased;
- (_Bool)isSentToSelf;
- (_Bool)isSent;
- (void)unsave;
- (void)save;
- (_Bool)canDelete;
- (_Bool)canUnsave;
- (_Bool)canSave;
- (void)markAsReleasedByFriendWithTimestamp:(id)arg1;
- (void)markAsReleasedByUserWithTimestamp:(id)arg1 shouldLog:(_Bool)arg2;
- (void)markAsReleasedByUser:(_Bool)arg1;
- (void)markAsReleasedByUser;
- (_Bool)shouldBeAddedAgainGivenClearedDictionary:(id)arg1;
- (id)clearedDictionary;
- (_Bool)shouldAutoRetry;
- (void)resetSendAttempts;
- (void)incrementSendAttempts;
- (void)configureForRetryingToSend;
- (_Bool)timeToSendHasExpired;
- (void)sentWithSuccess:(_Bool)arg1 response:(id)arg2;
- (void)sentWithSuccess:(_Bool)arg1;
- (void)updateWithHighestUserReleaseSequence:(unsigned long long)arg1;
- (void)updateWithHighestFriendReleaseSequence:(unsigned long long)arg1;
- (void)updateWithMessagePreservationStatus:(_Bool)arg1;
- (void)updateWithMessageStateResponse:(id)arg1;
- (void)updateWithMessage:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)compare:(id)arg1;
- (id)newId;
- (void)configureReleaseStates;
- (void)configurePreserveStateWithDictionary:(id)arg1;
- (void)configureSaveStateWithDictionary:(id)arg1;
- (id)initWithLastChatAction:(id)arg1 write:(_Bool)arg2 username:(id)arg3 recipientUsername:(id)arg4;
- (id)initWithSender:(id)arg1 recipient:(id)arg2;
- (id)initWithUsername:(id)arg1 dictionary:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

