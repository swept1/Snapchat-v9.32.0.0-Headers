//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SWTableViewCell.h"

@class Friend, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;

@interface AddFriendCell : SWTableViewCell
{
    int _addFriendCellType;
    int _style;
    Friend *_friend;
    id <AddFriendCellDelegate> _addDelegate;
    UIView *_profileImagesContainer;
    UIImageView *_profileImageView;
    UIImageView *_ghostCodeView;
    UILabel *_nameLabel;
    UILabel *_subLabel;
    UIButton *_addFriendButton;
    UIButton *_infoButton;
    UIButton *_settingsGearButton;
    UIActivityIndicatorView *_loadingIndicator;
}

@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UIButton *settingsGearButton; // @synthesize settingsGearButton=_settingsGearButton;
@property(retain, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) UIButton *addFriendButton; // @synthesize addFriendButton=_addFriendButton;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *ghostCodeView; // @synthesize ghostCodeView=_ghostCodeView;
@property(retain, nonatomic) UIImageView *profileImageView; // @synthesize profileImageView=_profileImageView;
@property(retain, nonatomic) UIView *profileImagesContainer; // @synthesize profileImagesContainer=_profileImagesContainer;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) __weak id <AddFriendCellDelegate> addDelegate; // @synthesize addDelegate=_addDelegate;
@property(nonatomic) int addFriendCellType; // @synthesize addFriendCellType=_addFriendCellType;
@property(retain, nonatomic) Friend *friend; // @synthesize friend=_friend;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)pointInsideAddFriendButton:(struct CGPoint)arg1;
- (id)getTableView;
- (void)settingsGearPressed;
- (void)addFriendPressed;
- (void)setAlreadyAdded:(_Bool)arg1 addFriendCellType:(int)arg2;
- (void)setNameLabelText:(id)arg1;
- (void)setNeedsInfoButton:(_Bool)arg1;
- (void)setLoadingIndicatorWith:(int)arg1;
- (void)setFriend:(id)arg1 alreadyAdded:(_Bool)arg2;
- (void)setFriend:(id)arg1 alreadyAdded:(_Bool)arg2 pendingSnapsCount:(unsigned long long)arg3 key:(id)arg4 inPage:(id)arg5 isSearched:(_Bool)arg6;
- (void)setFriend:(id)arg1 alreadyAdded:(_Bool)arg2 pendingSnapsCount:(unsigned long long)arg3 key:(id)arg4 inPage:(id)arg5;
- (void)setFriend:(id)arg1 alreadyAdded:(_Bool)arg2 pendingFriendSourceString:(id)arg3 key:(id)arg4 inPage:(id)arg5;
- (void)setLabelFramesForKey:(id)arg1 inPage:(id)arg2;
- (void)infoButtonPressed;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 key:(id)arg3 page:(id)arg4;

@end
