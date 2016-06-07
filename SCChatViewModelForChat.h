//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatUpdateHelper.h"
#import "SCChatViewModelReducerListener.h"

@class NSArray, NSIndexPath, NSString, SCChat, SCChatSnapshotViewModel, SCChatViewModelListenerAnnouncer;

@interface SCChatViewModelForChat : NSObject <SCChatUpdateHelper, SCChatViewModelReducerListener>
{
    SCChat *_chat;
    SCChatViewModelListenerAnnouncer *_viewModelAnnouncer;
    SCChatSnapshotViewModel *_chatSnapshotViewModel;
    id <SCMessage> _lastNonPlaceholderMessage;
    NSIndexPath *_firstBelowTheFoldIndexPath;
    NSArray *_messageViewModels;
}

@property(retain, nonatomic) NSArray *messageViewModels; // @synthesize messageViewModels=_messageViewModels;
@property(readonly, nonatomic) SCChat *chat; // @synthesize chat=_chat;
@property(readonly, nonatomic) NSIndexPath *firstBelowTheFoldIndexPath; // @synthesize firstBelowTheFoldIndexPath=_firstBelowTheFoldIndexPath;
- (void).cxx_destruct;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)recomputeFirstBelowTheFoldIndexPath;
- (id)snapShotViewModel;
- (id)indexPathOfMessage:(id)arg1;
- (id)lastIndexPath;
- (_Bool)isLastIndexPath:(id)arg1;
- (id)lastChatId;
- (id)viewModelAtIndexPath:(id)arg1;
- (void)loadMoreMessagesByRetrying:(_Bool)arg1;
- (_Bool)canLoadMoreMessagesByRetrying:(_Bool)arg1;
- (void)fetchUpdates;
- (void)didViewModelsChange;
- (void)stackedViewModel:(id)arg1 didChildrenChangeAt:(id)arg2;
- (void)didMessagesDeleteAtIndexPaths:(id)arg1;
- (void)didMessagesAddAtIndexPaths:(id)arg1;
- (void)didMessagesChangeAtIndexPaths:(id)arg1;
- (void)willViewModelsChange;
- (void)presenceUpdated;
- (void)dealloc;
- (id)initWithChat:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

