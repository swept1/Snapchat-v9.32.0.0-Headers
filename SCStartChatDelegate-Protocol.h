//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCChat;

@protocol SCStartChatDelegate <NSObject>
- (void)navigateToChatViewAnimated:(_Bool)arg1;
- (void)navigateToChatView;
- (void)setUnstartedChat:(SCChat *)arg1;
- (void)setChatUsername:(NSString *)arg1;
@end

