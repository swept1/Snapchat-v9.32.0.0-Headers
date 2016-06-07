//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface SCSettingsTableViewCell : UITableViewCell
{
    UILabel *_currentInfo;
    UIImageView *_redArrow;
    UIImageView *_bang;
}

@property(retain, nonatomic) UIImageView *bang; // @synthesize bang=_bang;
@property(retain, nonatomic) UIImageView *redArrow; // @synthesize redArrow=_redArrow;
@property(retain, nonatomic) UILabel *currentInfo; // @synthesize currentInfo=_currentInfo;
- (void).cxx_destruct;
- (void)setCellState:(_Bool)arg1 hasError:(_Bool)arg2;
- (void)resetCellState:(_Bool)arg1 hasError:(_Bool)arg2;
- (void)resetCellState:(_Bool)arg1;
- (void)setDetailText:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end
