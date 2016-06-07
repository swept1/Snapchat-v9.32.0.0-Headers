//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCLocationDataController.h"

@class NSMutableArray;

@interface SCLocationGeoLensController : SCLocationDataController
{
    NSMutableArray *_activeGeoLenses;
    id <SCPerforming> _performer;
}

@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
@property(retain, nonatomic) NSMutableArray *activeGeoLenses; // @synthesize activeGeoLenses=_activeGeoLenses;
- (void).cxx_destruct;
- (id)logGeoFenceCorrectnessOfLens:(id)arg1 forlocation:(id)arg2;
- (void)clearCache;
- (void)updateCacheWithLocation:(id)arg1;
- (void)processResponse:(id)arg1 location:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)_ensureNonNilObjects;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

