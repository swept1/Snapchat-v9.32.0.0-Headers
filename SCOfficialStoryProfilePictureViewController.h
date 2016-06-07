//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCManagedCapturerListener.h"
#import "SCProfilePictureControllerDelegate.h"
#import "SCProfileViewDelegate.h"

@class NSMutableArray, NSString, SCLoadingIndicatorView, SCManagedCapturerState, SCProfileImages, SCProfilePictureController, SCProfileView, UILabel, UIView;

@interface SCOfficialStoryProfilePictureViewController : UIViewController <SCManagedCapturerListener, SCProfilePictureControllerDelegate, SCProfileViewDelegate>
{
    SCManagedCapturerState *_managedCapturerState;
    NSString *_capturerToken;
    _Bool _isCapturingProfileImages;
    UIView *_cameraView;
    SCLoadingIndicatorView *_loadingIndicator;
    UILabel *_loadingLabel;
    NSString *_officialStoryUsername;
    NSString *_officialStoryDisplayName;
    SCProfileImages *_officialStoryProfileImages;
    SCProfileView *_profileView;
    SCProfilePictureController *_profilePictureController;
    NSMutableArray *_profileImages;
    unsigned long long _sessionCount;
}

@property(nonatomic) unsigned long long sessionCount; // @synthesize sessionCount=_sessionCount;
@property _Bool isCapturingProfileImages; // @synthesize isCapturingProfileImages=_isCapturingProfileImages;
@property(retain, nonatomic) NSMutableArray *profileImages; // @synthesize profileImages=_profileImages;
@property(retain, nonatomic) SCProfilePictureController *profilePictureController; // @synthesize profilePictureController=_profilePictureController;
@property(retain, nonatomic) SCProfileView *profileView; // @synthesize profileView=_profileView;
@property(retain, nonatomic) SCProfileImages *officialStoryProfileImages; // @synthesize officialStoryProfileImages=_officialStoryProfileImages;
@property(retain, nonatomic) NSString *officialStoryDisplayName; // @synthesize officialStoryDisplayName=_officialStoryDisplayName;
@property(retain, nonatomic) NSString *officialStoryUsername; // @synthesize officialStoryUsername=_officialStoryUsername;
@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) SCLoadingIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UIView *cameraView; // @synthesize cameraView=_cameraView;
- (void).cxx_destruct;
- (void)shareUsernameButtonPressed;
- (void)snapcodeHelpButtonPressed;
- (void)trophyButtonPressed;
- (void)snapCodeButtonPressed;
- (void)displayNamePressed;
- (void)hideProfileButtonPressed;
- (void)settingsButtonPressed;
- (void)myFriendsButtonPressed;
- (void)addFriendsButtonPressed;
- (void)recentFriendsButtonPressed;
- (void)shareImages:(id)arg1 SCSharedSnapcodeView:(id)arg2;
- (void)_resetProfileView;
- (void)_resetForTakingProfileImages:(unsigned long long)arg1;
- (void)_endTakingProfilePictures:(unsigned long long)arg1;
- (void)_tryCapturingProfileImages;
- (void)captureProfileImages;
- (_Bool)shouldEnableSnapcodeButton;
- (void)closeSnapCodeCamera;
- (void)managedCapturer:(id)arg1 didChangeState:(id)arg2;
- (void)_refreshSnapcodeAndProfileImages:(id)arg1;
- (void)_enlargeSnapcode;
- (void)_disableFrontFlash;
- (void)_setupProfileImagesCapturer;
- (void)_startCamera;
- (void)_viewDidEnterBackground;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithUsername:(id)arg1 displayName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

