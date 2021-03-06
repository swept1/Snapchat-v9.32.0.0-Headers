//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString, SOJUAdPlacementMetadata, SOJUCaption, SOJUSponsoredSlugPosAndText, SOJUSponsoredStoryMetadata, SOJUStoryFrame;

@interface SOJUStoryBuilder : NSObject
{
    NSString *_idValue;
    NSString *_username;
    NSNumber *_matureContent;
    NSString *_clientId;
    NSNumber *_timestamp;
    SOJUStoryFrame *_framing;
    NSString *_mediaId;
    NSString *_mediaKey;
    NSString *_mediaUrl;
    NSString *_mediaIv;
    NSString *_thumbnailIv;
    NSString *_thumbnailUrl;
    NSNumber *_mediaType;
    NSNumber *_time;
    NSNumber *_timeLeft;
    NSString *_captionTextDisplay;
    SOJUCaption *_caption;
    NSNumber *_zipped;
    NSString *_filterId;
    NSArray *_unlockables;
    NSString *_storyFilterId;
    SOJUSponsoredStoryMetadata *_sponsoredStoryMetadata;
    NSNumber *_isShared;
    SOJUAdPlacementMetadata *_adPlacementMetadata;
    NSNumber *_needsAuth;
    NSNumber *_adCanFollow;
    NSNumber *_isSponsored;
    SOJUSponsoredSlugPosAndText *_sponsoredSlug;
    NSString *_submissionId;
    NSString *_encGeoData;
}

+ (id)withJUStory:(id)arg1;
- (void).cxx_destruct;
- (id)setEncGeoData:(id)arg1;
- (id)setSubmissionId:(id)arg1;
- (id)setSponsoredSlug:(id)arg1;
- (id)setIsSponsored:(id)arg1;
- (id)setAdCanFollow:(id)arg1;
- (id)setNeedsAuth:(id)arg1;
- (id)setAdPlacementMetadata:(id)arg1;
- (id)setIsShared:(id)arg1;
- (id)setSponsoredStoryMetadata:(id)arg1;
- (id)setStoryFilterId:(id)arg1;
- (id)setUnlockables:(id)arg1;
- (id)setFilterId:(id)arg1;
- (id)setZipped:(id)arg1;
- (id)setCaption:(id)arg1;
- (id)setCaptionTextDisplay:(id)arg1;
- (id)setTimeLeft:(id)arg1;
- (id)setTime:(id)arg1;
- (id)setMediaType:(id)arg1;
- (id)setThumbnailUrl:(id)arg1;
- (id)setThumbnailIv:(id)arg1;
- (id)setMediaIv:(id)arg1;
- (id)setMediaUrl:(id)arg1;
- (id)setMediaKey:(id)arg1;
- (id)setMediaId:(id)arg1;
- (id)setFraming:(id)arg1;
- (id)setTimestamp:(id)arg1;
- (id)setClientId:(id)arg1;
- (id)setMatureContent:(id)arg1;
- (id)setUsername:(id)arg1;
- (id)setIdValue:(id)arg1;
- (id)build;

@end

