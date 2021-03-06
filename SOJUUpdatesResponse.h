//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUUpdatesResponse.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUAdAdProductsConfig, SOJUAdSourcesConfig, SOJUAdTrackInfo, SOJUFeatureSettings, SOJUPromptMessage, SOJUResetDisabledTranscodingState;

@interface SOJUUpdatesResponse : NSObject <SOJUUpdatesResponse>
{
    NSArray *_friends;
    NSString *_friendsSyncToken;
    NSString *_friendsSyncType;
    NSArray *_addedFriends;
    NSArray *_bests;
    NSNumber *_logged;
    NSString *_username;
    NSString *_userId;
    NSNumber *_isVerifiedUser;
    NSString *_authToken;
    NSString *_deviceToken;
    NSString *_email;
    NSString *_mobile;
    NSString *_mobileVerificationKey;
    NSNumber *_enableVideoTranscodingAndroid;
    SOJUResetDisabledTranscodingState *_resetDisabledTranscodingState;
    NSNumber *_enableImageTranscoding;
    NSNumber *_transcodingProfileLevelConfigurationAndroid;
    NSNumber *_enableLensesAndroid;
    NSNumber *_enableRecordingHintAndroid;
    NSNumber *_enableFastFrameRateCameraInitializationAndroid;
    NSNumber *_gaussianBlurLevelAndroid;
    NSNumber *_enableSaveStoryToGallery;
    NSString *_birthday;
    NSNumber *_snapP;
    NSNumber *_notificationPrivacy;
    NSString *_storyPrivacy;
    NSNumber *_sent;
    NSNumber *_received;
    NSNumber *_score;
    NSNumber *_credits;
    NSArray *_snaps;
    NSArray *_recents;
    NSNumber *_lastUpdated;
    NSNumber *_addedFriendsTimestamp;
    NSNumber *_currentTimestamp;
    NSNumber *_lastReplayedSnapTimestamp;
    NSString *_snapchatPhoneNumber;
    NSNumber *_searchableByPhoneNumber;
    NSNumber *_shouldCallToVerifyNumber;
    NSNumber *_shouldTextToVerifyNumber;
    NSArray *_seenTooltips;
    NSDictionary *_clientProperties;
    NSArray *_clientPropertiesV2;
    SOJUFeatureSettings *_featureSettings;
    NSNumber *_numberOfBestFriends;
    NSDictionary *_studySettings;
    NSDictionary *_studySettingsV2;
    NSNumber *_isCashActive;
    NSString *_cashProvider;
    NSString *_cashCustomerId;
    NSString *_allowedToUseCash;
    NSString *_thirdPartyTrackingBaseUrl;
    NSString *_thirdPartyTrackingAppId;
    NSNumber *_lastAddressBookUpdatedDate;
    NSString *_qrPath;
    NSNumber *_enableLocationMediacards;
    NSNumber *_requireRefreshingProfileMedia;
    NSNumber *_shouldShowSuggestionPrompt;
    NSString *_suggestionPromptLink;
    NSString *_suggestionPromptText;
    NSString *_suggestionPromptButtonText;
    NSNumber *_suggestionPromptDurationInMillis;
    NSNumber *_videoFiltersEnabled;
    NSNumber *_imagePlayerEnabledAndroid;
    NSNumber *_speedFiltersEnabledAndroid;
    NSNumber *_reverseFilterEnabledAndroid;
    NSNumber *_smoothingFilterEnabledAndroid;
    NSNumber *_dirtyVideoRenderingEnabledAndroid;
    NSNumber *_pinnableStickersEnabledAndroid;
    NSNumber *_scMediaRecorderEnabledAndroid;
    NSNumber *_blurAfterDownscaleEnabledAndroid;
    NSNumber *_audioNoteEnabledAndroid;
    NSNumber *_videoNoteEnabledAndroid;
    NSNumber *_videoNoteApiFallbackAndroid;
    NSNumber *_chatVideoEnabledAndroid;
    NSNumber *_videoThumbnailEnabledAndroid;
    NSArray *_ourStoryAuths;
    NSDictionary *_targeting;
    SOJUAdSourcesConfig *_adSources;
    SOJUAdTrackInfo *_adTrackInfo;
    SOJUAdAdProductsConfig *_adProducts;
    NSArray *_industries;
    NSNumber *_rawThumbnailUploadEnabled;
    NSNumber *_isSmsTwoFaEnabled;
    NSNumber *_isOtpTwoFaEnabled;
    NSNumber *_isTwoFaEnabled;
    NSNumber *_twoFaVerifiedDeviceNum;
    NSArray *_twoFaVerifiedDevices;
    NSDictionary *_friendmojiMutableDict;
    NSDictionary *_friendmojiReadOnlyDict;
    NSArray *_favoriteStickers;
    NSArray *_verifiedSharedPublications;
    NSArray *_enabledIapCurrencies;
    NSArray *_enabledLensStoreCurrencies;
    SOJUPromptMessage *_clientPrompt;
    NSString *_notificationSoundSetting;
    NSString *_ringingSound;
    NSNumber *_contactsResyncRequest;
    NSNumber *_gcsSampling;
    NSNumber *_snapMediaUploadConnectionTimeout;
    NSNumber *_snapMediaUploadSoTimeout;
}

