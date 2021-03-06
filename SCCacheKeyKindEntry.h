//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate, NSString;

@interface SCCacheKeyKindEntry : NSObject <NSCoding>
{
    NSString *_key;
    NSString *_kind;
    NSDate *_expirationDate;
}

@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)description;
- (id)initWithKey:(id)arg1 kind:(id)arg2 expirationDate:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

