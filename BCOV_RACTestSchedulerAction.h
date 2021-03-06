//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BCOV_RACDisposable, NSDate;

@interface BCOV_RACTestSchedulerAction : NSObject
{
    NSDate *_date;
    CDUnknownBlockType _block;
    BCOV_RACDisposable *_disposable;
}

@property(readonly, nonatomic) BCOV_RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDate:(id)arg1 block:(CDUnknownBlockType)arg2;

@end

