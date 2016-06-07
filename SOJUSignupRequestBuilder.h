//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface SOJUSignupRequestBuilder : NSObject
{
    NSString *_preAuthToken;
    NSString *_password;
    NSString *_ptoken;
    NSNumber *_rememberDevice;
    NSNumber *_fromDeeplink;
    NSString *_dtoken1i;
    NSString *_dsig;
    NSString *_nt;
    NSNumber *_height;
    NSNumber *_width;
    NSNumber *_maxVideoHeight;
    NSNumber *_maxVideoWidth;
    NSString *_applicationId;
    NSString *_attestation;
    NSString *_sflag;
    NSNumber *_screenWidthIn;
    NSNumber *_screenHeightIn;
    NSNumber *_screenWidthPx;
    NSNumber *_screenHeightPx;
    NSString *_twoFaMechanismUsed;
    NSNumber *_reactivationConfirmed;
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_email;
    NSString *_age;
    NSString *_birthday;
    NSString *_studySettings;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_timeZone;
}

+ (id)withJUSignupRequest:(id)arg1;
- (void).cxx_destruct;
- (id)setTimeZone:(id)arg1;
- (id)setLastName:(id)arg1;
- (id)setFirstName:(id)arg1;
- (id)setStudySettings:(id)arg1;
- (id)setBirthday:(id)arg1;
- (id)setAge:(id)arg1;
- (id)setEmail:(id)arg1;
- (id)setUsername:(id)arg1;
- (id)setReqToken:(id)arg1;
- (id)setTimestamp:(id)arg1;
- (id)setReactivationConfirmed:(id)arg1;
- (id)setTwoFaMechanismUsed:(id)arg1;
- (id)setScreenHeightPx:(id)arg1;
- (id)setScreenWidthPx:(id)arg1;
- (id)setScreenHeightIn:(id)arg1;
- (id)setScreenWidthIn:(id)arg1;
- (id)setSflag:(id)arg1;
- (id)setAttestation:(id)arg1;
- (id)setApplicationId:(id)arg1;
- (id)setMaxVideoWidth:(id)arg1;
- (id)setMaxVideoHeight:(id)arg1;
- (id)setWidth:(id)arg1;
- (id)setHeight:(id)arg1;
- (id)setNt:(id)arg1;
- (id)setDsig:(id)arg1;
- (id)setDtoken1i:(id)arg1;
- (id)setFromDeeplink:(id)arg1;
- (id)setRememberDevice:(id)arg1;
- (id)setPtoken:(id)arg1;
- (id)setPassword:(id)arg1;
- (id)setPreAuthToken:(id)arg1;
- (id)build;

@end

