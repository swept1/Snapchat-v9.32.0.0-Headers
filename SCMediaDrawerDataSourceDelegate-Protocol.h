//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexSet, SCUserSession;

@protocol SCMediaDrawerDataSourceDelegate <NSObject>
- (SCUserSession *)userSession;
- (void)mediaListDidChangeAtIndexes:(NSIndexSet *)arg1;
@end

