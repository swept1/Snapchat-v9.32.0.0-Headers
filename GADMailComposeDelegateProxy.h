//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFMailComposeViewControllerDelegate.h"

@class MFMailComposeViewController, NSString;

@interface GADMailComposeDelegateProxy : NSObject <MFMailComposeViewControllerDelegate>
{
    GADMailComposeDelegateProxy *_strongSelf;
    id <MFMailComposeViewControllerDelegate> _mailComposeDelegate;
    MFMailComposeViewController *_mailComposeViewController;
}

+ (id)associatedDelegateProxyForController:(id)arg1;
@property(retain, nonatomic) MFMailComposeViewController *mailComposeViewController; // @synthesize mailComposeViewController=_mailComposeViewController;
@property(nonatomic) __weak id <MFMailComposeViewControllerDelegate> mailComposeDelegate; // @synthesize mailComposeDelegate=_mailComposeDelegate;
- (void).cxx_destruct;
- (void)stopProxying;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (id)initInternal;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

