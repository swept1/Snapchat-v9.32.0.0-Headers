//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCTilesCollectionViewController, UITableView;

@interface SCFloatingTileManager : NSObject
{
    UITableView *_tableView;
    SCTilesCollectionViewController *_tilesController;
    _Bool _showsTilesSection;
    unsigned long long _tilesSection;
}

@property(nonatomic) _Bool showsTilesSection; // @synthesize showsTilesSection=_showsTilesSection;
@property(nonatomic) unsigned long long tilesSection; // @synthesize tilesSection=_tilesSection;
- (void).cxx_destruct;
- (void)moveTilesSectionWithOffset:(double)arg1;
- (void)reload;
- (id)initWithTableView:(id)arg1 tilesController:(id)arg2;

@end
