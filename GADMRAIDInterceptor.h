//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLProtocol.h"

@class NSString;

@interface GADMRAIDInterceptor : NSURLProtocol
{
    NSString *_mraidLocationToLoad;
}

+ (void)resetCanInitWithRequestCounter;
+ (void)resetToDefaultPaths;
+ (_Bool)isAllowed;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (_Bool)shouldRedirectForMRAID:(id)arg1;
+ (id)refererURLFromRequest:(id)arg1;
+ (id)expandedBannerImplementationPath;
+ (void)setExpandedBannerImplementationPath:(id)arg1;
+ (id)interstitialImplementationPath;
+ (void)setInterstitialImplementationPath:(id)arg1;
+ (id)bannerImplementationPath;
+ (void)setBannerImplementationPath:(id)arg1;
+ (void)updateImplementationsPaths;
+ (_Bool)urlIsAnImplementationPath:(id)arg1;
+ (void)initialize;
+ (void)allow;
+ (void)disallow;
+ (_Bool)canInitWithRequestIsEnabled;
+ (void)disableCanInitWithRequest;
+ (void)enableCanInitWithRequest;
+ (id)classLock;
@property(copy, nonatomic) NSString *mraidLocationToLoad; // @synthesize mraidLocationToLoad=_mraidLocationToLoad;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;

@end
