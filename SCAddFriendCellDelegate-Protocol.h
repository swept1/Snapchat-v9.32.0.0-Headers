//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Friend, UITableViewCell;

@protocol SCAddFriendCellDelegate <NSObject>
- (void)didSelectAddFriendCell:(UITableViewCell *)arg1;

@optional
- (void)didPressSettingsButton:(UITableViewCell *)arg1 forFriend:(Friend *)arg2;
- (void)infoButtonPressed:(UITableViewCell *)arg1 forFriend:(Friend *)arg2;
@end

