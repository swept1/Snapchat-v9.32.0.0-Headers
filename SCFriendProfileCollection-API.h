//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFriendProfileCollection.h"

@interface SCFriendProfileCollection (API)
+ (id)generateKeyForFriend:(id)arg1 size:(long long)arg2;
+ (void)fetchSnapchatter:(id)arg1 successQueue:(id)arg2 failureQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)fetchProfilePictureFromServerForFriend:(id)arg1 withSize:(long long)arg2 contexts:(id)arg3 successQueue:(id)arg4 failureQueue:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
@end

