//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SOJUSticker;

@interface SCChatStickerUsage : NSObject
{
    SOJUSticker *_sticker;
    long long _numberOfUse;
    long long _dayOfLastUse;
}

@property(nonatomic) long long dayOfLastUse; // @synthesize dayOfLastUse=_dayOfLastUse;
@property(nonatomic) long long numberOfUse; // @synthesize numberOfUse=_numberOfUse;
@property(nonatomic) SOJUSticker *sticker; // @synthesize sticker=_sticker;
- (id)initWithSticker:(id)arg1 numberOfUse:(long long)arg2 dayOfLastUse:(long long)arg3;

@end

