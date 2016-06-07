//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "NamedEvent.h"

@class NSNumber, NSString;

@interface SCAExplorerReportSnapDialog : SCAUserTrackedEvent <NamedEvent>
{
    NSNumber *level;
    long long storyType;
    NSString *geoFence;
    NSString *poster_id;
    NSString *sponser;
    NSString *storySnapId;
    NSString *storyRootSnapId;
}

+ (id)copy:(id)arg1;
+ (id)create;
- (void).cxx_destruct;
- (id)asDictionary;
- (id)getStoryRootSnapId;
- (void)setStoryRootSnapId:(id)arg1;
- (id)getStorySnapId;
- (void)setStorySnapId:(id)arg1;
- (id)getSponser;
- (void)setSponser:(id)arg1;
- (id)getPoster_id;
- (void)setPoster_id:(id)arg1;
- (id)getGeoFence;
- (void)setGeoFence:(id)arg1;
- (long long)getStoryType;
- (void)setStoryType:(long long)arg1;
- (long long)getLevel;
- (void)setLevel:(long long)arg1;
- (id)getEventName;
- (id)init;

@end

