//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, StoryStoryViewSession;

@interface SCStoryUsageLogger : NSObject
{
    NSMutableSet *_viewedStoriesUsernames;
    StoryStoryViewSession *_storyStoryViewSession;
    unsigned long long _tappedIndex;
}

+ (long long)exploreActionToLogForExploreAction:(long long)arg1;
+ (long long)exitEventToLogForStoryExploreExitReason:(long long)arg1;
+ (long long)reportSnapReasonToLogForReportSnapReason:(unsigned long long)arg1;
+ (id)adSkipReasonStringForAdSkipReason:(long long)arg1;
+ (long long)adSkipReasonToLogForAdSkipReason:(unsigned long long)arg1;
+ (id)stringFromViewingSessionExitReason:(long long)arg1;
+ (long long)snapFinishReasonToExitEvent:(long long)arg1;
+ (long long)fromStringToMediaType:(id)arg1;
+ (double)timeViewedFromParameters:(id)arg1;
+ (long long)storyTypeFromStory:(id)arg1;
+ (double)roundCGFloat:(double)arg1;
+ (id)sharedInstance;
@property(nonatomic) unsigned long long tappedIndex; // @synthesize tappedIndex=_tappedIndex;
@property(retain, nonatomic) StoryStoryViewSession *storyStoryViewSession; // @synthesize storyStoryViewSession=_storyStoryViewSession;
@property(retain, nonatomic) NSMutableSet *viewedStoriesUsernames; // @synthesize viewedStoriesUsernames=_viewedStoriesUsernames;
- (void).cxx_destruct;
- (void)logAdStorySkip:(id)arg1 story:(id)arg2 autoAdvanceIndex:(long long)arg3 adProductSourceType:(long long)arg4 storySessionId:(long long)arg5;
- (void)logAdStoryOpportunity:(id)arg1 autoAdvanceIndex:(long long)arg2 adProductSourceType:(long long)arg3 storySessionId:(long long)arg4;
- (id)brandSnapStoryViewEventNameWithStoryID:(id)arg1;
- (double)snapTimeViewForStory:(id)arg1 storyType:(long long)arg2 viewingType:(long long)arg3;
- (void)logMiniProfileViewWithProfileId:(id)arg1 profileType:(long long)arg2 viewLocation:(long long)arg3;
- (void)didSwipeOnExplorer;
- (void)didExploreStorySnapWithId:(id)arg1 rootSnapId:(id)arg2 level:(unsigned long long)arg3 exitReason:(long long)arg4 snapViewCount:(unsigned long long)arg5 explorerSnapCount:(unsigned long long)arg6 timeViewedInterval:(double)arg7 viewLocationPosition:(unsigned long long)arg8;
- (void)didBringUpReportDialogForStorySnapWithId:(id)arg1 rootSnapId:(id)arg2 level:(unsigned long long)arg3;
- (void)didReportStorySnapWithId:(id)arg1 rootSnapId:(id)arg2 level:(unsigned long long)arg3 reason:(unsigned long long)arg4;
- (void)didExploreNavigateStorySnapWithId:(id)arg1 rootSnapId:(id)arg2 action:(long long)arg3 sourceLevel:(unsigned long long)arg4 destinationLevel:(unsigned long long)arg5;
- (void)updateTappedIndex:(unsigned long long)arg1;
- (void)setSnapIndexCount:(unsigned long long)arg1 atLevel:(unsigned long long)arg2;
- (void)logLiveStoryDeepLinkUnavailableForPosterId:(id)arg1;
- (void)logGeofilterStorySnapScreenshot:(id)arg1;
- (void)logGeofilterStorySnapView:(id)arg1;
- (void)logStoryCellView:(id)arg1 numStoryCells:(unsigned long long)arg2 channelsSeen:(id)arg3 liveStoriesSeen:(id)arg4 featuredContents:(id)arg5 subscribedChannels:(id)arg6 storyRecentUpdatesPostersIds:(id)arg7 sortOrderId:(id)arg8;
- (void)logStoryCellEmpty;
- (void)logRemoveStoryWithClientId:(id)arg1 reason:(id)arg2 postingState:(long long)arg3 mediaState:(long long)arg4 mediaType:(long long)arg5;
- (void)logRemoveStory:(id)arg1 reason:(id)arg2;
- (void)logSaveStorySnap:(id)arg1 mediaType:(id)arg2;
- (void)logDeleteStorySnap:(id)arg1;
- (void)logStoryCellIdViewWithCells:(id)arg1;
- (void)logStoryCellInViewWithCells:(id)arg1;
- (void)logStoryLoggerViewStoriesEndEvent:(id)arg1 exitReason:(long long)arg2 isFullViewed:(_Bool)arg3;
- (void)logStoryStoryViewWithStoryType:(id)arg1 storySpecificType:(long long)arg2 exitReason:(long long)arg3 isFullViewed:(_Bool)arg4 autoAdvanceIndex:(id)arg5 snapCount:(unsigned long long)arg6 storySessionId:(long long)arg7 unviewed:(_Bool)arg8 cellId:(id)arg9;
- (void)logAdStoryView:(id)arg1 exitReason:(long long)arg2 isFullViewed:(_Bool)arg3 autoAdvanceIndex:(id)arg4 snapCount:(unsigned long long)arg5 storySessionId:(long long)arg6 unviewed:(_Bool)arg7;
- (void)onStoryStoryViewStart:(id)arg1 unviewed:(_Bool)arg2 loggingParameters:(id)arg3;
- (void)logStoryAdError:(id)arg1 withUsername:(id)arg2 viewingType:(long long)arg3 isSharedStory:(_Bool)arg4 adUnitId:(id)arg5 adRequestClientId:(id)arg6 adSkipCount:(int)arg7 adResolveTimeSec:(float)arg8;
- (void)logSkipStoryAd:(id)arg1 viewingType:(long long)arg2;
- (void)logStoryAdOpportunityWithUsername:(id)arg1 viewingType:(long long)arg2 position:(long long)arg3 isSharedStory:(_Bool)arg4 adUnitId:(id)arg5;
- (void)logStoryAdSkipToSCBackendWithReason:(long long)arg1 username:(id)arg2 viewingType:(long long)arg3 isSharedStory:(_Bool)arg4 adSnapId:(id)arg5;
- (void)logStoryAdSkipWithReason:(long long)arg1 username:(id)arg2 viewingType:(long long)arg3 position:(unsigned long long)arg4 isSharedStory:(_Bool)arg5 adUnitId:(id)arg6 adRequestClientId:(id)arg7 adSkipCount:(int)arg8 adResolveTimeSec:(float)arg9;
- (void)logSkipStoryAdAdMediaStillDownloadingWithUsername:(id)arg1 viewingType:(long long)arg2 position:(unsigned long long)arg3 isSharedStory:(_Bool)arg4 adUnitId:(id)arg5 adRequestClientId:(id)arg6 adSkipCount:(int)arg7 adResolveTimeSec:(float)arg8;
- (void)logSkipStoryAdAdStillResolvingWithUsername:(id)arg1 viewingType:(long long)arg2 isSharedStory:(_Bool)arg3 adUnitId:(id)arg4 adRequestClientId:(id)arg5 adSkipCount:(int)arg6 adResolveTimeSec:(float)arg7;
- (void)logSkipStoryAdNoFillResponseWithUsername:(id)arg1 viewingType:(long long)arg2 position:(unsigned long long)arg3 isSharedStory:(_Bool)arg4 adUnitId:(id)arg5 adRequestClientId:(id)arg6 adSkipCount:(int)arg7 adResolveTimeSec:(float)arg8;
- (void)logSkipStorySnapLegacy:(id)arg1 viewingType:(long long)arg2;
- (void)logScreenshotStorySnap:(id)arg1 viewingType:(long long)arg2;
- (void)logScreenshotStorySnapLegacy:(id)arg1 viewingType:(long long)arg2;
- (void)logViewStorySnap:(id)arg1 viewingType:(long long)arg2 storyIndex:(long long)arg3;
- (void)logViewStorySnap:(id)arg1 viewingType:(long long)arg2 exitReason:(long long)arg3 storyIndex:(long long)arg4;
- (void)logViewStorySnapLegacy:(id)arg1 viewingType:(long long)arg2 context:(id)arg3;
- (void)logPostStorySnap:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)setBackgrounded;
- (void)dealloc;
- (id)init;

@end
