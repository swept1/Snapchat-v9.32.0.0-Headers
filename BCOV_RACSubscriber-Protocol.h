//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BCOV_RACCompoundDisposable, NSError;

@protocol BCOV_RACSubscriber <NSObject>
- (void)didSubscribeWithDisposable:(BCOV_RACCompoundDisposable *)arg1;
- (void)sendCompleted;
- (void)sendError:(NSError *)arg1;
- (void)sendNext:(id)arg1;
@end

