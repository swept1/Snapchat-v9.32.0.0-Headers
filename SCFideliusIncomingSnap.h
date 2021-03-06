//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate, NSString;

@interface SCFideliusIncomingSnap : NSObject <NSCoding>
{
    NSString *_inBeta;
    NSString *_outBeta;
    NSString *_fromUserId;
    NSDate *_timestamp;
    long long _counter;
}

@property(nonatomic) long long counter; // @synthesize counter=_counter;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *fromUserId; // @synthesize fromUserId=_fromUserId;
@property(retain, nonatomic) NSString *outBeta; // @synthesize outBeta=_outBeta;
@property(retain, nonatomic) NSString *inBeta; // @synthesize inBeta=_inBeta;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

