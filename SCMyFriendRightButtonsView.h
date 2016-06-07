//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCExtendedHitButton;

@interface SCMyFriendRightButtonsView : UIView
{
    SCExtendedHitButton *_settingsGearButton;
    SCExtendedHitButton *_cameraButton;
    SCExtendedHitButton *_chatButton;
    CDUnknownBlockType _differedLayout;
}

@property(copy, nonatomic) CDUnknownBlockType differedLayout; // @synthesize differedLayout=_differedLayout;
@property(retain, nonatomic) SCExtendedHitButton *chatButton; // @synthesize chatButton=_chatButton;
@property(retain, nonatomic) SCExtendedHitButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(retain, nonatomic) SCExtendedHitButton *settingsGearButton; // @synthesize settingsGearButton=_settingsGearButton;
- (void).cxx_destruct;
- (void)setHidden:(_Bool)arg1;
- (id)initWithAllButtonsWithDifferedLayout:(_Bool)arg1;
- (id)initWithSettingsGearButtonWithDifferedLayout:(_Bool)arg1;

@end
