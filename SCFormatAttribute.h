//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAttribute.h"

#import "NSCoding.h"

@class NSString;

@interface SCFormatAttribute : SCAttribute <NSCoding>
{
    NSString *_formatType;
}

@property(copy, nonatomic) NSString *formatType; // @synthesize formatType=_formatType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)attributeType;
- (id)attributeParameters;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFormatType:(id)arg1;

@end

