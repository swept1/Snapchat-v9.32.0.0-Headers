//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCLevelViewController.h"

@class NSString;

@interface SCStoryLoadingViewController : UIViewController <SCLevelViewController>
{
    NSString *_title;
}

- (void).cxx_destruct;
- (void)setLevelViewControllerDelegate:(id)arg1;
- (id)nextLevelController;
- (void)loadView;
- (id)initWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

