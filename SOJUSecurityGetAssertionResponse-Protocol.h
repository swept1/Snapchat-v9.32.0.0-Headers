//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSString;

@protocol SOJUSecurityGetAssertionResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *nonce;
@property(readonly, copy, nonatomic) NSString *tag2;
@property(readonly, copy, nonatomic) NSString *tag1;
@property(readonly, copy, nonatomic) NSString *assertion;
@end

