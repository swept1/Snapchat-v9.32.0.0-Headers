//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"

@class NSString, SCChats, SCLoadingMoreItemsDelegate;

@interface SCChatsTableViewDataSource : NSObject <UITableViewDataSource>
{
    id <SCChatsTableViewDataSourceDelegate> _delegate;
    SCLoadingMoreItemsDelegate *_loadingMoreItemsDelegate;
    SCChats *_chats;
    NSString *_cellIdentifier;
    NSString *_loadingCellIdentifier;
}

@property(retain, nonatomic) NSString *loadingCellIdentifier; // @synthesize loadingCellIdentifier=_loadingCellIdentifier;
@property(retain, nonatomic) NSString *cellIdentifier; // @synthesize cellIdentifier=_cellIdentifier;
@property(retain, nonatomic) SCChats *chats; // @synthesize chats=_chats;
@property(retain, nonatomic) SCLoadingMoreItemsDelegate *loadingMoreItemsDelegate; // @synthesize loadingMoreItemsDelegate=_loadingMoreItemsDelegate;
@property(nonatomic) __weak id <SCChatsTableViewDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)chatForIndexPath:(id)arg1;
- (void)chatsDidChange;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (id)initWithChats:(id)arg1 cellIdentifier:(id)arg2 loadingCellIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

