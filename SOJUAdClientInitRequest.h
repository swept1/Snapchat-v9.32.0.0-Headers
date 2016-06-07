//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUAdClientInitRequest.h"

@class NSString, SOJUAdDeviceScreenDimension;

@interface SOJUAdClientInitRequest : NSObject <SOJUAdClientInitRequest>
{
    NSString *_deviceType;
    NSString *_osVersion;
    NSString *_appVersion;
    NSString *_idfa;
    SOJUAdDeviceScreenDimension *_screenDimensions;
}

@property(readonly, copy, nonatomic) SOJUAdDeviceScreenDimension *screenDimensions; // @synthesize screenDimensions=_screenDimensions;
@property(readonly, copy, nonatomic) NSString *idfa; // @synthesize idfa=_idfa;
@property(readonly, copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(readonly, copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(readonly, copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDeviceType:(id)arg1 osVersion:(id)arg2 appVersion:(id)arg3 idfa:(id)arg4 screenDimensions:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
