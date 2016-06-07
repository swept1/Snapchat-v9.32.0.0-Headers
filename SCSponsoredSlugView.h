//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class UITextView;

@interface SCSponsoredSlugView : UIImageView
{
    long long _position;
    _Bool _backgroundIsShown;
    UITextView *_textView;
    double _timeBeforeFadeout;
    double _timeToFadeout;
    double _hmargin;
    double _vmargin;
}

+ (id)createWithSponsoredSlug:(id)arg1 text:(id)arg2 withBackground:(_Bool)arg3;
@property(nonatomic) double vmargin; // @synthesize vmargin=_vmargin;
@property(nonatomic) double hmargin; // @synthesize hmargin=_hmargin;
@property(readonly, nonatomic) double timeToFadeout; // @synthesize timeToFadeout=_timeToFadeout;
@property(readonly, nonatomic) double timeBeforeFadeout; // @synthesize timeBeforeFadeout=_timeBeforeFadeout;
- (void).cxx_destruct;
- (id)imageViewForSponsoredSlug;
- (_Bool)shouldSetAtCenter;
- (_Bool)shouldSetRightOffset;
- (_Bool)shouldSetLeftOffset;
- (_Bool)shouldSetBottomOffset;
- (_Bool)shouldSetTopOffset;
- (_Bool)shouldSetMiddleOffset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithSponsoredSlug:(id)arg1 text:(id)arg2 withBackground:(_Bool)arg3;

@end
