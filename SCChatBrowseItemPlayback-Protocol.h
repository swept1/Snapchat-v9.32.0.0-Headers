//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SCChatBrowseItemPlayback <NSObject>
@property(readonly, nonatomic) _Bool shouldLoop;
@property(readonly, nonatomic) __weak id <SCChatBrowseItemPlaybackTimeObserver> timeObserver;
- (void)setVolume:(float)arg1;
- (void)setShouldLoop:(_Bool)arg1;
- (void)setTimeObserver:(id <SCChatBrowseItemPlaybackTimeObserver>)arg1;
@end

