//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "NamedEvent.h"

@class NSDate, NSNumber;

@interface SCARegistrationUserSignupEmailPageview : SCAUserTrackedEvent <NamedEvent>
{
    NSNumber *hasLoggedInBefore;
    NSNumber *retry;
    long long registrationVersion;
    long long source;
    NSDate *lastPageviewTs;
}

+ (id)copy:(id)arg1;
+ (id)create;
- (void).cxx_destruct;
- (id)asDictionary;
- (id)getLastPageviewTs;
- (void)setLastPageviewTs:(id)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getRegistrationVersion;
- (void)setRegistrationVersion:(long long)arg1;
- (_Bool)getRetry;
- (void)setRetry:(_Bool)arg1;
- (_Bool)getHasLoggedInBefore;
- (void)setHasLoggedInBefore:(_Bool)arg1;
- (id)getEventName;
- (id)init;

@end

