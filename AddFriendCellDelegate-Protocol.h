//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AddFriendCell, Friend;

@protocol AddFriendCellDelegate <NSObject>
- (void)didSelectAddFriendCell:(AddFriendCell *)arg1;

@optional
- (void)infoButtonPressed:(AddFriendCell *)arg1;
- (void)didPressSettingButton:(AddFriendCell *)arg1 forFriend:(Friend *)arg2;
@end

