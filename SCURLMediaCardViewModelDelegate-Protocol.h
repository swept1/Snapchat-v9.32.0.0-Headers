//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, UIImage;

@protocol SCURLMediaCardViewModelDelegate <NSObject>
- (void)showThumbnailImage:(UIImage *)arg1 isGrayScale:(_Bool)arg2 isDefaultThumbnail:(_Bool)arg3;
- (void)setTitle:(NSAttributedString *)arg1 subtitle:(NSAttributedString *)arg2;
@end

