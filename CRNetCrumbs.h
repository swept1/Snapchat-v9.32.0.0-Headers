//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CritterImpl, NSMutableArray, NSString;

@interface CRNetCrumbs : NSObject
{
    unsigned long long _maxEndpoints;
    _Bool _isDirty;
    CritterImpl *_critterDelegate;
    NSMutableArray *_endpoints;
    NSString *_backingFile;
}

@property(retain) NSString *backingFile; // @synthesize backingFile=_backingFile;
@property(retain) NSMutableArray *endpoints; // @synthesize endpoints=_endpoints;
@property CritterImpl *critterDelegate; // @synthesize critterDelegate=_critterDelegate;
- (void)flush;
- (id)loadEndpoints;
- (void)logEndpoint:(id)arg1;
- (id)enable;
- (void)dealloc;
- (id)initWithCritterDelegate:(id)arg1 andBackingFile:(id)arg2 andMaxEndpoints:(unsigned long long)arg3;

@end

