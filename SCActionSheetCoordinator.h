//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIActionSheetDelegate.h"

@class NSArray, NSString, SCAlertController, UIActionSheet;

@interface SCActionSheetCoordinator : NSObject <UIActionSheetDelegate>
{
    SCAlertController *_alertController;
    UIActionSheet *_actionSheet;
    NSArray *_actions;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)present;
- (void)dealloc;
- (id)initWithActions:(id)arg1 orientationMask:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

