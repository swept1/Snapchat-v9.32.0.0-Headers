//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface SOJUMediaCardAttributeBuilder : NSObject
{
    NSNumber *_start;
    NSNumber *_end;
    NSString *_type;
    NSString *_url;
}

+ (id)withJUMediaCardAttribute:(id)arg1;
- (void).cxx_destruct;
- (id)setUrl:(id)arg1;
- (id)setType:(id)arg1;
- (id)setEnd:(id)arg1;
- (id)setStart:(id)arg1;
- (id)build;

@end

