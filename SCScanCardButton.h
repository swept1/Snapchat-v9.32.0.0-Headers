//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSMutableDictionary, NSString;

@interface SCScanCardButton : UIButton
{
    NSMutableDictionary *_backgroundColors;
    NSMutableDictionary *_borderColors;
    unsigned long long _style;
    NSString *_title;
    double _titleSize;
}

+ (id)keyForControlState:(unsigned long long)arg1;
@property(nonatomic) double titleSize; // @synthesize titleSize=_titleSize;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)_highlightFillColorForCurrentStyle;
- (id)_fillColorForCurrentStyle;
- (id)_highlightBorderColorForCurrentStyle;
- (id)_borderColorForCurrentStyle;
- (id)_highlightTextColorForCurrentStyle;
- (id)_textColorForCurrentStyle;
- (unsigned long long)_kerningForCurrentStyle;
- (id)_fontForCurrentStyle;
- (id)_attributedHighlightTitleForCurrentStyle;
- (id)_attributedTitleForCurrentStyle;
- (void)_setBorderColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setupButtonForCurrentStyle;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateButtonWithStyle:(unsigned long long)arg1 title:(id)arg2;
- (id)initWithStyle:(unsigned long long)arg1 title:(id)arg2;

@end

