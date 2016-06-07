//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface AddedFriend : NSObject
{
    _Bool _newLink;
    _Bool _ignored;
    _Bool _hidden;
    _Bool _removed;
    _Bool _blocking;
    _Bool _reporting;
    NSString *_display;
    NSString *_snapcodeUrl;
    NSString *_name;
    NSString *_userId;
    unsigned long long _pendingSnapCount;
    NSNumber *_timestamp;
    long long _type;
    NSString *_addSource;
    NSString *_addSourceType;
}

+ (id)addedFriendWithFriend:(id)arg1;
@property(retain, nonatomic, getter=getAddSourceType) NSString *addSourceType; // @synthesize addSourceType=_addSourceType;
@property(retain, nonatomic, getter=getAddSource) NSString *addSource; // @synthesize addSource=_addSource;
@property(nonatomic, getter=isReporting) _Bool reporting; // @synthesize reporting=_reporting;
@property(nonatomic, getter=isBlocking) _Bool blocking; // @synthesize blocking=_blocking;
@property(nonatomic, getter=isRemoved) _Bool removed; // @synthesize removed=_removed;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) _Bool ignored; // @synthesize ignored=_ignored;
@property(nonatomic) _Bool newLink; // @synthesize newLink=_newLink;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned long long pendingSnapCount; // @synthesize pendingSnapCount=_pendingSnapCount;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *snapcodeUrl; // @synthesize snapcodeUrl=_snapcodeUrl;
@property(retain, nonatomic) NSString *display; // @synthesize display=_display;
- (void).cxx_destruct;
- (id)nameToDisplay;
- (_Bool)hasDisplay;
- (void)updateWithAddedFriend:(id)arg1;
- (_Bool)isDeletedOrBlocked;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithSoju:(id)arg1;

@end
