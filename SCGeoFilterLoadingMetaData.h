//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface SCGeoFilterLoadingMetaData : NSObject
{
    _Bool _isSponsored;
    NSString *_filterId;
    double _fenceArea;
    double _downloadLatencySeconds;
    unsigned long long _targetingType;
    long long _loadingStage;
    long long _numDynamicItems;
    NSMutableDictionary *_delayMap;
}

+ (id)loadStageToLoggingKey:(long long)arg1;
+ (id)loadingStageToString:(long long)arg1;
@property(retain, nonatomic) NSMutableDictionary *delayMap; // @synthesize delayMap=_delayMap;
@property(nonatomic) long long numDynamicItems; // @synthesize numDynamicItems=_numDynamicItems;
@property(readonly, nonatomic) long long loadingStage; // @synthesize loadingStage=_loadingStage;
@property(readonly, nonatomic) unsigned long long targetingType; // @synthesize targetingType=_targetingType;
@property(nonatomic) double downloadLatencySeconds; // @synthesize downloadLatencySeconds=_downloadLatencySeconds;
@property(readonly, nonatomic) double fenceArea; // @synthesize fenceArea=_fenceArea;
@property(readonly, nonatomic) _Bool isSponsored; // @synthesize isSponsored=_isSponsored;
@property(readonly, copy, nonatomic) NSString *filterId; // @synthesize filterId=_filterId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)updateIfNotSetWithStage:(long long)arg1;
- (void)updateWithStage:(long long)arg1;
- (id)getLogParametersWithReferenceTime:(double)arg1;
- (id)initWithFilterId:(id)arg1 isSponsored:(_Bool)arg2 targetingType:(unsigned long long)arg3 fenceArea:(double)arg4;

@end

