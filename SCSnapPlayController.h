//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TTTAttributedLabelDelegate.h"

@class NSString, Snap, UIViewController<SCSnapPlayContainer>;

@interface SCSnapPlayController : NSObject <TTTAttributedLabelDelegate>
{
    UIViewController<SCSnapPlayContainer> *_containerViewController;
    long long _containerViewType;
    Snap *_replaySnap;
    NSString *_lastReplayedSnapStackId;
    id <SCSnapPlayDelegate> _delegate;
    Snap *_visibleSnap;
}

+ (id)shared;
@property(retain, nonatomic) Snap *replaySnap; // @synthesize replaySnap=_replaySnap;
@property(retain, nonatomic) Snap *visibleSnap; // @synthesize visibleSnap=_visibleSnap;
@property(nonatomic) __weak id <SCSnapPlayDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getPageViewName;
- (void)snapFailedToPlay:(id)arg1 withError:(id)arg2;
- (void)showReplayCreditUpdatePrompt;
- (void)changeSnapOrSnapStackStateWithFirstSnap:(id)arg1 state:(long long)arg2;
- (void)replaySnapOrSnapStackWithAnimatingSnap:(id)arg1 isPaidToReplay:(_Bool)arg2;
- (id)replayableSnapsForUsername:(id)arg1;
- (void)resetWaitingUpdateCreditsSnaps;
- (void)showFreeReplayAlertView:(id)arg1;
- (void)promptReplaySnap:(id)arg1 animatingSnap:(id)arg2;
- (void)didTakeScreenshot:(id)arg1;
- (void)_saveSnapToGalleryWithUserSession:(id)arg1;
- (void)exitMediaViewWithVisibleSnap;
- (void)snapExpired:(id)arg1;
- (void)clearLoadedReplayedSnapAfterHidingSnap:(id)arg1;
- (void)hideSnap:(id)arg1;
- (void)showSnap:(id)arg1;
- (id)sourceTypeString;
- (void)skipVisibleSnap;
- (_Bool)showingMediaView;
- (_Bool)isPlayingSnap;
- (id)visibleSnapUsername;
- (id)mediaView;
- (void)visibleSnapTimeleftChanged:(id)arg1;
- (void)snapStateChanged:(id)arg1 toSnap:(id)arg2;
- (void)observeVisibleSnap:(id)arg1;
- (void)unobserveVisibleSnap:(id)arg1;
- (void)resetFields;
- (void)dealloc;
- (void)switchToContainerVC:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

