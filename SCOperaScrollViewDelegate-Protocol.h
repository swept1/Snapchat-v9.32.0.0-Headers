//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCOperaScrollView;

@protocol SCOperaScrollViewDelegate <NSObject>
- (void)operaScrollViewDidTap:(SCOperaScrollView *)arg1;
- (void)operaScrollViewDidChangeContentOffsetWithDeferredCallback:(SCOperaScrollView *)arg1;
- (void)operaScrollViewDidEndScrolling:(SCOperaScrollView *)arg1;
- (void)operaScrollViewDidScroll:(SCOperaScrollView *)arg1 relativePosition:(unsigned long long)arg2;
@end
