//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MediaDataSource.h"
#import "MediaDelegate.h"

@class Media, NSString, NSURL, SCDiscoverVideoCatalog, UIImage;

@interface SCHelpVideo : NSObject <MediaDataSource, MediaDelegate>
{
    long long _thumbnailMediaState;
    NSURL *_thumbnailURL;
    Media *_thumbnailMedia;
    UIImage *_thumbnailImage;
    long long _firstFrameMediaState;
    NSURL *_firstFrameURL;
    Media *_firstFrameMedia;
    NSString *_videoId;
    SCDiscoverVideoCatalog *_videoCatalog;
    NSString *_videoTitle;
    NSString *_videoDescription;
    NSString *_videoCategory;
    long long _videoPosition;
}

@property(nonatomic) long long videoPosition; // @synthesize videoPosition=_videoPosition;
@property(retain, nonatomic) NSString *videoCategory; // @synthesize videoCategory=_videoCategory;
@property(retain, nonatomic) NSString *videoDescription; // @synthesize videoDescription=_videoDescription;
@property(retain, nonatomic) NSString *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(retain, nonatomic) SCDiscoverVideoCatalog *videoCatalog; // @synthesize videoCatalog=_videoCatalog;
@property(retain, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(retain, nonatomic) Media *firstFrameMedia; // @synthesize firstFrameMedia=_firstFrameMedia;
@property(retain, nonatomic) NSURL *firstFrameURL; // @synthesize firstFrameURL=_firstFrameURL;
@property(nonatomic) long long firstFrameMediaState; // @synthesize firstFrameMediaState=_firstFrameMediaState;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(retain, nonatomic) Media *thumbnailMedia; // @synthesize thumbnailMedia=_thumbnailMedia;
@property(retain, nonatomic) NSURL *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(nonatomic) long long thumbnailMediaState; // @synthesize thumbnailMediaState=_thumbnailMediaState;
- (void).cxx_destruct;
- (void)imageFromMedia:(id)arg1;
- (void)fetchMediaDidSucceedForMedia:(id)arg1;
- (void)fetchMediaBadRequestForMedia:(id)arg1;
- (void)fetchMediaNotFoundForMedia:(id)arg1;
- (void)fetchMediaDidCancelForMedia:(id)arg1;
- (void)fetchMediaDidFailForMedia:(id)arg1;
- (void)fetchMediaIsLoadingForMedia:(id)arg1 userInitiated:(_Bool)arg2;
- (id)requestContexts;
- (_Bool)needsAuthToFetch;
- (_Bool)encrypt;
- (_Bool)persist;
- (id)encryptionDictionaryForMedia:(id)arg1;
- (id)decryptData:(id)arg1 forMedia:(id)arg2;
- (id)mediaIdForMedia:(id)arg1;
- (id)URLForMedia:(id)arg1;
- (void)fetchFirstFrameWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchThumbnailWithCompletion:(CDUnknownBlockType)arg1;
- (void)setupThumbnailMedia;
- (id)initWithJsonDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
