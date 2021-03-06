//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCLeftSwipableViewController.h"

#import "SCFriendProfileCellViewDelegate.h"
#import "SCHeaderDataSource.h"
#import "SCHeaderDelegate.h"
#import "SCMiniProfileControllerDelegate.h"
#import "SCSearchFriendsSubViewControllerDelegate.h"
#import "SCTimeProfilable.h"
#import "SCVerifiedUserSearcherDelegate.h"
#import "SendTextControllerDelegate.h"

@class AddFriendsDelegateObject, Friend, NSArray, NSMutableSet, NSString, SCFriendLongPressGestureRecognizer, SCHeader, SCMiniProfileController, SCSearchFriendsSubViewController, SCUserSession, SCVerifiedUserSearcher, UITapGestureRecognizer, UIView;

@interface SCAddFriendViewController : SCLeftSwipableViewController <SCMiniProfileControllerDelegate, SCFriendProfileCellViewDelegate, SCTimeProfilable, SCHeaderDataSource, SCHeaderDelegate, SCSearchFriendsSubViewControllerDelegate, SendTextControllerDelegate, SCVerifiedUserSearcherDelegate>
{
    id <SCStartChatDelegate> _startChatDelegate;
    id <SendSnapNavigationControllerDelegate> _sendSnapNavigationControllerDelegate;
    SCUserSession *_userSession;
    SCMiniProfileController *_miniProfileController;
    SCFriendLongPressGestureRecognizer *_longPressGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSMutableSet *_nonFriendsShown;
    NSMutableSet *_friendsShownWithDisplayPic;
    NSMutableSet *_friendsAdded;
    NSMutableSet *_friendsAddedWithDisplayPic;
    _Bool _hasInteractedWithTable;
    _Bool _hasTappedOnFriendSinceSearch;
    _Bool _isFromQuickAction;
    SCHeader *_header;
    AddFriendsDelegateObject *_addFriendsDelegate;
    SCSearchFriendsSubViewController *_searchFriendsSVC;
    UIView *_container;
    Friend *_friendBeingInvited;
    NSMutableSet *_temporarilyAddedFriends;
    SCVerifiedUserSearcher *_verifiedUserSearcher;
    NSArray *_verifiedUserResults;
    long long _searchFieldKeyStrokeCount;
    long long _hiddenFriendCount;
    long long _pendingFriendCount;
    long long _nonFriendCount;
    long long _currentFriendCount;
    long long _verifiedFriendCount;
    long long _parentView;
}

+ (long long)context;
+ (id)profiledSelectorNames;
+ (id)searchContext;
+ (id)addFriendsContext;
@property(nonatomic) _Bool isFromQuickAction; // @synthesize isFromQuickAction=_isFromQuickAction;
@property(nonatomic) long long parentView; // @synthesize parentView=_parentView;
@property(nonatomic) long long verifiedFriendCount; // @synthesize verifiedFriendCount=_verifiedFriendCount;
@property(nonatomic) long long currentFriendCount; // @synthesize currentFriendCount=_currentFriendCount;
@property(nonatomic) long long nonFriendCount; // @synthesize nonFriendCount=_nonFriendCount;
@property(nonatomic) long long pendingFriendCount; // @synthesize pendingFriendCount=_pendingFriendCount;
@property(nonatomic) long long hiddenFriendCount; // @synthesize hiddenFriendCount=_hiddenFriendCount;
@property(nonatomic) long long searchFieldKeyStrokeCount; // @synthesize searchFieldKeyStrokeCount=_searchFieldKeyStrokeCount;
@property(nonatomic) _Bool hasTappedOnFriendSinceSearch; // @synthesize hasTappedOnFriendSinceSearch=_hasTappedOnFriendSinceSearch;
@property(retain, nonatomic) NSArray *verifiedUserResults; // @synthesize verifiedUserResults=_verifiedUserResults;
@property(retain, nonatomic) SCVerifiedUserSearcher *verifiedUserSearcher; // @synthesize verifiedUserSearcher=_verifiedUserSearcher;
@property(retain, nonatomic) NSMutableSet *temporarilyAddedFriends; // @synthesize temporarilyAddedFriends=_temporarilyAddedFriends;
@property(retain) Friend *friendBeingInvited; // @synthesize friendBeingInvited=_friendBeingInvited;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(retain, nonatomic) SCSearchFriendsSubViewController *searchFriendsSVC; // @synthesize searchFriendsSVC=_searchFriendsSVC;
@property(nonatomic) _Bool hasInteractedWithTable; // @synthesize hasInteractedWithTable=_hasInteractedWithTable;
@property(retain, nonatomic) AddFriendsDelegateObject *addFriendsDelegate; // @synthesize addFriendsDelegate=_addFriendsDelegate;
@property(retain, nonatomic) SCHeader *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (_Bool)_isAddByUsernameSection:(id)arg1;
- (id)_pagenameForPageView;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)didDisplayProfilePictureOnCellView:(id)arg1 onThumbnail:(id)arg2 friend:(id)arg3;
- (void)friendProfileCellView:(id)arg1 addFriendPressed:(id)arg2 friend:(id)arg3;
- (id)getAddSourceTypeForFriend:(id)arg1 controller:(id)arg2;
- (id)userSession;
- (void)didSendSnap:(id)arg1 controller:(id)arg2;
- (void)didPressChatButtonForFriend:(id)arg1 controller:(id)arg2;
- (_Bool)_canShowMiniProfile:(id)arg1 indexPath:(id)arg2;
- (void)_presentMiniProfile:(id)arg1;
- (void)_tap:(id)arg1;
- (void)_longPress:(id)arg1;
- (void)_initGestures;
- (_Bool)shouldPopToRootViewControllerLater;
- (_Bool)shouldPopToRootViewController;
- (void)setKeyStrokeCount:(long long)arg1;
- (long long)keyStrokeCount;
- (long long)getProfilePageType;
- (void)resetFriendFilter;
- (long long)_getButtonStateWithProcessingType:(unsigned long long)arg1;
- (id)_getFriendProfileCellForFriend:(id)arg1 onTableView:(id)arg2 atIndexPath:(id)arg3;
- (id)cellForModelView:(id)arg1 onTableView:(id)arg2 forRowAtindexPath:(id)arg3;
- (id)sectionNameForSectionEnum:(unsigned long long)arg1;
- (id)getSearchResultsBySection:(id)arg1 withSearchText:(id)arg2;
- (id)pageName;
- (void)performServerSearchIfNeeded:(id)arg1;
- (void)friendSearcherDidUpdateResultsForQuery:(id)arg1;
- (void)sendTextController:(id)arg1 completedWithStatus:(int)arg2;
- (void)leftButtonPressed;
- (id)textColorForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)titleForHeader:(id)arg1;
- (void)leftSwipeSucceed;
- (_Bool)inValidView:(id)arg1;
- (void)handleChangeToFindFriendsResults:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeFindFriendsObservers;
- (void)addFindFriendsObservers;
- (void)reloadData;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithSendSnapNavigationControllerDelegate:(id)arg1 startChatDelegate:(id)arg2 userSession:(id)arg3 parentView:(long long)arg4;
- (id)getPageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

