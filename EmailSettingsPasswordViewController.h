//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GenericSettingsPasswordViewController.h"

@class NSString;

@interface EmailSettingsPasswordViewController : GenericSettingsPasswordViewController
{
    NSString *_email;
}

@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
- (void).cxx_destruct;
- (void)reauthAndUpdateEmail:(id)arg1 password:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (void)continueButtonBarPressed:(id)arg1;
- (id)getInfo;
- (id)getTitle;
- (id)getPageViewName;
- (id)init:(id)arg1;
- (id)init;

@end

