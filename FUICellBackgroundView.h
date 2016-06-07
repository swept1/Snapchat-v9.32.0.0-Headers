//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface FUICellBackgroundView : UIView
{
    UIColor *_backgroundColor;
    double _cornerRadius;
    UIColor *_separatorColor;
    double _separatorHeight;
    unsigned long long _roundedCorners;
}

+ (void)initialize;
@property(nonatomic) unsigned long long roundedCorners; // @synthesize roundedCorners=_roundedCorners;
@property(nonatomic) double separatorHeight; // @synthesize separatorHeight=_separatorHeight;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)isOpaque;
- (id)initWithFrame:(struct CGRect)arg1;

@end

