//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "SCStoriesSelectableCell.h"

@class NSString;

@interface SCStoriesSelectableCell : UITableViewCell <SCStoriesSelectableCell>
{
}

- (void)_deSelectionAnimationWithTimeInterval:(double)arg1 delay:(double)arg2;
- (void)setPullToDismissStartedState;
- (void)showPullToDismissDeselectionAnimation;
- (void)showDeselectionAnimation;
- (void)setPressedState:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

