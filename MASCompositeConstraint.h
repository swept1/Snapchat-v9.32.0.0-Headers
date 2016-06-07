//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MASConstraint.h"

#import "MASConstraintDelegate.h"

@class NSMutableArray, NSString;

@interface MASCompositeConstraint : MASConstraint <MASConstraintDelegate>
{
    id _mas_key;
    NSMutableArray *_childConstraints;
}

@property(retain, nonatomic) NSMutableArray *childConstraints; // @synthesize childConstraints=_childConstraints;
@property(retain, nonatomic) id mas_key; // @synthesize mas_key=_mas_key;
- (void).cxx_destruct;
- (void)uninstall;
- (void)install;
- (void)setCenterOffset:(struct CGPoint)arg1;
- (void)setSizeOffset:(struct CGSize)arg1;
- (void)setOffset:(double)arg1;
- (void)setInsets:(struct UIEdgeInsets)arg1;
- (CDUnknownBlockType)key;
- (id)addConstraintWithLayoutAttribute:(long long)arg1;
- (CDUnknownBlockType)equalToWithRelation;
- (CDUnknownBlockType)priority;
- (CDUnknownBlockType)dividedBy;
- (CDUnknownBlockType)multipliedBy;
- (id)constraint:(id)arg1 addConstraintWithLayoutAttribute:(long long)arg2;
- (void)constraint:(id)arg1 shouldBeReplacedWithConstraint:(id)arg2;
- (id)initWithChildren:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

