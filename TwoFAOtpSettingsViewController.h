//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TwoFASettingCodeVerificationViewController.h"

@class NSString;

@interface TwoFAOtpSettingsViewController : TwoFASettingCodeVerificationViewController
{
    NSString *_srcFlowName;
    NSString *_otpSecret;
}

- (void).cxx_destruct;
- (void)popToViewOfClass:(Class)arg1;
- (void)verifySucceed:(id)arg1;
- (void)verifyPressed:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)leftButtonPressed:(id)arg1;
- (id)initWithSourceFlowName:(id)arg1 otpSecret:(id)arg2;
- (id)getPageViewName;

@end
