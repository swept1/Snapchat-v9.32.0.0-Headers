//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUSponsoredSlug.h"

@class NSString, SOJUSponsoredSlugPosAndText, SOJUSponsoredSlugStyle;

@interface SOJUSponsoredSlug : NSObject <SOJUSponsoredSlug>
{
    SOJUSponsoredSlugStyle *_style;
    SOJUSponsoredSlugPosAndText *_defaultValues;
}

@property(readonly, copy, nonatomic) SOJUSponsoredSlugPosAndText *defaultValues; // @synthesize defaultValues=_defaultValues;
@property(readonly, copy, nonatomic) SOJUSponsoredSlugStyle *style; // @synthesize style=_style;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStyle:(id)arg1 defaultValues:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

