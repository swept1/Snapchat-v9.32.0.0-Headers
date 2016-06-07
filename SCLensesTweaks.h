//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBTweakObserver.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class FBTweak, NSString, NSURL;

@interface SCLensesTweaks : NSObject <FBTweakObserver, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    FBTweak *_fileInputTweak;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)tweakDidChange:(id)arg1;
- (id)defaultPath;
@property(readonly, nonatomic) NSURL *fileURL;
- (_Bool)shouldProcessFileInput;
- (_Bool)shouldUsePhoneDateForScheduledLenses;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

