//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCAdMediaRendition : NSObject
{
    long long _width;
    long long _height;
    NSString *_mediaUrl;
    double _fileSize;
}

@property(readonly, nonatomic) double fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, copy, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl=_mediaUrl;
@property(readonly, nonatomic) long long height; // @synthesize height=_height;
@property(readonly, nonatomic) long long width; // @synthesize width=_width;
- (void).cxx_destruct;
- (_Bool)isValid;
- (long long)pixelArea;
- (double)aspectRatio;
- (id)initWithRenditionData:(id)arg1;

@end

