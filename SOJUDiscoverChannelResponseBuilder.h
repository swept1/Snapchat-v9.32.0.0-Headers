//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString, SOJUAdPlacementMetadata, SOJUBroadcastArticleMetadataList, SOJUSponsoredSlugPosAndText;

@interface SOJUDiscoverChannelResponseBuilder : NSObject
{
    NSString *_name;
    NSNumber *_position;
    NSNumber *_storiesPagePosition;
    NSNumber *_promotedStoriesPagePosition;
    NSString *_publisherName;
    NSString *_publisherFormalName;
    NSString *_publisherDescription;
    NSString *_publisherDeeplink;
    NSString *_filledIcon;
    NSString *_invertedIcon;
    NSString *_loadingIcon;
    NSString *_introMovie;
    NSString *_primaryColor;
    NSString *_secondaryColor;
    NSNumber *_editionId;
    NSString *_editionPublishingTimestamp;
    NSArray *_dsnapsData;
    SOJUAdPlacementMetadata *_introVideoAdMetadata;
    NSNumber *_sponsored;
    SOJUSponsoredSlugPosAndText *_sponsoredSlug;
    NSNumber *_subscribable;
    SOJUBroadcastArticleMetadataList *_tileList;
    NSString *_subscribedImage;
    NSString *_horizontalIcon;
}

+ (id)withJUDiscoverChannelResponse:(id)arg1;
- (void).cxx_destruct;
- (id)setHorizontalIcon:(id)arg1;
- (id)setSubscribedImage:(id)arg1;
- (id)setTileList:(id)arg1;
- (id)setSubscribable:(id)arg1;
- (id)setSponsoredSlug:(id)arg1;
- (id)setSponsored:(id)arg1;
- (id)setIntroVideoAdMetadata:(id)arg1;
- (id)setDsnapsData:(id)arg1;
- (id)setEditionPublishingTimestamp:(id)arg1;
- (id)setEditionId:(id)arg1;
- (id)setSecondaryColor:(id)arg1;
- (id)setPrimaryColor:(id)arg1;
- (id)setIntroMovie:(id)arg1;
- (id)setLoadingIcon:(id)arg1;
- (id)setInvertedIcon:(id)arg1;
- (id)setFilledIcon:(id)arg1;
- (id)setPublisherDeeplink:(id)arg1;
- (id)setPublisherDescription:(id)arg1;
- (id)setPublisherFormalName:(id)arg1;
- (id)setPublisherName:(id)arg1;
- (id)setPromotedStoriesPagePosition:(id)arg1;
- (id)setStoriesPagePosition:(id)arg1;
- (id)setPosition:(id)arg1;
- (id)setName:(id)arg1;
- (id)build;

@end

