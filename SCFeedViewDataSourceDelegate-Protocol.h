//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexPath, NSString;

@protocol SCFeedViewDataSourceDelegate <NSObject>
- (void)setSnapsActionTextNotDisplayedInFeed;
- (void)setTableViewCellUpdateDelegate:(id <SCTableViewCellUpdateDelegate>)arg1;
- (NSString *)didReloadDataNotificationName;
- (void)reloadData;
- (void)resetData;
- (void)loadMoreItemsInNextPage;
- (_Bool)moreItemsToLoad;
- (id <SCFeedItemDelegate>)feedItemForIndexPath:(NSIndexPath *)arg1;
- (unsigned long long)feedItemsCount;

@optional
- (NSString *)didFetchMoreItems;
- (NSArray *)completeFeedItemList;
@end