@property(readonly, copy, nonatomic) NSNumber *snapMediaUploadSoTimeout; // @synthesize snapMediaUploadSoTimeout=_snapMediaUploadSoTimeout;
@property(readonly, copy, nonatomic) NSNumber *snapMediaUploadConnectionTimeout; // @synthesize snapMediaUploadConnectionTimeout=_snapMediaUploadConnectionTimeout;
@property(readonly, copy, nonatomic) NSNumber *gcsSampling; // @synthesize gcsSampling=_gcsSampling;
@property(readonly, copy, nonatomic) NSNumber *contactsResyncRequest; // @synthesize contactsResyncRequest=_contactsResyncRequest;
@property(readonly, copy, nonatomic) NSString *ringingSound; // @synthesize ringingSound=_ringingSound;
@property(readonly, copy, nonatomic) NSString *notificationSoundSetting; // @synthesize notificationSoundSetting=_notificationSoundSetting;
@property(readonly, copy, nonatomic) SOJUPromptMessage *clientPrompt; // @synthesize clientPrompt=_clientPrompt;
@property(readonly, copy, nonatomic) NSArray *enabledLensStoreCurrencies; // @synthesize enabledLensStoreCurrencies=_enabledLensStoreCurrencies;
@property(readonly, copy, nonatomic) NSArray *enabledIapCurrencies; // @synthesize enabledIapCurrencies=_enabledIapCurrencies;
@property(readonly, copy, nonatomic) NSArray *verifiedSharedPublications; // @synthesize verifiedSharedPublications=_verifiedSharedPublications;
@property(readonly, copy, nonatomic) NSArray *favoriteStickers; // @synthesize favoriteStickers=_favoriteStickers;
@property(readonly, copy, nonatomic) NSDictionary *friendmojiReadOnlyDict; // @synthesize friendmojiReadOnlyDict=_friendmojiReadOnlyDict;
@property(readonly, copy, nonatomic) NSDictionary *friendmojiMutableDict; // @synthesize friendmojiMutableDict=_friendmojiMutableDict;
@property(readonly, copy, nonatomic) NSArray *twoFaVerifiedDevices; // @synthesize twoFaVerifiedDevices=_twoFaVerifiedDevices;
@property(readonly, copy, nonatomic) NSNumber *twoFaVerifiedDeviceNum; // @synthesize twoFaVerifiedDeviceNum=_twoFaVerifiedDeviceNum;
@property(readonly, copy, nonatomic) NSNumber *isTwoFaEnabled; // @synthesize isTwoFaEnabled=_isTwoFaEnabled;
@property(readonly, copy, nonatomic) NSNumber *isOtpTwoFaEnabled; // @synthesize isOtpTwoFaEnabled=_isOtpTwoFaEnabled;
@property(readonly, copy, nonatomic) NSNumber *isSmsTwoFaEnabled; // @synthesize isSmsTwoFaEnabled=_isSmsTwoFaEnabled;
@property(readonly, copy, nonatomic) NSNumber *rawThumbnailUploadEnabled; // @synthesize rawThumbnailUploadEnabled=_rawThumbnailUploadEnabled;
@property(readonly, copy, nonatomic) NSArray *industries; // @synthesize industries=_industries;
@property(readonly, copy, nonatomic) SOJUAdAdProductsConfig *adProducts; // @synthesize adProducts=_adProducts;
@property(readonly, copy, nonatomic) SOJUAdTrackInfo *adTrackInfo; // @synthesize adTrackInfo=_adTrackInfo;
@property(readonly, copy, nonatomic) SOJUAdSourcesConfig *adSources; // @synthesize adSources=_adSources;
@property(readonly, copy, nonatomic) NSDictionary *targeting; // @synthesize targeting=_targeting;
@property(readonly, copy, nonatomic) NSArray *ourStoryAuths; // @synthesize ourStoryAuths=_ourStoryAuths;
@property(readonly, copy, nonatomic) NSNumber *videoThumbnailEnabledAndroid; // @synthesize videoThumbnailEnabledAndroid=_videoThumbnailEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *chatVideoEnabledAndroid; // @synthesize chatVideoEnabledAndroid=_chatVideoEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *videoNoteApiFallbackAndroid; // @synthesize videoNoteApiFallbackAndroid=_videoNoteApiFallbackAndroid;
@property(readonly, copy, nonatomic) NSNumber *videoNoteEnabledAndroid; // @synthesize videoNoteEnabledAndroid=_videoNoteEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *audioNoteEnabledAndroid; // @synthesize audioNoteEnabledAndroid=_audioNoteEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *blurAfterDownscaleEnabledAndroid; // @synthesize blurAfterDownscaleEnabledAndroid=_blurAfterDownscaleEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *scMediaRecorderEnabledAndroid; // @synthesize scMediaRecorderEnabledAndroid=_scMediaRecorderEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *pinnableStickersEnabledAndroid; // @synthesize pinnableStickersEnabledAndroid=_pinnableStickersEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *dirtyVideoRenderingEnabledAndroid; // @synthesize dirtyVideoRenderingEnabledAndroid=_dirtyVideoRenderingEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *smoothingFilterEnabledAndroid; // @synthesize smoothingFilterEnabledAndroid=_smoothingFilterEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *reverseFilterEnabledAndroid; // @synthesize reverseFilterEnabledAndroid=_reverseFilterEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *speedFiltersEnabledAndroid; // @synthesize speedFiltersEnabledAndroid=_speedFiltersEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *imagePlayerEnabledAndroid; // @synthesize imagePlayerEnabledAndroid=_imagePlayerEnabledAndroid;
@property(readonly, copy, nonatomic) NSNumber *videoFiltersEnabled; // @synthesize videoFiltersEnabled=_videoFiltersEnabled;
@property(readonly, copy, nonatomic) NSNumber *suggestionPromptDurationInMillis; // @synthesize suggestionPromptDurationInMillis=_suggestionPromptDurationInMillis;
@property(readonly, copy, nonatomic) NSString *suggestionPromptButtonText; // @synthesize suggestionPromptButtonText=_suggestionPromptButtonText;
@property(readonly, copy, nonatomic) NSString *suggestionPromptText; // @synthesize suggestionPromptText=_suggestionPromptText;
@property(readonly, copy, nonatomic) NSString *suggestionPromptLink; // @synthesize suggestionPromptLink=_suggestionPromptLink;
@property(readonly, copy, nonatomic) NSNumber *shouldShowSuggestionPrompt; // @synthesize shouldShowSuggestionPrompt=_shouldShowSuggestionPrompt;
@property(readonly, copy, nonatomic) NSNumber *requireRefreshingProfileMedia; // @synthesize requireRefreshingProfileMedia=_requireRefreshingProfileMedia;
@property(readonly, copy, nonatomic) NSNumber *enableLocationMediacards; // @synthesize enableLocationMediacards=_enableLocationMediacards;
@property(readonly, copy, nonatomic) NSString *qrPath; // @synthesize qrPath=_qrPath;
@property(readonly, copy, nonatomic) NSNumber *lastAddressBookUpdatedDate; // @synthesize lastAddressBookUpdatedDate=_lastAddressBookUpdatedDate;
@property(readonly, copy, nonatomic) NSString *thirdPartyTrackingAppId; // @synthesize thirdPartyTrackingAppId=_thirdPartyTrackingAppId;
@property(readonly, copy, nonatomic) NSString *thirdPartyTrackingBaseUrl; // @synthesize thirdPartyTrackingBaseUrl=_thirdPartyTrackingBaseUrl;
@property(readonly, copy, nonatomic) NSString *allowedToUseCash; // @synthesize allowedToUseCash=_allowedToUseCash;
@property(readonly, copy, nonatomic) NSString *cashCustomerId; // @synthesize cashCustomerId=_cashCustomerId;
@property(readonly, copy, nonatomic) NSString *cashProvider; // @synthesize cashProvider=_cashProvider;
@property(readonly, copy, nonatomic) NSNumber *isCashActive; // @synthesize isCashActive=_isCashActive;
@property(readonly, copy, nonatomic) NSDictionary *studySettingsV2; // @synthesize studySettingsV2=_studySettingsV2;
@property(readonly, copy, nonatomic) NSDictionary *studySettings; // @synthesize studySettings=_studySettings;
@property(readonly, copy, nonatomic) NSNumber *numberOfBestFriends; // @synthesize numberOfBestFriends=_numberOfBestFriends;
@property(readonly, copy, nonatomic) SOJUFeatureSettings *featureSettings; // @synthesize featureSettings=_featureSettings;
@property(readonly, copy, nonatomic) NSArray *clientPropertiesV2; // @synthesize clientPropertiesV2=_clientPropertiesV2;
@property(readonly, copy, nonatomic) NSDictionary *clientProperties; // @synthesize clientProperties=_clientProperties;
@property(readonly, copy, nonatomic) NSArray *seenTooltips; // @synthesize seenTooltips=_seenTooltips;
@property(readonly, copy, nonatomic) NSNumber *shouldTextToVerifyNumber; // @synthesize shouldTextToVerifyNumber=_shouldTextToVerifyNumber;
@property(readonly, copy, nonatomic) NSNumber *shouldCallToVerifyNumber; // @synthesize shouldCallToVerifyNumber=_shouldCallToVerifyNumber;
@property(readonly, copy, nonatomic) NSNumber *searchableByPhoneNumber; // @synthesize searchableByPhoneNumber=_searchableByPhoneNumber;
@property(readonly, copy, nonatomic) NSString *snapchatPhoneNumber; // @synthesize snapchatPhoneNumber=_snapchatPhoneNumber;
@property(readonly, copy, nonatomic) NSNumber *lastReplayedSnapTimestamp; // @synthesize lastReplayedSnapTimestamp=_lastReplayedSnapTimestamp;
@property(readonly, copy, nonatomic) NSNumber *currentTimestamp; // @synthesize currentTimestamp=_currentTimestamp;
@property(readonly, copy, nonatomic) NSNumber *addedFriendsTimestamp; // @synthesize addedFriendsTimestamp=_addedFriendsTimestamp;
@property(readonly, copy, nonatomic) NSNumber *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(readonly, copy, nonatomic) NSArray *recents; // @synthesize recents=_recents;
@property(readonly, copy, nonatomic) NSArray *snaps; // @synthesize snaps=_snaps;
@property(readonly, copy, nonatomic) NSNumber *credits; // @synthesize credits=_credits;
@property(readonly, copy, nonatomic) NSNumber *score; // @synthesize score=_score;
@property(readonly, copy, nonatomic) NSNumber *received; // @synthesize received=_received;
@property(readonly, copy, nonatomic) NSNumber *sent; // @synthesize sent=_sent;
@property(readonly, copy, nonatomic) NSString *storyPrivacy; // @synthesize storyPrivacy=_storyPrivacy;
@property(readonly, copy, nonatomic) NSNumber *notificationPrivacy; // @synthesize notificationPrivacy=_notificationPrivacy;
@property(readonly, copy, nonatomic) NSNumber *snapP; // @synthesize snapP=_snapP;
@property(readonly, copy, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(readonly, copy, nonatomic) NSNumber *enableSaveStoryToGallery; // @synthesize enableSaveStoryToGallery=_enableSaveStoryToGallery;
@property(readonly, copy, nonatomic) NSNumber *gaussianBlurLevelAndroid; // @synthesize gaussianBlurLevelAndroid=_gaussianBlurLevelAndroid;
@property(readonly, copy, nonatomic) NSNumber *enableFastFrameRateCameraInitializationAndroid; // @synthesize enableFastFrameRateCameraInitializationAndroid=_enableFastFrameRateCameraInitializationAndroid;
@property(readonly, copy, nonatomic) NSNumber *enableRecordingHintAndroid; // @synthesize enableRecordingHintAndroid=_enableRecordingHintAndroid;
@property(readonly, copy, nonatomic) NSNumber *enableLensesAndroid; // @synthesize enableLensesAndroid=_enableLensesAndroid;
@property(readonly, copy, nonatomic) NSNumber *transcodingProfileLevelConfigurationAndroid; // @synthesize transcodingProfileLevelConfigurationAndroid=_transcodingProfileLevelConfigurationAndroid;
@property(readonly, copy, nonatomic) NSNumber *enableImageTranscoding; // @synthesize enableImageTranscoding=_enableImageTranscoding;
@property(readonly, copy, nonatomic) SOJUResetDisabledTranscodingState *resetDisabledTranscodingState; // @synthesize resetDisabledTranscodingState=_resetDisabledTranscodingState;
@property(readonly, copy, nonatomic) NSNumber *enableVideoTranscodingAndroid; // @synthesize enableVideoTranscodingAndroid=_enableVideoTranscodingAndroid;
@property(readonly, copy, nonatomic) NSString *mobileVerificationKey; // @synthesize mobileVerificationKey=_mobileVerificationKey;
@property(readonly, copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(readonly, copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, copy, nonatomic) NSString *deviceToken; // @synthesize deviceToken=_deviceToken;
@property(readonly, copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(readonly, copy, nonatomic) NSNumber *isVerifiedUser; // @synthesize isVerifiedUser=_isVerifiedUser;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSNumber *logged; // @synthesize logged=_logged;
@property(readonly, copy, nonatomic) NSArray *bests; // @synthesize bests=_bests;
@property(readonly, copy, nonatomic) NSArray *addedFriends; // @synthesize addedFriends=_addedFriends;
@property(readonly, copy, nonatomic) NSString *friendsSyncType; // @synthesize friendsSyncType=_friendsSyncType;
@property(readonly, copy, nonatomic) NSString *friendsSyncToken; // @synthesize friendsSyncToken=_friendsSyncToken;
@property(readonly, copy, nonatomic) NSArray *friends; // @synthesize friends=_friends;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFriends:(id)arg1 friendsSyncToken:(id)arg2 friendsSyncType:(id)arg3 addedFriends:(id)arg4 bests:(id)arg5 logged:(id)arg6 username:(id)arg7 userId:(id)arg8 isVerifiedUser:(id)arg9 authToken:(id)arg10 deviceToken:(id)arg11 email:(id)arg12 mobile:(id)arg13 mobileVerificationKey:(id)arg14 enableVideoTranscodingAndroid:(id)arg15 resetDisabledTranscodingState:(id)arg16 enableImageTranscoding:(id)arg17 transcodingProfileLevelConfigurationAndroid:(id)arg18 enableLensesAndroid:(id)arg19 enableRecordingHintAndroid:(id)arg20 enableFastFrameRateCameraInitializationAndroid:(id)arg21 gaussianBlurLevelAndroid:(id)arg22 enableSaveStoryToGallery:(id)arg23 birthday:(id)arg24 snapP:(id)arg25 notificationPrivacy:(id)arg26 storyPrivacy:(id)arg27 sent:(id)arg28 received:(id)arg29 score:(id)arg30 credits:(id)arg31 snaps:(id)arg32 recents:(id)arg33 lastUpdated:(id)arg34 addedFriendsTimestamp:(id)arg35 currentTimestamp:(id)arg36 lastReplayedSnapTimestamp:(id)arg37 snapchatPhoneNumber:(id)arg38 searchableByPhoneNumber:(id)arg39 shouldCallToVerifyNumber:(id)arg40 shouldTextToVerifyNumber:(id)arg41 seenTooltips:(id)arg42 clientProperties:(id)arg43 clientPropertiesV2:(id)arg44 featureSettings:(id)arg45 numberOfBestFriends:(id)arg46 studySettings:(id)arg47 studySettingsV2:(id)arg48 isCashActive:(id)arg49 cashProvider:(id)arg50 cashCustomerId:(id)arg51 allowedToUseCash:(id)arg52 thirdPartyTrackingBaseUrl:(id)arg53 thirdPartyTrackingAppId:(id)arg54 lastAddressBookUpdatedDate:(id)arg55 qrPath:(id)arg56 enableLocationMediacards:(id)arg57 requireRefreshingProfileMedia:(id)arg58 shouldShowSuggestionPrompt:(id)arg59 suggestionPromptLink:(id)arg60 suggestionPromptText:(id)arg61 suggestionPromptButtonText:(id)arg62 suggestionPromptDurationInMillis:(id)arg63 videoFiltersEnabled:(id)arg64 imagePlayerEnabledAndroid:(id)arg65 speedFiltersEnabledAndroid:(id)arg66 reverseFilterEnabledAndroid:(id)arg67 smoothingFilterEnabledAndroid:(id)arg68 dirtyVideoRenderingEnabledAndroid:(id)arg69 pinnableStickersEnabledAndroid:(id)arg70 scMediaRecorderEnabledAndroid:(id)arg71 blurAfterDownscaleEnabledAndroid:(id)arg72 audioNoteEnabledAndroid:(id)arg73 videoNoteEnabledAndroid:(id)arg74 videoNoteApiFallbackAndroid:(id)arg75 chatVideoEnabledAndroid:(id)arg76 videoThumbnailEnabledAndroid:(id)arg77 ourStoryAuths:(id)arg78 targeting:(id)arg79 adSources:(id)arg80 adTrackInfo:(id)arg81 adProducts:(id)arg82 industries:(id)arg83 rawThumbnailUploadEnabled:(id)arg84 isSmsTwoFaEnabled:(id)arg85 isOtpTwoFaEnabled:(id)arg86 isTwoFaEnabled:(id)arg87 twoFaVerifiedDeviceNum:(id)arg88 twoFaVerifiedDevices:(id)arg89 friendmojiMutableDict:(id)arg90 friendmojiReadOnlyDict:(id)arg91 favoriteStickers:(id)arg92 verifiedSharedPublications:(id)arg93 enabledIapCurrencies:(id)arg94 enabledLensStoreCurrencies:(id)arg95 clientPrompt:(id)arg96 notificationSoundSetting:(id)arg97 ringingSound:(id)arg98 contactsResyncRequest:(id)arg99 gcsSampling:(id)arg100 snapMediaUploadConnectionTimeout:(id)arg101 snapMediaUploadSoTimeout:(id)arg102;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

