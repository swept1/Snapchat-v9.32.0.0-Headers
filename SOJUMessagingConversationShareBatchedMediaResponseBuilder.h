//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface SOJUMessagingConversationShareBatchedMediaResponseBuilder : NSObject
{
    NSArray *_conversations;
    NSDictionary *_results;
}

+ (id)withJUMessagingConversationShareBatchedMediaResponse:(id)arg1;
- (void).cxx_destruct;
- (id)setResults:(id)arg1;
- (id)setConversations:(id)arg1;
- (id)build;

@end

