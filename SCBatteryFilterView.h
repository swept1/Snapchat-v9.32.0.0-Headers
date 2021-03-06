//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOverlayFilterView.h"

@class UIImageView;

@interface SCBatteryFilterView : SCOverlayFilterView
{
    UIImageView *_imageView;
    long long _orientation;
}

@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (struct CGPoint)landscapeImageCenter;
- (struct CGPoint)portraitImageCenter;
- (struct CGSize)imageSize;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2;

@end

