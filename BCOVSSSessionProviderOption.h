//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BCOVSSResourcePolicy;

@interface BCOVSSSessionProviderOption : NSObject
{
    BCOVSSResourcePolicy *_resourcePolicy;
    CDUnknownBlockType _shouldInsertSubtitle;
}

@property(copy, nonatomic) CDUnknownBlockType shouldInsertSubtitle; // @synthesize shouldInsertSubtitle=_shouldInsertSubtitle;
@property(retain, nonatomic) BCOVSSResourcePolicy *resourcePolicy; // @synthesize resourcePolicy=_resourcePolicy;
- (void).cxx_destruct;
- (id)init;

@end
