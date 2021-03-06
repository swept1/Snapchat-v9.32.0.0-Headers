//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, NSNumber, NSString, SOJUCashTransaction, SOJUChatConversationMessages, SOJUConversationInteractionEvent, SOJUConversationState, SOJUGenericSnap, SOJULastChatActions;

@protocol SOJUChatConversation <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUConversationState *conversationState;
@property(readonly, copy, nonatomic) NSArray *favoriteStickers;
@property(readonly, copy, nonatomic) NSString *iterToken;
@property(readonly, copy, nonatomic) SOJUChatConversationMessages *conversationMessages;
@property(readonly, copy, nonatomic) NSArray *pendingReceivedSnaps;
@property(readonly, copy, nonatomic) NSArray *pendingChatsFor;
@property(readonly, copy, nonatomic) NSNumber *lastInteractionTs;
@property(readonly, copy, nonatomic) SOJUCashTransaction *lastCashTransaction;
@property(readonly, copy, nonatomic) SOJUConversationInteractionEvent *conversationInteractionEvent;
@property(readonly, copy, nonatomic) SOJULastChatActions *lastChatActions;
@property(readonly, copy, nonatomic) SOJUGenericSnap *lastSnap;
@property(readonly, copy, nonatomic) NSArray *participants;
@property(readonly, copy, nonatomic) NSString *idValue;
@end

