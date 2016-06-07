//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "SCSnapAdsSerializableData.h"

@class NSNumber, NSString;

@interface SCScreenDimensionData : NSObject <SCSnapAdsSerializableData, NSCopying>
{
    NSNumber *_height;
    NSNumber *_width;
}

@property(readonly, copy, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(readonly, copy, nonatomic) NSNumber *height; // @synthesize height=_height;
- (void).cxx_destruct;
- (id)serialize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHeight:(id)arg1 width:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

