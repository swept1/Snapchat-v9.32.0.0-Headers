//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "NamedEvent.h"

@class NSNumber;

@interface SCAProfileMyFriendsSearchClear : SCAUserTrackedEvent <NamedEvent>
{
    NSNumber *charCount;
}

+ (id)copy:(id)arg1;
+ (id)create;
- (void).cxx_destruct;
- (id)asDictionary;
- (long long)getCharCount;
- (void)setCharCount:(long long)arg1;
- (id)getEventName;
- (id)init;

@end

