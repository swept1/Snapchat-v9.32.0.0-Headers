//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, FBKVOController, NSString, SCAlertView, SCBorderedIconView, SCTilesCollectionViewController, UIButton, UIViewController;

@interface SCPublicContentMiniProfileController : NSObject
{
    SCBorderedIconView *_borderedIconView;
    id <SCPublicContentMiniProfileControllerDelegate> _delegate;
    UIViewController *_parentViewController;
    FBKVOController *_kvoController;
    NSString *_title;
    NSString *_description;
    NSString *_deeplinkURL;
    UIButton *_shareButton;
    SCAlertView *_alertView;
    _Bool _didTapShareButton;
    _Bool _isPresented;
    id <SCPublicContentMiniProfileDataEntry> _dataEntry;
    unsigned long long _openContext;
    SCTilesCollectionViewController *_tilesController;
    NSString *_tileId;
    CALayer *_cellLayer;
    unsigned long long _channelIndex;
    struct CGPoint _cellOrigin;
}

@property(readonly, nonatomic) unsigned long long channelIndex; // @synthesize channelIndex=_channelIndex;
@property(readonly, nonatomic) struct CGPoint cellOrigin; // @synthesize cellOrigin=_cellOrigin;
@property(readonly, nonatomic) CALayer *cellLayer; // @synthesize cellLayer=_cellLayer;
@property(readonly, copy, nonatomic) NSString *tileId; // @synthesize tileId=_tileId;
@property(readonly, nonatomic) SCTilesCollectionViewController *tilesController; // @synthesize tilesController=_tilesController;
@property(nonatomic) unsigned long long openContext; // @synthesize openContext=_openContext;
@property(readonly, nonatomic) _Bool isPresented; // @synthesize isPresented=_isPresented;
@property(retain, nonatomic) id <SCPublicContentMiniProfileDataEntry> dataEntry; // @synthesize dataEntry=_dataEntry;
@property(nonatomic) __weak id <SCPublicContentMiniProfileControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateCircleCellContextInfoWithCellLayer:(id)arg1 cellOrigin:(struct CGPoint)arg2 channelIndex:(unsigned long long)arg3;
- (void)updateTileContextInfoWithTileId:(id)arg1 tilesController:(id)arg2;
- (void)_cleanUpContextInfo;
- (void)didEnterBackground;
- (void)_didTapShareButton;
- (void)_reloadData;
- (void)_channelSubscriptionDidUpdate;
- (void)presentMiniProfile;
- (void)_initSubViews;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 parentViewController:(id)arg2;

@end

