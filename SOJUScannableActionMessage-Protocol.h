//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"
#import "SOJUScannableAction.h"

@class NSString;

@protocol SOJUScannableActionMessage <NSObject, NSCoding, NSCopying, SOJUScannableAction>
@property(readonly, copy, nonatomic) NSString *url;
@property(readonly, copy, nonatomic) NSString *byline;
@property(readonly, copy, nonatomic) NSString *headline;
@end

