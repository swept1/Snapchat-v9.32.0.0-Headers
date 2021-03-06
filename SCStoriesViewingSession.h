//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaSession.h"

@class FriendStories, NSString, SCOperaEventListenerAnnouncer, SCStoryLogger;

@interface SCStoriesViewingSession : NSObject <SCOperaSession>
{
    SCOperaEventListenerAnnouncer *_eventAnnouncer;
    SCStoryLogger *_storyLogger;
    FriendStories *_currentFriendStories;
    _Bool _currentFriendStoriesHaveStartedPlaying;
    unsigned long long _autoAdvanceIndex;
    unsigned long long _currentStoryIndex;
    long long _viewingType;
}

@property(nonatomic) long long viewingType; // @synthesize viewingType=_viewingType;
- (void).cxx_destruct;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (_Bool)shouldHandleEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)initWithEventAnnouncer:(id)arg1 storyLogger:(id)arg2;
- (id)initWithEventAnnouncer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

