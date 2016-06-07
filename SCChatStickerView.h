//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FLAnimatedImageView, SOJUSticker, UIActivityIndicatorView, UILabel;

@interface SCChatStickerView : UIView
{
    FLAnimatedImageView *_stickerImageView;
    UIActivityIndicatorView *_activityView;
    UILabel *_labelView;
    _Bool _useThumbnail;
    SOJUSticker *_sticker;
    double _stickerViewLength;
}

@property(nonatomic) _Bool useThumbnail; // @synthesize useThumbnail=_useThumbnail;
@property(nonatomic) double stickerViewLength; // @synthesize stickerViewLength=_stickerViewLength;
@property(retain, nonatomic) SOJUSticker *sticker; // @synthesize sticker=_sticker;
- (void).cxx_destruct;
- (id)emojiFont;
- (void)_showSpinner;
- (void)_showStickerWithImage:(id)arg1;
- (_Bool)isStickerLoaded;
- (id)emoji;
- (void)animateSelect;
- (void)cleanUpResources;
- (id)initWithFrame:(struct CGRect)arg1;

@end

