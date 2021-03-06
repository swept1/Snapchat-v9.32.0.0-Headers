//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBatchedMediaMessage.h"

@class NSString;

@interface SCStoryMediaMessage : SCBatchedMediaMessage
{
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)fetchMediaFromIndex:(unsigned long long)arg1 number:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchMinimumRequiredMedia;
- (void)fetchMedia;
- (void)preloadMedia;
- (id)httpSenderParameters;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsername:(id)arg1 dictionary:(id)arg2;
- (id)initWithSender:(id)arg1 recipient:(id)arg2;

@end

