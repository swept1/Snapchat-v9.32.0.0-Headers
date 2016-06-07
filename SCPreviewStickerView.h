//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCTouchControlUIView.h"

#import "SCVideoTargetTrajectoryManagerDelegate.h"
#import "SCVideoTrackedView.h"

@class NSString, SCVideoTargetTrajectoryManager, UIImageView, UILabel;

@interface SCPreviewStickerView : SCTouchControlUIView <SCVideoTargetTrajectoryManagerDelegate, SCVideoTrackedView>
{
    UILabel *_label;
    UIImageView *_stickerImageView;
    SCVideoTargetTrajectoryManager *_trajectoryManager;
    id <SCStickerProtocol> _sticker;
}

+ (id)imageForEmoji:(id)arg1;
+ (double)fontSizeForLineHeight:(double)arg1;
@property(readonly, copy, nonatomic) id <SCStickerProtocol> sticker; // @synthesize sticker=_sticker;
- (void).cxx_destruct;
- (void)trajectoryManager:(id)arg1 didOutputTransform:(id)arg2;
- (void)disableTracking;
- (void)enableTrackingWithManager:(id)arg1;
- (id)targetTrajectory;
- (_Bool)isTracking;
- (_Bool)pixelIsTransparentAtLoc:(struct CGPoint)arg1 view:(id)arg2;
- (_Bool)textFrameContainsGesture:(id)arg1;
- (void)scaleDownAndRemove:(struct CGPoint)arg1;
- (id)_initWithImageSticker:(id)arg1 center:(struct CGPoint)arg2 thumbnail:(id)arg3;
- (id)_initWithTextSticker:(id)arg1 center:(struct CGPoint)arg2 fontSize:(double)arg3;
- (id)initWithSticker:(id)arg1 center:(struct CGPoint)arg2 fontSize:(double)arg3 thumbnail:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

