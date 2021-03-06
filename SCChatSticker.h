//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCStickerProtocol.h"

@class NSString, SOJUSticker;

@interface SCChatSticker : NSObject <SCStickerProtocol>
{
    SOJUSticker *_chatSticker;
}

- (void).cxx_destruct;
- (void)thumbnailImage:(CDUnknownBlockType)arg1;
- (void)image:(CDUnknownBlockType)arg1;
- (id)loggingParamters;
- (unsigned long long)type;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stickerStateWithRelativeSize:(struct CGSize)arg1 center:(struct CGPoint)arg2 rotation:(double)arg3 scale:(double)arg4 isTracking:(_Bool)arg5 trackingTrajectory:(id)arg6;
- (id)initWithChatSticker:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

