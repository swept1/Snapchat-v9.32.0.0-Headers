//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaLayer.h"

@class NSString, NSURL, SCOperaPage, UIColor;

@interface SCOperaLocalWebLayer : NSObject <SCOperaLayer>
{
    NSURL *_HTMLURL;
    NSString *_pageId;
    double _webpageOffsetY;
    UIColor *_subscriptionPrimaryColor;
    UIColor *_subscriptionSecondaryColor;
    NSString *_subscrptionIconKey;
    NSString *_subscribeButtonTitle;
    NSString *_unsubscribeButtonTitle;
    NSString *_loadingButtonTitle;
    NSString *_reverseLoadingButtonTitle;
    unsigned long long _subscriptionButtonState;
    SCOperaPage *_page;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
@property(readonly, nonatomic) unsigned long long subscriptionButtonState; // @synthesize subscriptionButtonState=_subscriptionButtonState;
@property(readonly, copy, nonatomic) NSString *reverseLoadingButtonTitle; // @synthesize reverseLoadingButtonTitle=_reverseLoadingButtonTitle;
@property(readonly, copy, nonatomic) NSString *loadingButtonTitle; // @synthesize loadingButtonTitle=_loadingButtonTitle;
@property(readonly, copy, nonatomic) NSString *unsubscribeButtonTitle; // @synthesize unsubscribeButtonTitle=_unsubscribeButtonTitle;
@property(readonly, copy, nonatomic) NSString *subscribeButtonTitle; // @synthesize subscribeButtonTitle=_subscribeButtonTitle;
@property(readonly, copy, nonatomic) NSString *subscrptionIconKey; // @synthesize subscrptionIconKey=_subscrptionIconKey;
@property(readonly, nonatomic) UIColor *subscriptionSecondaryColor; // @synthesize subscriptionSecondaryColor=_subscriptionSecondaryColor;
@property(readonly, nonatomic) UIColor *subscriptionPrimaryColor; // @synthesize subscriptionPrimaryColor=_subscriptionPrimaryColor;
@property(readonly, nonatomic) double webpageOffsetY; // @synthesize webpageOffsetY=_webpageOffsetY;
@property(readonly, copy, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(readonly, nonatomic) NSURL *HTMLURL; // @synthesize HTMLURL=_HTMLURL;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithProperties:(id)arg1 page:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

