//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@class NSIndexPath;

@interface SCTilesFeaturedSectionLayout : UICollectionViewFlowLayout
{
    double _itemWidth;
    double _itemHeight;
    NSIndexPath *_indexPathBeforeUpdate;
    NSIndexPath *_indexPathAfterUpdate;
}

- (void).cxx_destruct;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (void)finalizeCollectionViewUpdates;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)init;

@end

