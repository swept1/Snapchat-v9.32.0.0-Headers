//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSString, SOJUAdDeviceScreenDimension;

@protocol SOJUAdClientInitRequest <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUAdDeviceScreenDimension *screenDimensions;
@property(readonly, copy, nonatomic) NSString *idfa;
@property(readonly, copy, nonatomic) NSString *appVersion;
@property(readonly, copy, nonatomic) NSString *osVersion;
@property(readonly, copy, nonatomic) NSString *deviceType;
@end
