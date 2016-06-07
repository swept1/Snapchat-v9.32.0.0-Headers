//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SSZipArchive : NSObject
{
    NSString *_path;
    NSString *_filename;
    void *_zip;
}

+ (id)_dateWithMSDOSFormat:(unsigned int)arg1;
+ (_Bool)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2;
+ (_Bool)createZipFileAtPath:(id)arg1 withFilesAtPaths:(id)arg2;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(_Bool)arg3 password:(id)arg4 error:(id *)arg5 delegate:(id)arg6;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 delegate:(id)arg3;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(_Bool)arg3 password:(id)arg4 error:(id *)arg5;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 error:(id *)arg3;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2;
- (void).cxx_destruct;
- (_Bool)close;
- (_Bool)writeData:(id)arg1 filename:(id)arg2;
- (_Bool)writeFileAtPath:(id)arg1 withFileName:(id)arg2;
- (_Bool)writeFile:(id)arg1;
- (void)zipInfo:(CDStruct_192a48cb *)arg1 setDate:(id)arg2;
- (_Bool)open;
- (id)initWithPath:(id)arg1;

@end

