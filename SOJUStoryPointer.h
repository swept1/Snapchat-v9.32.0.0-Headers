//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUStoryPointer.h"

@class NSString;

@interface SOJUStoryPointer : NSObject <SOJUStoryPointer>
{
    NSString *_mKey;
    NSString *_mField;
    NSString *_mId;
}

@property(readonly, copy, nonatomic) NSString *mId; // @synthesize mId=_mId;
@property(readonly, copy, nonatomic) NSString *mField; // @synthesize mField=_mField;
@property(readonly, copy, nonatomic) NSString *mKey; // @synthesize mKey=_mKey;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMKey:(id)arg1 mField:(id)arg2 mId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

