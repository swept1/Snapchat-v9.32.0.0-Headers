//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SOJUSupportToolsHelpVideoCategoryResponse;

@interface SOJUSupportToolsHelpVideoListBuilder : NSObject
{
    SOJUSupportToolsHelpVideoCategoryResponse *_category;
    NSArray *_helpvideos;
}

+ (id)withJUSupportToolsHelpVideoList:(id)arg1;
- (void).cxx_destruct;
- (id)setHelpvideos:(id)arg1;
- (id)setCategory:(id)arg1;
- (id)build;

@end

