//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SOJUIdentityTrophyStage, UILabel;

@interface TrophyView : UIView
{
    SOJUIdentityTrophyStage *_trophyStage;
    UILabel *_emojiLabel;
}

@property(retain, nonatomic) UILabel *emojiLabel; // @synthesize emojiLabel=_emojiLabel;
@property(retain, nonatomic) SOJUIdentityTrophyStage *trophyStage; // @synthesize trophyStage=_trophyStage;
- (void).cxx_destruct;
- (void)toggleAlpha;
- (void)initEmojiViewWithTrophySize:(double)arg1;
- (id)initWithTrophy:(id)arg1 trophySize:(double)arg2 frame:(struct CGRect)arg3;

@end

