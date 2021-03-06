//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUBroadcastBroadcastInitRequest.h"

@class NSNumber, NSString;

@interface SOJUBroadcastBroadcastInitRequest : NSObject <SOJUBroadcastBroadcastInitRequest>
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSNumber *_lastUpdatedTimestamp;
    NSString *_lastUpdatedHashcode;
    NSNumber *_height;
    NSNumber *_width;
    NSNumber *_maxVideoHeight;
    NSNumber *_maxVideoWidth;
    NSString *_region;
    NSString *_country;
}

@property(readonly, copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(readonly, copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(readonly, copy, nonatomic) NSNumber *maxVideoWidth; // @synthesize maxVideoWidth=_maxVideoWidth;
@property(readonly, copy, nonatomic) NSNumber *maxVideoHeight; // @synthesize maxVideoHeight=_maxVideoHeight;
@property(readonly, copy, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(readonly, copy, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(readonly, copy, nonatomic) NSString *lastUpdatedHashcode; // @synthesize lastUpdatedHashcode=_lastUpdatedHashcode;
@property(readonly, copy, nonatomic) NSNumber *lastUpdatedTimestamp; // @synthesize lastUpdatedTimestamp=_lastUpdatedTimestamp;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *reqToken; // @synthesize reqToken=_reqToken;
@property(readonly, copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTimestamp:(id)arg1 reqToken:(id)arg2 username:(id)arg3 lastUpdatedTimestamp:(id)arg4 lastUpdatedHashcode:(id)arg5 height:(id)arg6 width:(id)arg7 maxVideoHeight:(id)arg8 maxVideoWidth:(id)arg9 region:(id)arg10 country:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

