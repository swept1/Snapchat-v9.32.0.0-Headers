//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJURichStoryRichStoryCacheItemResponse.h"

@class NSNumber, NSString;

@interface SOJURichStoryRichStoryCacheItemResponse : NSObject <SOJURichStoryRichStoryCacheItemResponse>
{
    NSString *_url;
    NSString *_key;
    NSString *_etag;
    NSString *_contentType;
    NSString *_path;
    NSString *_type;
    NSNumber *_sizeBytes;
}

@property(readonly, copy, nonatomic) NSNumber *sizeBytes; // @synthesize sizeBytes=_sizeBytes;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, copy, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUrl:(id)arg1 key:(id)arg2 etag:(id)arg3 contentType:(id)arg4 path:(id)arg5 type:(id)arg6 sizeBytes:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
