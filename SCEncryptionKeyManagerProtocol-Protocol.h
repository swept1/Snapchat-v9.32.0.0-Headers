//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCClientEncryption;

@protocol SCEncryptionKeyManagerProtocol <NSObject>
- (void)setEncryptor:(SCClientEncryption *)arg1 forKey:(NSString *)arg2 kind:(NSString *)arg3;
- (SCClientEncryption *)encryptorForKey:(NSString *)arg1 kind:(NSString *)arg2;
@end

