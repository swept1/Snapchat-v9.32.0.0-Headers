//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol DDLogFileManager <NSObject>
@property unsigned long long logFilesDiskQuota;
@property unsigned long long maximumNumberOfLogFiles;
- (NSString *)createNewLogFile;
- (NSArray *)sortedLogFileInfos;
- (NSArray *)sortedLogFileNames;
- (NSArray *)sortedLogFilePaths;
- (NSArray *)unsortedLogFileInfos;
- (NSArray *)unsortedLogFileNames;
- (NSArray *)unsortedLogFilePaths;
- (NSString *)logsDirectory;

@optional
- (void)didRollAndArchiveLogFile:(NSString *)arg1;
- (void)didArchiveLogFile:(NSString *)arg1;
@end

