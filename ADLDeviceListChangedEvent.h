//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ADLDeviceListChangedEvent : NSObject
{
    _Bool _audioIn;
    _Bool _audioOut;
    _Bool _videoIn;
}

+ (id)DeviceListChangedEventWithAudioIn:(_Bool)arg1 audioOut:(_Bool)arg2 videoIn:(_Bool)arg3;
@property(readonly, nonatomic) _Bool videoIn; // @synthesize videoIn=_videoIn;
@property(readonly, nonatomic) _Bool audioOut; // @synthesize audioOut=_audioOut;
@property(readonly, nonatomic) _Bool audioIn; // @synthesize audioIn=_audioIn;
- (id)description;
- (id)initWithAudioIn:(_Bool)arg1 audioOut:(_Bool)arg2 videoIn:(_Bool)arg3;

@end
