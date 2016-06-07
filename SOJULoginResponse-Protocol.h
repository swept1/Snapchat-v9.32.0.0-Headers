//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"
#import "SOJUAllUpdatesResponse.h"

@class NSArray, NSNumber, NSString, SOJUConversationsResponseInfo, SOJUDiscoverResponse, SOJUFriendsResponse, SOJUIdentityIdentityCheckResponse, SOJUIdentityVerificationNeeded, SOJUMessagingGatewayInfo, SOJUServerInfoResponse, SOJUSponsoredSlug, SOJUStoriesResponse, SOJUSupportToolsSupportToolsResponse, SOJUUpdatesResponse;

@protocol SOJULoginResponse <NSObject, NSCoding, NSCopying, SOJUAllUpdatesResponse>
@property(readonly, copy, nonatomic) NSString *reactivationStatus;
@property(readonly, copy, nonatomic) NSString *latestBackupOutBeta;
@property(readonly, copy, nonatomic) NSString *latestOutAlpha;
@property(readonly, copy, nonatomic) SOJUIdentityVerificationNeeded *verificationNeeded;
@property(readonly, copy, nonatomic) NSNumber *isOtpTwoFaEnabled;
@property(readonly, copy, nonatomic) NSNumber *isSmsTwoFaEnabled;
@property(readonly, copy, nonatomic) NSNumber *recoveryCodeUsed;
@property(readonly, copy, nonatomic) NSString *preAuthToken;
@property(readonly, copy, nonatomic) NSString *phoneNumber;
@property(readonly, copy, nonatomic) NSString *messageFormat;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, copy, nonatomic) NSNumber *twoFaNeeded;
@property(readonly, copy, nonatomic) NSString *dtoken1v;
@property(readonly, copy, nonatomic) NSString *dtoken1i;
@property(readonly, copy, nonatomic) NSNumber *status;
@property(readonly, copy, nonatomic) NSString *message;
@property(readonly, copy, nonatomic) NSString *errorField;
@property(readonly, copy, nonatomic) SOJUSupportToolsSupportToolsResponse *supportToolsResponse;
@property(readonly, copy, nonatomic) SOJUSponsoredSlug *sponsored;
@property(readonly, copy, nonatomic) SOJUIdentityIdentityCheckResponse *identityCheckResponse;
@property(readonly, copy, nonatomic) SOJUDiscoverResponse *discover;
@property(readonly, copy, nonatomic) SOJUConversationsResponseInfo *conversationsResponseInfo;
@property(readonly, copy, nonatomic) NSArray *conversationsResponse;
@property(readonly, copy, nonatomic) SOJUStoriesResponse *storiesResponse;
@property(readonly, copy, nonatomic) SOJUFriendsResponse *friendsResponse;
@property(readonly, copy, nonatomic) SOJUUpdatesResponse *updatesResponse;
@property(readonly, copy, nonatomic) SOJUMessagingGatewayInfo *messagingGatewayInfo;
@property(readonly, copy, nonatomic) SOJUServerInfoResponse *serverInfo;
@end
