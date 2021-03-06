//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSCondition, NSString;

@interface SCArchivedChats : NSObject <NSCoding>
{
    _Bool _loaded;
    _Bool _hasUnviewedSnaps;
    _Bool _hasUnviewedChats;
    _Bool _hasUnviewedCash;
    _Bool _legacyPaginatedChatsFormat;
    NSString *_path;
    NSCondition *_loadedCondition;
    long long _unreadCount;
}

+ (id)emptyArchive;
@property(readonly, nonatomic) _Bool legacyPaginatedChatsFormat; // @synthesize legacyPaginatedChatsFormat=_legacyPaginatedChatsFormat;
@property(readonly, nonatomic) _Bool hasUnviewedCash; // @synthesize hasUnviewedCash=_hasUnviewedCash;
@property(readonly, nonatomic) _Bool hasUnviewedChats; // @synthesize hasUnviewedChats=_hasUnviewedChats;
@property(readonly, nonatomic) _Bool hasUnviewedSnaps; // @synthesize hasUnviewedSnaps=_hasUnviewedSnaps;
@property(readonly, nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(retain, nonatomic) NSCondition *loadedCondition; // @synthesize loadedCondition=_loadedCondition;
@property(nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)removeArchivedFile;
- (void)loadChatsAsync:(CDUnknownBlockType)arg1;
- (void)blockCurrentThreadUntilLoaded;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initForUpgradingPaginatedChatsAtPath:(id)arg1 withUnreadCount:(long long)arg2;
- (id)initWithPath:(id)arg1 chats:(id)arg2;
- (id)init;

@end

