//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSNumber, NSString, SOJUFriend;

@protocol SOJUSnaptagResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *logged;
@property(readonly, copy, nonatomic) NSString *friendActionStatus;
@property(readonly, copy, nonatomic) SOJUFriend *object;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, copy, nonatomic) NSString *fallbackMessage;
@property(readonly, copy, nonatomic) NSString *message;
@property(readonly, copy, nonatomic) NSString *action;
@end

