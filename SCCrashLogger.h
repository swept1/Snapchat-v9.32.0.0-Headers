//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCCrashLogger : NSObject
{
}

+ (void)leaveBreadcrumb:(id)arg1;
+ (void)logHandledException:(id)arg1;
+ (void)restartServices;
+ (void)stopServices;
+ (void)initServicesWithCrashDelegate:(id)arg1;
+ (void)markLastAppCrashProcessed:(_Bool)arg1;
+ (_Bool)didUserReportLastCrashSuccessfully;

@end

