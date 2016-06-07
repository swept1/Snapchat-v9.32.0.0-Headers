//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBaseMediaMessage.h"

#import "MediaUploadDelegate.h"

@class Media, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIColor;

@interface SCDiscoverMediaMessage : SCBaseMediaMessage <MediaUploadDelegate>
{
    _Bool _linkToLongform;
    _Bool _fullScreenVidLoggedThisSession;
    _Bool _thumbnailVidLoggedThisSession;
    _Bool _failedToDecode;
    NSString *_clientId;
    NSArray *_recipients;
    NSString *_adSnapId;
    long long _blobMediaType;
    long long _caption;
    Media *_contentMedia;
    long long _drawing;
    NSString *_dSnapId;
    NSString *_editionId;
    NSString *_filterInfo;
    NSString *_filterVisual;
    Media *_overlayMedia;
    UIColor *_primaryColor;
    NSString *_publisherName;
    NSString *_publisherDisplayName;
    NSString *_publisherUniqueName;
    NSDictionary *_sendLoggingParameters;
    Media *_thumbnailMedia;
    NSString *_remoteUrl;
    NSMutableArray *_recipientsNeedingRetry;
    NSMutableDictionary *_sequenceNumbers;
    unsigned long long _numberOfFailedRetryAttempts;
    UIColor *_secondaryColor;
    struct CGRect _viewport;
}

+ (id)copyOfDiscoverMessageWithUsernames:(id)arg1 usernames:(id)arg2;
@property(nonatomic) _Bool failedToDecode; // @synthesize failedToDecode=_failedToDecode;
@property(retain, nonatomic) UIColor *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(nonatomic) unsigned long long numberOfFailedRetryAttempts; // @synthesize numberOfFailedRetryAttempts=_numberOfFailedRetryAttempts;
@property(retain, nonatomic) NSMutableDictionary *sequenceNumbers; // @synthesize sequenceNumbers=_sequenceNumbers;
@property(retain, nonatomic) NSMutableArray *recipientsNeedingRetry; // @synthesize recipientsNeedingRetry=_recipientsNeedingRetry;
@property(nonatomic) _Bool thumbnailVidLoggedThisSession; // @synthesize thumbnailVidLoggedThisSession=_thumbnailVidLoggedThisSession;
@property(nonatomic) _Bool fullScreenVidLoggedThisSession; // @synthesize fullScreenVidLoggedThisSession=_fullScreenVidLoggedThisSession;
@property(copy, nonatomic) NSString *remoteUrl; // @synthesize remoteUrl=_remoteUrl;
@property(nonatomic) struct CGRect viewport; // @synthesize viewport=_viewport;
@property(retain, nonatomic) Media *thumbnailMedia; // @synthesize thumbnailMedia=_thumbnailMedia;
@property(retain, nonatomic) NSDictionary *sendLoggingParameters; // @synthesize sendLoggingParameters=_sendLoggingParameters;
@property(copy, nonatomic) NSString *publisherUniqueName; // @synthesize publisherUniqueName=_publisherUniqueName;
@property(copy, nonatomic) NSString *publisherDisplayName; // @synthesize publisherDisplayName=_publisherDisplayName;
@property(copy, nonatomic) NSString *publisherName; // @synthesize publisherName=_publisherName;
@property(retain, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(retain, nonatomic) Media *overlayMedia; // @synthesize overlayMedia=_overlayMedia;
@property(nonatomic) _Bool linkToLongform; // @synthesize linkToLongform=_linkToLongform;
@property(copy, nonatomic) NSString *filterVisual; // @synthesize filterVisual=_filterVisual;
@property(copy, nonatomic) NSString *filterInfo; // @synthesize filterInfo=_filterInfo;
@property(copy, nonatomic) NSString *editionId; // @synthesize editionId=_editionId;
@property(copy, nonatomic) NSString *dSnapId; // @synthesize dSnapId=_dSnapId;
@property(nonatomic) long long drawing; // @synthesize drawing=_drawing;
@property(retain, nonatomic) Media *contentMedia; // @synthesize contentMedia=_contentMedia;
@property(nonatomic) long long caption; // @synthesize caption=_caption;
@property(nonatomic) long long blobMediaType; // @synthesize blobMediaType=_blobMediaType;
@property(copy, nonatomic) NSString *adSnapId; // @synthesize adSnapId=_adSnapId;
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (void).cxx_destruct;
- (void)imageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)saveDiscoverBlobWithDataDictionary:(id)arg1 withMetadataDictionary:(id)arg2 isSuccess:(_Bool)arg3 withDiscoverBlob:(id)arg4 withHandler:(CDUnknownBlockType)arg5;
- (void)unarchiveMediaData:(CDUnknownBlockType)arg1;
- (_Bool)saveMediaToDisk:(id)arg1;
- (void)imageFromCache:(CDUnknownBlockType)arg1;
- (void)setFailedAtLeastOnce;
- (_Bool)isSending;
- (id)cacheId;
- (_Bool)encrypt;
- (_Bool)persist;
- (id)encryptionDictionaryForMedia:(id)arg1;
- (id)decryptData:(id)arg1 forMedia:(id)arg2;
- (id)mediaIdForMedia:(id)arg1;
- (void)videoProcessingDidSucceedForSnapVideoFilter:(id)arg1 data:(id)arg2;
- (void)imageProcessingDidSucceedForMedia:(id)arg1;
- (id)encryptedMediaDataToUpload:(id)arg1;
- (void)mediaUploadDidFailForMedia:(id)arg1;
- (void)mediaUploadDidSucceedForMedia:(id)arg1;
- (long long)uploadMediaTypeForMedia:(id)arg1;
- (id)uploadMediaIdForMedia:(id)arg1;
- (id)indexKeyInChat;
- (CDUnknownBlockType)sendFailureBlock;
- (id)failedToSendToRecipientUsernames:(id)arg1 didFailedToSendToNonFriend:(_Bool)arg2;
- (CDUnknownBlockType)sendSuccessBlock;
- (id)pendingOrFailedRecipientUsernames;
- (id)recipientUsernames;
- (id)stringForUsernames:(id)arg1 splitter:(id)arg2;
- (id)pendingOrFailedRecipientString;
- (id)recipientString;
- (id)generateSequenceNubmers;
- (id)sendRequestParameters;
- (long long)blobTypeWithString:(id)arg1;
- (id)blobTypeString;
- (id)messageRecipient;
- (void)send;
- (void)upload;
- (id)videoURL;
- (id)videoFilename;
- (id)imageMedia;
- (_Bool)videoExistsOnDisk;
- (_Bool)readyForLinkToDiscover;
- (_Bool)readyForDisplay;
- (void)fillConversationId;
- (_Bool)containsVideo;
- (_Bool)isMediaDataLoadedInCache;
- (void)loadPersistedFailedDSnapData:(id)arg1;
- (id)sendSuccessUserDefaultsKey;
- (id)persistingFailuresURLForMedia:(id)arg1 type:(id)arg2;
- (_Bool)mediaProcessingFinishedNotUploaded;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)logEventName;
- (long long)mediaType;
- (void)updateWithDiscoverBlob:(id)arg1;
- (id)initWithDiscoverBlob:(id)arg1;
- (id)initWithUsername:(id)arg1 dictionary:(id)arg2;
- (id)initWithClientId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

