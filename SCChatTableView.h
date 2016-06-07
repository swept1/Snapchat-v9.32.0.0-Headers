//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCMultiScrollTableView.h"

#import "SCChatViewLifeCycleListener.h"
#import "SCChatViewModelListener.h"

@class NSString, SCChatViewModelForChat;

@interface SCChatTableView : SCMultiScrollTableView <SCChatViewLifeCycleListener, SCChatViewModelListener>
{
    SCChatViewModelForChat *_chatViewModel;
    _Bool _isFullyVisible;
    double _prevContentHeight;
    NSString *_lastChatId;
    double _previousHeight;
    double _presenceBubbleMargin;
}

- (void).cxx_destruct;
- (void)animateScrollToBottom;
- (double)offsetForFirstViewableChat;
- (void)updateContentOffset;
- (void)updateContentInset;
- (void)updateContentSizeWithIndexPath:(id)arg1;
- (_Bool)wasScrollAtBottom;
- (_Bool)shouldAnimatePresenceBar;
- (void)updateTableContentInsetForPresenceWithHeight:(double)arg1;
- (void)layoutSubviews;
- (void)didViewModelsChange;
- (void)stackedViewModel:(id)arg1 didChildrenChangeAt:(id)arg2;
- (void)didMessagesDeleteAtIndexPaths:(id)arg1;
- (void)didMessagesAddAtIndexPaths:(id)arg1;
- (void)didMessagesChangeAtIndexPaths:(id)arg1;
- (void)willViewModelsChange;
- (void)viewDidFullyDisappear;
- (void)viewDidFullyAppear;
- (void)setChatViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

