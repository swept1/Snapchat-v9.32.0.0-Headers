//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUAdPredictionStudy.h"

@class NSDictionary, NSString;

@interface SOJUAdPredictionStudy : NSObject <SOJUAdPredictionStudy>
{
    NSDictionary *_studyName;
    NSDictionary *_experimentId;
    NSDictionary *_modelId;
}

@property(readonly, copy, nonatomic) NSDictionary *modelId; // @synthesize modelId=_modelId;
@property(readonly, copy, nonatomic) NSDictionary *experimentId; // @synthesize experimentId=_experimentId;
@property(readonly, copy, nonatomic) NSDictionary *studyName; // @synthesize studyName=_studyName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStudyName:(id)arg1 experimentId:(id)arg2 modelId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

