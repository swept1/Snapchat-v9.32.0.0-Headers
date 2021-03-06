//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol AVCameraViewControllerDelegate <NSObject>
- (void)friendPressed;
- (void)feedPressed;

@optional
- (void)toggleButtonVisibility:(_Bool)arg1 animated:(_Bool)arg2;
- (void)didLensesDetected:(_Bool)arg1;
- (void)didEndLongPressing:(_Bool)arg1;
- (void)didBeginLongPressing:(_Bool)arg1;
- (void)didExitReplyMode;
- (void)willEnterReplyMode;
- (void)didEndRecording;
- (void)didBeginRecording;
@end

