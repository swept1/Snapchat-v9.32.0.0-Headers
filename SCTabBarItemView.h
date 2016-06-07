//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSString, UIImageView, UIView;

@interface SCTabBarItemView : UIControl
{
    UIImageView *_imageView;
    UIView *_cameraPageView;
    UIImageView *_cameraPageImageView;
    NSString *_backgroundImageName;
    UIView *_selectedView;
    long long _badgeCount;
    UIView *_circleView;
    long long _itemType;
    UIImageView *_backgroundImageView;
    UIImageView *_darkModeImageView;
    NSString *_darkModeImageName;
}

+ (id)smallImageForType:(long long)arg1 isBadged:(_Bool)arg2;
+ (id)captureTabBarView;
+ (id)storiesTabBarView;
+ (id)chatTabBarView;
@property(retain, nonatomic) NSString *darkModeImageName; // @synthesize darkModeImageName=_darkModeImageName;
@property(retain, nonatomic) UIImageView *darkModeImageView; // @synthesize darkModeImageView=_darkModeImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) UIView *circleView; // @synthesize circleView=_circleView;
@property(nonatomic) long long badgeCount; // @synthesize badgeCount=_badgeCount;
@property(retain, nonatomic) UIView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) NSString *backgroundImageName; // @synthesize backgroundImageName=_backgroundImageName;
@property(retain, nonatomic) UIImageView *cameraPageImageView; // @synthesize cameraPageImageView=_cameraPageImageView;
@property(retain, nonatomic) UIView *cameraPageView; // @synthesize cameraPageView=_cameraPageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)fillColor;
- (_Bool)isDarkModeImageViewLoaded;
@property(readonly, nonatomic, getter=isBadged) _Bool badged;
- (void)setSelected:(_Bool)arg1;
- (void)updateImageViewsAndLayout;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
