//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADAdViewDelegate.h"

@class GADOpener, NSMutableArray, NSString;

@interface GADAdViewDelegate : NSObject <GADAdViewDelegate>
{
    _Bool _hasLoadedAtLeastOnce;
    _Bool _fileAccessAllowed;
    GADOpener *_opener;
    NSMutableArray *_gmsgHandlers;
}

@property(readonly, nonatomic) NSMutableArray *gmsgHandlers; // @synthesize gmsgHandlers=_gmsgHandlers;
@property(nonatomic, getter=isFileAccessAllowed) _Bool fileAccessAllowed; // @synthesize fileAccessAllowed=_fileAccessAllowed;
@property(nonatomic) _Bool hasLoadedAtLeastOnce; // @synthesize hasLoadedAtLeastOnce=_hasLoadedAtLeastOnce;
@property(retain, nonatomic) GADOpener *opener; // @synthesize opener=_opener;
- (void).cxx_destruct;
- (void)loadedFirstPage:(id)arg1;
- (void)adView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)adViewDidFinishLoad:(id)arg1;
- (void)adViewDidStartLoad:(id)arg1;
- (_Bool)adView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)handleGMSGRequest:(id)arg1 adView:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

