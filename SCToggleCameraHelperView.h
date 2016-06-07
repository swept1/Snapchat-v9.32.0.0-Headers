//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UIImageView;

@interface SCToggleCameraHelperView : UIView
{
    _Bool _hidden;
    NSTimer *_fadeOutTimer;
    UIView *_topQuickViewHelp;
    UIImageView *_topQuickViewHelpImageView;
    UIView *_bottomQuickViewHelp;
    UIImageView *_bottomQuickViewHelpImageView;
}

@property(retain, nonatomic) UIImageView *bottomQuickViewHelpImageView; // @synthesize bottomQuickViewHelpImageView=_bottomQuickViewHelpImageView;
@property(retain, nonatomic) UIView *bottomQuickViewHelp; // @synthesize bottomQuickViewHelp=_bottomQuickViewHelp;
@property(retain, nonatomic) UIImageView *topQuickViewHelpImageView; // @synthesize topQuickViewHelpImageView=_topQuickViewHelpImageView;
@property(retain, nonatomic) UIView *topQuickViewHelp; // @synthesize topQuickViewHelp=_topQuickViewHelp;
@property(retain, nonatomic) NSTimer *fadeOutTimer; // @synthesize fadeOutTimer=_fadeOutTimer;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
- (void).cxx_destruct;
- (void)resetQuickViewImages;
- (void)cancelFadeOut;
- (void)fadeOut;
- (void)fadeOutAfterDelay;
- (void)blink;
- (void)resetQuickViewHelpOpacityForPoint:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

