//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUChatMessage.h"

@class NSDictionary, NSNumber, NSString, SOJUHeader, SOJUMessageBody;

@interface SOJUChatMessage : NSObject <SOJUChatMessage>
{
    SOJUHeader *_header;
    NSNumber *_retried;
    NSString *_type;
    NSString *_idValue;
    SOJUMessageBody *_body;
    NSString *_chatMessageId;
    NSDictionary *_savedState;
    NSDictionary *_preservations;
    NSNumber *_seqNum;
    NSNumber *_timestamp;
}

@property(readonly, copy, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSNumber *seqNum; // @synthesize seqNum=_seqNum;
@property(readonly, copy, nonatomic) NSDictionary *preservations; // @synthesize preservations=_preservations;
@property(readonly, copy, nonatomic) NSDictionary *savedState; // @synthesize savedState=_savedState;
@property(readonly, copy, nonatomic) NSString *chatMessageId; // @synthesize chatMessageId=_chatMessageId;
@property(readonly, copy, nonatomic) SOJUMessageBody *body; // @synthesize body=_body;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSNumber *retried; // @synthesize retried=_retried;
@property(readonly, copy, nonatomic) SOJUHeader *header; // @synthesize header=_header;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHeader:(id)arg1 retried:(id)arg2 type:(id)arg3 idValue:(id)arg4 body:(id)arg5 chatMessageId:(id)arg6 savedState:(id)arg7 preservations:(id)arg8 seqNum:(id)arg9 timestamp:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
