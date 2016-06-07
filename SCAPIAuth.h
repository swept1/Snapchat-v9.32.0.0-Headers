//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCAPIAuth : NSObject
{
}

+ (id)hexadecimalString:(id)arg1;
+ (id)sha2:(id)arg1;
+ (id)versionName;
+ (id)userAgentHeader;
+ (id)requestTokenForUserToken:(id)arg1 timestamp:(id)arg2;
+ (id)authenticationParametersForUserWithToken:(id)arg1 username:(id)arg2 email:(id)arg3;
+ (id)authenticationParametersForUserWithToken:(id)arg1 username:(id)arg2 email:(id)arg3 withDeviceInfo:(_Bool)arg4;
+ (id)authenticationParametersForEndpoint:(id)arg1 authToken:(id)arg2 username:(id)arg3 email:(id)arg4 parameters:(id)arg5;

@end
