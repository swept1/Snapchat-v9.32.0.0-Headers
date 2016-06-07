//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCDiscoverMediaMessage;

@interface SCChatDiscoverSharingLogger : NSObject
{
    _Bool _isAd;
    _Bool _isFullyViewed;
    long long _isSnapAvailable;
    long long _isEditionAvailable;
    double _snapDuration;
    double _startTime;
    SCDiscoverMediaMessage *_message;
}

+ (id)shared;
@property(nonatomic) __weak SCDiscoverMediaMessage *message; // @synthesize message=_message;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double snapDuration; // @synthesize snapDuration=_snapDuration;
@property(nonatomic) _Bool isFullyViewed; // @synthesize isFullyViewed=_isFullyViewed;
@property(nonatomic) long long isEditionAvailable; // @synthesize isEditionAvailable=_isEditionAvailable;
@property(nonatomic) long long isSnapAvailable; // @synthesize isSnapAvailable=_isSnapAvailable;
@property(nonatomic) _Bool isAd; // @synthesize isAd=_isAd;
- (void).cxx_destruct;
- (id)stringForDSnapLinkableState:(unsigned long long)arg1;
- (void)dSnapFullScreenVidDidPlay:(id)arg1 withError:(_Bool)arg2;
- (void)dSnapFullScreenVidLoadDidStart:(id)arg1;
- (void)dSnapThumbnailVidDidPlay:(id)arg1 withError:(_Bool)arg2;
- (void)dSnapThumbnailVidLoadDidStart:(id)arg1;
- (void)linkValidationFailedForDSnap:(id)arg1;
- (void)linkValidationEndedForDSnap:(id)arg1 withState:(unsigned long long)arg2;
- (void)linkValidationStartedForDSnap:(id)arg1;
- (void)firstFrameLoadEndedForDSnap:(id)arg1;
- (void)firstFrameLoadStartedForDSnap:(id)arg1;
- (void)brandIconLoadEndedForDSnap:(id)arg1 success:(_Bool)arg2;
- (void)brandIconLoadStartedForDSnap:(id)arg1;
- (void)didTapDiscoverBarWithMessage:(id)arg1 linkState:(long long)arg2 linkInfo:(id)arg3;
- (void)viewEnded;
- (void)viewStartedForMessage:(id)arg1;

@end
