//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCEvaluationSession : NSObject
{
    NSString *_searchId;
    NSString *_searchType;
    long long _algorithmId;
}

@property(nonatomic) long long algorithmId; // @synthesize algorithmId=_algorithmId;
@property(retain, nonatomic) NSString *searchType; // @synthesize searchType=_searchType;
@property(retain, nonatomic) NSString *searchId; // @synthesize searchId=_searchId;
- (void).cxx_destruct;

@end
