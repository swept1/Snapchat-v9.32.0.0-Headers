//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUMessagingConversationShareBatchedMediaResponse.h"

@class NSArray, NSDictionary, NSString;

@interface SOJUMessagingConversationShareBatchedMediaResponse : NSObject <SOJUMessagingConversationShareBatchedMediaResponse>
{
    NSArray *_conversations;
    NSDictionary *_results;
}

@property(readonly, copy, nonatomic) NSDictionary *results; // @synthesize results=_results;
@property(readonly, copy, nonatomic) NSArray *conversations; // @synthesize conversations=_conversations;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConversations:(id)arg1 results:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

