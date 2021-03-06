//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensDataProvider.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface SCCameraLensDataProvider : NSObject <SCLensDataProvider>
{
    _Bool _updating;
    NSArray *_downloadableLenses;
    NSMutableDictionary *_lenses;
    NSMutableArray *_lensIdsToFetchExplicitly;
    _Bool _showBirthdayReplyLens;
    id <SCLensDataProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <SCLensDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showBirthdayReplyLens; // @synthesize showBirthdayReplyLens=_showBirthdayReplyLens;
- (void).cxx_destruct;
- (void)_stopFetchingDownloadableLensData;
- (void)updateContent;
- (id)sortedScheduledLenses:(id)arg1;
- (void)updateLenses;
- (void)_scheduledLensesDataStoreDidUpdate:(id)arg1;
- (void)_unlockedLensesDataStoreDidUpdate:(id)arg1;
- (void)_locationServicesDataStoreDidUpdate:(id)arg1;
- (void)stopUpdatingLensData;
- (void)startUpdatingLensData;
- (id)downloadableDataForKey:(id)arg1;
- (void)setDownloadableData:(id)arg1 forKey:(id)arg2;
- (long long)fetchPolicyForLens:(id)arg1;
- (void)fetchLens:(id)arg1;
- (void)fetchLensesIfNeeded:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

