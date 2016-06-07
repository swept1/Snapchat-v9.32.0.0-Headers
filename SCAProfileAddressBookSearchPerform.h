//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "NamedEvent.h"

@class NSNumber;

@interface SCAProfileAddressBookSearchPerform : SCAUserTrackedEvent <NamedEvent>
{
    NSNumber *charCount;
    NSNumber *keystrokeCount;
    NSNumber *contactFoundCount;
    NSNumber *nonSnapchatterCount;
}

+ (id)copy:(id)arg1;
+ (id)create;
- (void).cxx_destruct;
- (id)asDictionary;
- (long long)getNonSnapchatterCount;
- (void)setNonSnapchatterCount:(long long)arg1;
- (long long)getContactFoundCount;
- (void)setContactFoundCount:(long long)arg1;
- (long long)getKeystrokeCount;
- (void)setKeystrokeCount:(long long)arg1;
- (long long)getCharCount;
- (void)setCharCount:(long long)arg1;
- (id)getEventName;
- (id)init;

@end
