//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUIdentityFindFriendsContact.h"

@class NSArray, NSNumber, NSString;

@interface SOJUIdentityFindFriendsContact : NSObject <SOJUIdentityFindFriendsContact>
{
    NSString *_name;
    NSString *_userId;
    NSNumber *_type;
    NSString *_display;
    NSString *_birthday;
    NSNumber *_ts;
    NSNumber *_reverseTs;
    NSString *_direction;
    NSNumber *_canSeeCustomStories;
    NSNumber *_pendingSnapsCount;
    NSNumber *_expiration;
    NSNumber *_isSharedStory;
    NSNumber *_hasCustomDescription;
    NSString *_sharedStoryId;
    NSNumber *_localStory;
    NSNumber *_ignoredLink;
    NSNumber *_hiddenLink;
    NSString *_addSource;
    NSString *_addSourceType;
    NSString *_friendmojiString;
    NSNumber *_needsLove;
    NSNumber *_autoAdded;
    NSNumber *_sojuNewLink;
    NSNumber *_dontDecayThumbnail;
    NSString *_venue;
    NSArray *_friendmojiSymbols;
    NSArray *_friendmojis;
    NSNumber *_snapStreakCount;
    NSNumber *_snapStreakExpiration;
    NSString *_bitmojiAvatarId;
    NSNumber *_isNewContact;
    NSNumber *_isRecommended;
    NSNumber *_recommendationScore;
}

@property(readonly, copy, nonatomic) NSNumber *recommendationScore; // @synthesize recommendationScore=_recommendationScore;
@property(readonly, copy, nonatomic) NSNumber *isRecommended; // @synthesize isRecommended=_isRecommended;
@property(readonly, copy, nonatomic) NSNumber *isNewContact; // @synthesize isNewContact=_isNewContact;
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(readonly, copy, nonatomic) NSNumber *snapStreakExpiration; // @synthesize snapStreakExpiration=_snapStreakExpiration;
@property(readonly, copy, nonatomic) NSNumber *snapStreakCount; // @synthesize snapStreakCount=_snapStreakCount;
@property(readonly, copy, nonatomic) NSArray *friendmojis; // @synthesize friendmojis=_friendmojis;
@property(readonly, copy, nonatomic) NSArray *friendmojiSymbols; // @synthesize friendmojiSymbols=_friendmojiSymbols;
@property(readonly, copy, nonatomic) NSString *venue; // @synthesize venue=_venue;
@property(readonly, copy, nonatomic) NSNumber *dontDecayThumbnail; // @synthesize dontDecayThumbnail=_dontDecayThumbnail;
@property(readonly, copy, nonatomic) NSNumber *sojuNewLink; // @synthesize sojuNewLink=_sojuNewLink;
@property(readonly, copy, nonatomic) NSNumber *autoAdded; // @synthesize autoAdded=_autoAdded;
@property(readonly, copy, nonatomic) NSNumber *needsLove; // @synthesize needsLove=_needsLove;
@property(readonly, copy, nonatomic) NSString *friendmojiString; // @synthesize friendmojiString=_friendmojiString;
@property(readonly, copy, nonatomic) NSString *addSourceType; // @synthesize addSourceType=_addSourceType;
@property(readonly, copy, nonatomic) NSString *addSource; // @synthesize addSource=_addSource;
@property(readonly, copy, nonatomic) NSNumber *hiddenLink; // @synthesize hiddenLink=_hiddenLink;
@property(readonly, copy, nonatomic) NSNumber *ignoredLink; // @synthesize ignoredLink=_ignoredLink;
@property(readonly, copy, nonatomic) NSNumber *localStory; // @synthesize localStory=_localStory;
@property(readonly, copy, nonatomic) NSString *sharedStoryId; // @synthesize sharedStoryId=_sharedStoryId;
@property(readonly, copy, nonatomic) NSNumber *hasCustomDescription; // @synthesize hasCustomDescription=_hasCustomDescription;
@property(readonly, copy, nonatomic) NSNumber *isSharedStory; // @synthesize isSharedStory=_isSharedStory;
@property(readonly, copy, nonatomic) NSNumber *expiration; // @synthesize expiration=_expiration;
@property(readonly, copy, nonatomic) NSNumber *pendingSnapsCount; // @synthesize pendingSnapsCount=_pendingSnapsCount;
@property(readonly, copy, nonatomic) NSNumber *canSeeCustomStories; // @synthesize canSeeCustomStories=_canSeeCustomStories;
@property(readonly, copy, nonatomic) NSString *direction; // @synthesize direction=_direction;
@property(readonly, copy, nonatomic) NSNumber *reverseTs; // @synthesize reverseTs=_reverseTs;
@property(readonly, copy, nonatomic) NSNumber *ts; // @synthesize ts=_ts;
@property(readonly, copy, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(readonly, copy, nonatomic) NSString *display; // @synthesize display=_display;
@property(readonly, copy, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 userId:(id)arg2 type:(id)arg3 display:(id)arg4 birthday:(id)arg5 ts:(id)arg6 reverseTs:(id)arg7 direction:(id)arg8 canSeeCustomStories:(id)arg9 pendingSnapsCount:(id)arg10 expiration:(id)arg11 isSharedStory:(id)arg12 hasCustomDescription:(id)arg13 sharedStoryId:(id)arg14 localStory:(id)arg15 ignoredLink:(id)arg16 hiddenLink:(id)arg17 addSource:(id)arg18 addSourceType:(id)arg19 friendmojiString:(id)arg20 needsLove:(id)arg21 autoAdded:(id)arg22 sojuNewLink:(id)arg23 dontDecayThumbnail:(id)arg24 venue:(id)arg25 friendmojiSymbols:(id)arg26 friendmojis:(id)arg27 snapStreakCount:(id)arg28 snapStreakExpiration:(id)arg29 bitmojiAvatarId:(id)arg30 isNewContact:(id)arg31 isRecommended:(id)arg32 recommendationScore:(id)arg33;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

