//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface SCLoadingFeedTableViewCell : UITableViewCell
{
    _Bool _boxHidden;
    UILabel *_label;
    unsigned long long _labelConstraintsType;
    UIImageView *_rotatingSnapBox;
}

+ (id)textColor;
@property(nonatomic) _Bool boxHidden; // @synthesize boxHidden=_boxHidden;
@property(retain, nonatomic) UIImageView *rotatingSnapBox; // @synthesize rotatingSnapBox=_rotatingSnapBox;
@property(nonatomic) unsigned long long labelConstraintsType; // @synthesize labelConstraintsType=_labelConstraintsType;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)setRotatingSnapBoxHidden:(_Bool)arg1;
- (void)updateLabelConstraintsWithType:(unsigned long long)arg1;
- (void)updateWithChats:(id)arg1;
- (void)initRotatingSnapBox;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

