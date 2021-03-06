//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCXButtonTableViewCell.h"

#import "SCXButtonTableViewCellDelegate.h"

@class NSDictionary, NSString;

@interface SCTwoFAVerifiedDeviceCell : SCXButtonTableViewCell <SCXButtonTableViewCellDelegate>
{
    id <SCTwoFAVerifiedDeviceCellDelegate> _forgetDeviceDelegate;
    NSDictionary *_device;
}

@property(retain, nonatomic) NSDictionary *device; // @synthesize device=_device;
@property(nonatomic) __weak id <SCTwoFAVerifiedDeviceCellDelegate> forgetDeviceDelegate; // @synthesize forgetDeviceDelegate=_forgetDeviceDelegate;
- (void).cxx_destruct;
- (void)performForgetOneDevice;
- (void)pressedXButtonForCell:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

