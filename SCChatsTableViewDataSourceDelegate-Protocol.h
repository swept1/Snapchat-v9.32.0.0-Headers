//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCChat, SCChats, UITableViewCell;

@protocol SCChatsTableViewDataSourceDelegate <NSObject>
- (void)chatsDidChange;
- (void)updateChatsCell:(UITableViewCell *)arg1 withChat:(SCChat *)arg2;
- (UITableViewCell *)newChatsCellWithReuseIdentifier:(NSString *)arg1;

@optional
- (void)updateLoadingCell:(UITableViewCell *)arg1 withChats:(SCChats *)arg2;
- (UITableViewCell *)newLoadingCellWithReuseIdentifier:(NSString *)arg1;
@end

