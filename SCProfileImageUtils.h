//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCProfileImageUtils : NSObject
{
}

+ (id)shared;
- (id)maskedProfileImageArrayWithImageDataArray:(id)arg1;
- (id)profileImageArrayWithImageDataArray:(id)arg1;
- (id)stringForProfileImageSize:(long long)arg1;
- (id)deserializeProfileImages:(id)arg1 bufferStartIndex:(int *)arg2;
- (id)deserializeProfileImagesForFriends:(id)arg1;
- (id)deserializeProfileImages:(id)arg1;
- (id)serializeProfileImages:(id)arg1;

@end
