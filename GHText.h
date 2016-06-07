//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GHRenderableObject.h"

#import "GHPathDescription.h"

@class NSArray, NSString;

@interface GHText : GHRenderableObject <GHPathDescription>
{
    struct __CTFontDescriptor *_fontDescriptor;
    struct __CTFont *_fontRef;
    NSArray *_children;
    NSArray *_contents;
    NSString *_fillDescription;
    NSString *_strokeDescription;
    double _strokeWidth;
}

@property(readonly, nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(readonly, nonatomic) NSString *strokeDescription; // @synthesize strokeDescription=_strokeDescription;
@property(readonly, nonatomic) NSString *fillDescription; // @synthesize fillDescription=_fillDescription;
@property(readonly, nonatomic) NSArray *contents; // @synthesize contents=_contents;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupFontDescriptorWithBaseDescriptor:(struct __CTFontDescriptor *)arg1 andBaseFont:(struct __CTFont *)arg2;
- (unsigned int)getClippingTypeWithSVGContext:(id)arg1;
- (struct CGRect)getBoundingBoxWithSVGContext:(id)arg1;
- (void)renderIntoContext:(struct CGContext *)arg1 withSVGContext:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)calculatedHash;
- (id)initWithDictionary:(id)arg1;
- (void)addGlyphsToArray:(id)arg1 withSVGContext:(id)arg2;
@property(readonly, nonatomic) NSArray *children; // @synthesize children=_children;
@property(readonly, nonatomic) struct __CTFont *fontRef; // @synthesize fontRef=_fontRef;
@property(readonly, nonatomic) struct __CTFontDescriptor *fontDescriptor; // @synthesize fontDescriptor=_fontDescriptor;
- (_Bool)cleanLineEndings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

