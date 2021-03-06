//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface BCOVMediaRequestFactory : NSObject
{
    NSArray *_defaultVideoFields;
    NSString *_baseURL;
    NSString *_mediaDelivery;
    NSString *_token;
}

@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *mediaDelivery; // @synthesize mediaDelivery=_mediaDelivery;
@property(copy, nonatomic) NSString *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSArray *defaultVideoFields; // @synthesize defaultVideoFields=_defaultVideoFields;
- (void).cxx_destruct;
- (id)requiredRequestParameters;
- (id)requestWithParameters:(id)arg1;
- (id)requestVideoWithReferenceID:(id)arg1 parameters:(id)arg2;
- (id)requestVideoWithReferenceID:(id)arg1;
- (id)requestVideoWithVideoID:(id)arg1 parameters:(id)arg2;
- (id)requestVideoWithVideoID:(id)arg1;
- (id)requestPlaylistWithReferenceID:(id)arg1 parameters:(id)arg2;
- (id)requestPlaylistWithReferenceID:(id)arg1;
- (id)requestPlaylistWithPlaylistID:(id)arg1 parameters:(id)arg2;
- (id)requestPlaylistWithPlaylistID:(id)arg1;
- (id)initWithToken:(id)arg1;
- (id)initWithToken:(id)arg1 baseURLString:(id)arg2;

@end

