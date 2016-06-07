//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface NBNumberFormat : NSObject
{
    _Bool nationalPrefixOptionalWhenFormatting;
    NSString *pattern;
    NSString *format;
    NSMutableArray *leadingDigitsPatterns;
    NSString *nationalPrefixFormattingRule;
    NSString *domesticCarrierCodeFormattingRule;
}

@property(retain, nonatomic) NSString *domesticCarrierCodeFormattingRule; // @synthesize domesticCarrierCodeFormattingRule;
@property(nonatomic) _Bool nationalPrefixOptionalWhenFormatting; // @synthesize nationalPrefixOptionalWhenFormatting;
@property(retain, nonatomic) NSString *nationalPrefixFormattingRule; // @synthesize nationalPrefixFormattingRule;
@property(retain, nonatomic) NSMutableArray *leadingDigitsPatterns; // @synthesize leadingDigitsPatterns;
@property(retain, nonatomic) NSString *format; // @synthesize format;
@property(retain, nonatomic) NSString *pattern; // @synthesize pattern;
- (void).cxx_destruct;
- (void)setData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)stringArrayFromData:(id)arg1;
- (id)init;
- (id)initWithData:(id)arg1;

@end

