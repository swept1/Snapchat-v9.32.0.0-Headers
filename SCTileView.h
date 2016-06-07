//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCCheckMarkView, SCTileCoverView, SCTileViewModel, UIImageView, UILabel;

@interface SCTileView : UIView
{
    _Bool _isDynamic;
    _Bool _alwaysHideReadStateCheckMark;
    SCTileViewModel *_tileViewModel;
    SCTileCoverView *_coverViewAbove;
    SCCheckMarkView *_readStateCheckMark;
    SCTileCoverView *_coverViewBelow;
    UIImageView *_logoImageView;
    UILabel *_logoLabel;
    UILabel *_sponsoredLabel;
}

@property(retain, nonatomic) UILabel *sponsoredLabel; // @synthesize sponsoredLabel=_sponsoredLabel;
@property(retain, nonatomic) UILabel *logoLabel; // @synthesize logoLabel=_logoLabel;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) SCTileCoverView *coverViewBelow; // @synthesize coverViewBelow=_coverViewBelow;
@property(readonly, nonatomic) SCCheckMarkView *readStateCheckMark; // @synthesize readStateCheckMark=_readStateCheckMark;
@property(nonatomic) _Bool alwaysHideReadStateCheckMark; // @synthesize alwaysHideReadStateCheckMark=_alwaysHideReadStateCheckMark;
@property(readonly, nonatomic) SCTileCoverView *coverViewAbove; // @synthesize coverViewAbove=_coverViewAbove;
@property(retain, nonatomic) SCTileViewModel *tileViewModel; // @synthesize tileViewModel=_tileViewModel;
- (void).cxx_destruct;
- (void)clearContent;
- (void)setHeadlineLabelAlpha:(double)arg1;
- (void)setShrunk:(_Bool)arg1;
- (void)setColorOverlayColor:(id)arg1;
- (void)swapCovers;
- (void)setCoverViewsHidden:(_Bool)arg1;
- (long long)tileSizeType;
- (void)performCheckMarkAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)dismissalAnimation;
- (CDUnknownBlockType)presentationAnimation;
- (void)_layoutLogoWithReadState:(_Bool)arg1 tileViewModel:(id)arg2;
- (void)_layoutLogoWithTileViewModel:(id)arg1;
- (double)_verticalSpaceForSponsoredLabelInReadState;
- (void)updateSponsoredLabel:(id)arg1 yOffset:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1 hasCornerRadius:(_Bool)arg2 isDynamic:(_Bool)arg3 coordinator:(id)arg4;

@end
