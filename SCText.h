//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBaseMessage.h"

#import "NSCoding.h"
#import "SCMessageText.h"

@class NSArray, NSString, SCSummaries;

@interface SCText : SCBaseMessage <NSCoding, SCMessageText>
{
    _Bool _isDisplayed;
    NSArray *_attributes;
    SCSummaries *_summaries;
}

@property(nonatomic) _Bool isDisplayed; // @synthesize isDisplayed=_isDisplayed;
@property(retain, nonatomic) SCSummaries *summaries; // @synthesize summaries=_summaries;
@property(retain, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
- (void)markAsDisplayed;
- (id)mediaCardAttributes;
- (long long)scaMediaType;
- (long long)scaMessageType;
- (id)logEventName;
- (_Bool)shouldNotifyUserOfFailure;
- (unsigned long long)notificationType;
- (id)sendJSON;
- (void)updateWithMessage:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithSender:(id)arg1 recipient:(id)arg2 attributedText:(id)arg3;
- (id)initWithUsername:(id)arg1 dictionary:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

