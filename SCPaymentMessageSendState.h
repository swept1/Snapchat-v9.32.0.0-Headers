//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCPaymentMessageSendState : NSObject
{
    long long _stateTag;
    id <SCSendStateDelegate> _delegate;
    NSString *_signature;
    NSString *_passcode;
    long long _currentAction;
}

+ (_Bool)paymentMessageIsSuccessfullySent:(id)arg1;
@property(nonatomic) long long currentAction; // @synthesize currentAction=_currentAction;
@property(readonly, copy) NSString *passcode; // @synthesize passcode=_passcode;
@property(copy) NSString *signature; // @synthesize signature=_signature;
@property(nonatomic) __weak id <SCSendStateDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) long long stateTag; // @synthesize stateTag=_stateTag;
- (void).cxx_destruct;
- (_Bool)isSent;
- (_Bool)failedToSend;
- (_Bool)isSending;
- (void)setStateTag:(long long)arg1;
- (void)actionFailed:(long long)arg1 withPayment:(id)arg2;
- (void)actionSucceeded:(long long)arg1 withPayment:(id)arg2;
- (void)beginAction:(long long)arg1;
- (long long)nextAction;
- (long long)getAndBeginNextAction;
- (void)updateWithPaymentMessage:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 paymentMessage:(id)arg2;

@end

