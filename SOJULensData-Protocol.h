//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSDictionary, NSString;

@protocol SOJULensData <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *signature;
@property(readonly, copy, nonatomic) NSDictionary *hintTranslations;
@property(readonly, copy, nonatomic) NSString *hintId;
@property(readonly, copy, nonatomic) NSString *lensLink;
@property(readonly, copy, nonatomic) NSString *iconLink;
@property(readonly, copy, nonatomic) NSString *configPath;
@property(readonly, copy, nonatomic) NSString *code;
@end

