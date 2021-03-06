//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ADLVideoFrameSizeChangedEvent : NSObject
{
    int _width;
    int _height;
    NSString *_sinkId;
}

+ (id)VideoFrameSizeChangedEventWithSinkId:(id)arg1 width:(int)arg2 height:(int)arg3;
@property(readonly, nonatomic) int height; // @synthesize height=_height;
@property(readonly, nonatomic) int width; // @synthesize width=_width;
@property(readonly, nonatomic) NSString *sinkId; // @synthesize sinkId=_sinkId;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSinkId:(id)arg1 width:(int)arg2 height:(int)arg3;

@end

