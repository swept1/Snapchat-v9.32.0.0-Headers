//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUVerifiedUsersStoryCollaborators.h"

@class NSArray, NSNumber, NSString, SOJUVerifiedUsersVerifiedSharedPublication;

@interface SOJUVerifiedUsersStoryCollaborators : NSObject <SOJUVerifiedUsersStoryCollaborators>
{
    SOJUVerifiedUsersVerifiedSharedPublication *_verifiedUserMetadata;
    NSArray *_collaborators;
    NSNumber *_areCollaboratorsModifiable;
}

@property(readonly, copy, nonatomic) NSNumber *areCollaboratorsModifiable; // @synthesize areCollaboratorsModifiable=_areCollaboratorsModifiable;
@property(readonly, copy, nonatomic) NSArray *collaborators; // @synthesize collaborators=_collaborators;
@property(readonly, copy, nonatomic) SOJUVerifiedUsersVerifiedSharedPublication *verifiedUserMetadata; // @synthesize verifiedUserMetadata=_verifiedUserMetadata;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVerifiedUserMetadata:(id)arg1 collaborators:(id)arg2 areCollaboratorsModifiable:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

