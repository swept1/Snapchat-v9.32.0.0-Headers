//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"
#import "SOJUSnapMediaRequest.h"

@class NSArray, NSData, NSNumber, NSString;

@protocol SOJUSendSnapRequest <NSObject, NSCoding, NSCopying, SOJUSnapMediaRequest>
@property(readonly, copy, nonatomic) NSString *iv;
@property(readonly, copy, nonatomic) NSString *key;
@property(readonly, copy, nonatomic) NSString *uploadUrl;
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, copy, nonatomic) NSNumber *type;
@property(readonly, copy, nonatomic) NSArray *invitedRecipients;
@property(readonly, copy, nonatomic) NSArray *recipientIds;
@property(readonly, copy, nonatomic) NSArray *recipients;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, copy, nonatomic) NSString *reqToken;
@property(readonly, copy, nonatomic) NSString *timestamp;
@property(readonly, copy, nonatomic) NSNumber *time;
@property(readonly, copy, nonatomic) NSString *cameraFrontFacing;
@property(readonly, copy, nonatomic) NSString *lensId;
@property(readonly, copy, nonatomic) NSString *filterId;
@property(readonly, copy, nonatomic) NSString *encGeoData;
@property(readonly, copy, nonatomic) NSString *zipped;
@property(readonly, copy, nonatomic) NSNumber *orientation;
@property(readonly, copy, nonatomic) NSString *mediaId;
@end

