//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface UIView (SCAdditions)
- (void)sc_removeAllSubviews;
- (void)sc_enumerateDescendantsUsingBlock:(CDUnknownBlockType)arg1 stop:(_Bool *)arg2;
- (void)sc_enumerateDescendantsUsingBlock:(CDUnknownBlockType)arg1;
- (void)sc_enumerateAncestorsUsingBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) struct CGPoint sc_anchorPoint;
@property(nonatomic) struct CGPoint sc_position;
@property(nonatomic) double sc_cornerRadius;
@property(nonatomic) _Bool sc_masksToBounds;
@end

