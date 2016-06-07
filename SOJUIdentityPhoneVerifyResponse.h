//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUIdentityPhoneVerifyResponse.h"

@class NSNumber, NSString;

@interface SOJUIdentityPhoneVerifyResponse : NSObject <SOJUIdentityPhoneVerifyResponse>
{
    NSString *_message;
    NSNumber *_logged;
    NSNumber *_throttled;
    NSString *_action;
    NSString *_messageFormat;
    NSString *_confirm;
}

@property(readonly, copy, nonatomic) NSString *confirm; // @synthesize confirm=_confirm;
@property(readonly, copy, nonatomic) NSString *messageFormat; // @synthesize messageFormat=_messageFormat;
@property(readonly, copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSNumber *throttled; // @synthesize throttled=_throttled;
@property(readonly, copy, nonatomic) NSNumber *logged; // @synthesize logged=_logged;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMessage:(id)arg1 logged:(id)arg2 throttled:(id)arg3 action:(id)arg4 messageFormat:(id)arg5 confirm:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

