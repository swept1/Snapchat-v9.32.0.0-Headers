//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensContent.h"

@class NSString, UIImage;

@interface SCLensContent : NSObject <SCLensContent>
{
    UIImage *_image;
    NSString *_contentPath;
}

@property(readonly, copy, nonatomic) NSString *contentPath; // @synthesize contentPath=_contentPath;
@property(readonly, copy, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImage:(id)arg1 contentPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

