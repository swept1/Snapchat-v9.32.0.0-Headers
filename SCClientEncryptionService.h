//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCEncryptionKeyManagerProtocol.h"

@class NSString, SCClientEncryption;

@interface SCClientEncryptionService : NSObject <SCEncryptionKeyManagerProtocol>
{
    SCClientEncryption *_encryptor;
}

+ (id)path;
+ (id)shared;
@property(readonly, nonatomic) SCClientEncryption *encryptor; // @synthesize encryptor=_encryptor;
- (void).cxx_destruct;
- (id)encryptorForKey:(id)arg1 kind:(id)arg2;
- (void)setEncryptor:(id)arg1 forKey:(id)arg2 kind:(id)arg3;
- (_Bool)_saveState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

