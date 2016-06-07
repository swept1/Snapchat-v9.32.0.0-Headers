//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface SCDeepLinkURL : NSObject
{
    _Bool _isFormatValid;
    NSArray *_pathComponents;
    _Bool _isHTTPLink;
    NSString *_path;
    NSString *_clickId;
    NSString *_shareId;
    NSDictionary *_queryParams;
    NSString *_linkId;
    NSString *_referrer;
}

+ (id)deepLinkURLWithLinkId:(id)arg1;
@property(readonly, nonatomic) _Bool isHTTPLink; // @synthesize isHTTPLink=_isHTTPLink;
@property(readonly, copy, nonatomic) NSString *referrer; // @synthesize referrer=_referrer;
@property(copy, nonatomic) NSString *linkId; // @synthesize linkId=_linkId;
@property(readonly, copy, nonatomic) NSDictionary *queryParams; // @synthesize queryParams=_queryParams;
@property(copy, nonatomic) NSString *shareId; // @synthesize shareId=_shareId;
@property(copy, nonatomic) NSString *clickId; // @synthesize clickId=_clickId;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)description;
- (id)feature;
- (id)pathComponentAtIndex:(unsigned long long)arg1 forceLowerCase:(_Bool)arg2;
- (id)pathComponentAtIndex:(unsigned long long)arg1;
- (_Bool)isValid;
- (id)initWithURL:(id)arg1;

@end

