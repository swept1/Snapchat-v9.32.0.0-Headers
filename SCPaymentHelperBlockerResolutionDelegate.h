//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCBlockerResolutionResultDelegate.h"

@class NSString;

@interface SCPaymentHelperBlockerResolutionDelegate : NSObject <SCBlockerResolutionResultDelegate>
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void).cxx_destruct;
- (void)blockerResolutionSuccessful;
- (void)blockerResolutionCancelled;
- (void)blockerResolutionFailedWithError:(id)arg1;
- (id)initWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

