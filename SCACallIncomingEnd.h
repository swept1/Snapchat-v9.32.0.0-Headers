//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "NamedEvent.h"

@class NSNumber;

@interface SCACallIncomingEnd : SCAUserTrackedEvent <NamedEvent>
{
    NSNumber *playbackAudioOutSec;
    NSNumber *playbackAudioInSec;
    NSNumber *playbackVideoOutSec;
    NSNumber *playbackVideoInSec;
    NSNumber *symmetricMediaTimeSec;
    NSNumber *callTimeSec;
    NSNumber *ringingTimeSec;
    NSNumber *audioPublishCount;
    NSNumber *videoPublishCount;
    NSNumber *chatSentCount;
    NSNumber *chatReceivedCount;
    NSNumber *fullscreenViewTimeSec;
    NSNumber *fullscreenKeyboardViewTimeSec;
    NSNumber *circleViewTimeSec;
    long long mediaType;
    long long mediaTypeInitial;
}

+ (id)copy:(id)arg1;
+ (id)create;
- (void).cxx_destruct;
- (id)asDictionary;
- (long long)getMediaTypeInitial;
- (void)setMediaTypeInitial:(long long)arg1;
- (long long)getMediaType;
- (void)setMediaType:(long long)arg1;
- (double)getCircleViewTimeSec;
- (void)setCircleViewTimeSec:(double)arg1;
- (double)getFullscreenKeyboardViewTimeSec;
- (void)setFullscreenKeyboardViewTimeSec:(double)arg1;
- (double)getFullscreenViewTimeSec;
- (void)setFullscreenViewTimeSec:(double)arg1;
- (long long)getChatReceivedCount;
- (void)setChatReceivedCount:(long long)arg1;
- (long long)getChatSentCount;
- (void)setChatSentCount:(long long)arg1;
- (long long)getVideoPublishCount;
- (void)setVideoPublishCount:(long long)arg1;
- (long long)getAudioPublishCount;
- (void)setAudioPublishCount:(long long)arg1;
- (double)getRingingTimeSec;
- (void)setRingingTimeSec:(double)arg1;
- (double)getCallTimeSec;
- (void)setCallTimeSec:(double)arg1;
- (double)getSymmetricMediaTimeSec;
- (void)setSymmetricMediaTimeSec:(double)arg1;
- (double)getPlaybackVideoInSec;
- (void)setPlaybackVideoInSec:(double)arg1;
- (double)getPlaybackVideoOutSec;
- (void)setPlaybackVideoOutSec:(double)arg1;
- (double)getPlaybackAudioInSec;
- (void)setPlaybackAudioInSec:(double)arg1;
- (double)getPlaybackAudioOutSec;
- (void)setPlaybackAudioOutSec:(double)arg1;
- (id)getEventName;
- (id)init;

@end
