//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "NamedEvent.h"

@class NSNumber;

@interface SCAChatChatView : SCAUserTrackedEvent <NamedEvent>
{
    NSNumber *ackTimeSec;
    NSNumber *noteTimeSec;
    NSNumber *playbackAudio;
    NSNumber *tapCount;
    long long messageType;
    long long mediaType;
    long long source;
}

+ (id)copy:(id)arg1;
+ (id)create;
- (void).cxx_destruct;
- (id)asDictionary;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getMediaType;
- (void)setMediaType:(long long)arg1;
- (long long)getMessageType;
- (void)setMessageType:(long long)arg1;
- (long long)getTapCount;
- (void)setTapCount:(long long)arg1;
- (_Bool)getPlaybackAudio;
- (void)setPlaybackAudio:(_Bool)arg1;
- (double)getNoteTimeSec;
- (void)setNoteTimeSec:(double)arg1;
- (double)getAckTimeSec;
- (void)setAckTimeSec:(double)arg1;
- (id)getEventName;
- (id)init;

@end

