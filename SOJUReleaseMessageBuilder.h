//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNumber, NSString, SOJUHeader;

@interface SOJUReleaseMessageBuilder : NSObject
{
    SOJUHeader *_header;
    NSNumber *_retried;
    NSString *_type;
    NSString *_idValue;
    NSString *_releaseType;
    NSDictionary *_knownChatSequenceNumbers;
    NSDictionary *_knownReceivedSnapsTs;
    NSNumber *_timestamp;
}

+ (id)withJUReleaseMessage:(id)arg1;
- (void).cxx_destruct;
- (id)setTimestamp:(id)arg1;
- (id)setKnownReceivedSnapsTs:(id)arg1;
- (id)setKnownChatSequenceNumbers:(id)arg1;
- (id)setReleaseType:(id)arg1;
- (id)setIdValue:(id)arg1;
- (id)setType:(id)arg1;
- (id)setRetried:(id)arg1;
- (id)setHeader:(id)arg1;
- (id)build;

@end

