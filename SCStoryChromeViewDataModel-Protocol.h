//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, UIColor;

@protocol SCStoryChromeViewDataModel <NSObject>
- (_Bool)useAdHeadline;
- (_Bool)isFromCameraRoll;
- (_Bool)hideTextShadow;
- (_Bool)hideGradientView;
- (UIColor *)snapTimeColor;
- (UIColor *)snapDisplayTitleColor;
- (NSString *)snapAdHeadline;
- (NSString *)snapPosterDisplayName;
- (NSDate *)snapPostTime;
- (NSString *)snapDisplayTitle;
@end
