//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIWebViewDelegate.h"
#import "WKNavigationDelegate.h"
#import "WKScriptMessageHandler.h"
#import "WKUIDelegate.h"

@class FBKVOController, NSString, NSURL, NSURLRequest, UIImage, UIWebView, WKWebView;

@interface SCOperaWebView : UIView <UIWebViewDelegate, WKNavigationDelegate, WKScriptMessageHandler, WKUIDelegate>
{
    FBKVOController *_observeController;
    _Bool _useWebKit;
    float _uiWebViewLastProgressValue;
    id <SCOperaWebViewDelegate> _delegate;
    WKWebView *_wkWebView;
    UIWebView *_uiWebView;
    NSURLRequest *_wkRequest;
    UIImage *_favicon;
    NSURL *_uiWebViewLastUrl;
}

+ (void)clearBrowserCachesAndCookies;
@property(nonatomic) float uiWebViewLastProgressValue; // @synthesize uiWebViewLastProgressValue=_uiWebViewLastProgressValue;
@property(retain, nonatomic) NSURL *uiWebViewLastUrl; // @synthesize uiWebViewLastUrl=_uiWebViewLastUrl;
@property(retain, nonatomic) UIImage *favicon; // @synthesize favicon=_favicon;
@property(retain, nonatomic) NSURLRequest *wkRequest; // @synthesize wkRequest=_wkRequest;
@property(retain, nonatomic) UIWebView *uiWebView; // @synthesize uiWebView=_uiWebView;
@property(retain, nonatomic) WKWebView *wkWebView; // @synthesize wkWebView=_wkWebView;
@property(nonatomic) _Bool useWebKit; // @synthesize useWebKit=_useWebKit;
@property(nonatomic) __weak id <SCOperaWebViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)convertFromWKNavigationType:(long long)arg1;
- (long long)convertFromUINavigationType:(long long)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webView:(id)arg1 didUpdateProgress:(float)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (double)uiWebViewProgressSimulationRandomValueBetweenMin:(long long)arg1 andMax:(long long)arg2;
- (void)uiWebViewContinueProgressSimulation;
- (void)uiWebViewBeginProgressSimulation;
- (void)uiWebView:(id)arg1 didUpdateProgress:(float)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (id)viewPrintFormatter;
- (id)scrollView;
- (id)pageTitle;
- (id)request;
- (id)URL;
- (void)reload;
- (void)stopLoading;
- (_Bool)isLoading;
- (double)estimatedProgress;
- (void)goForward;
- (void)goBack;
- (_Bool)canGoForward;
- (_Bool)canGoBack;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 configurationDict:(id)arg2 usingWebKit:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 configurationDict:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

