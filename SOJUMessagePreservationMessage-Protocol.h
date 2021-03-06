//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"
#import "SOJUConversationMessage.h"

@class NSNumber, NSString, SOJUHeader;

@protocol SOJUMessagePreservationMessage <NSObject, NSCoding, NSCopying, SOJUConversationMessage>
@property(readonly, copy, nonatomic) NSNumber *preserved;
@property(readonly, copy, nonatomic) NSString *chatMessageId;
@property(readonly, copy, nonatomic) NSString *idValue;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, copy, nonatomic) NSNumber *retried;
@property(readonly, copy, nonatomic) SOJUHeader *header;
@end

