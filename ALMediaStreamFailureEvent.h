//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ALMediaStreamFailureEvent : NSObject
{
    int _errCode;
    NSString *_scopeId;
    NSString *_mediaType;
    NSString *_errMessage;
}

@property(copy, nonatomic) NSString *errMessage; // @synthesize errMessage=_errMessage;
@property(nonatomic) int errCode; // @synthesize errCode=_errCode;
@property(copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *scopeId; // @synthesize scopeId=_scopeId;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end

