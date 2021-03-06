//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSession.h"

@class NSString;

@interface SCSession : NSObject <SCSession>
{
    NSString *_type;
    NSString *_name;
    double _startTime;
    double _endTime;
    NSString *_referrer;
    long long _exitEvent;
    NSString *_previousSessionName;
}

@property(readonly, copy, nonatomic) NSString *previousSessionName; // @synthesize previousSessionName=_previousSessionName;
@property(readonly, nonatomic) long long exitEvent; // @synthesize exitEvent=_exitEvent;
@property(readonly, copy, nonatomic) NSString *referrer; // @synthesize referrer=_referrer;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(id)arg1 name:(id)arg2 startTime:(double)arg3 endTime:(double)arg4 referrer:(id)arg5 exitEvent:(long long)arg6 previousSessionName:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

