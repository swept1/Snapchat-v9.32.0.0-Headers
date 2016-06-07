//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCSnapSaver : NSObject
{
}

+ (id)shared;
- (id)_fetchSnapchatAlbums;
- (void)logSnapSaveEventWithError:(id)arg1 context:(id)arg2 isVideo:(_Bool)arg3 isVideoFiltered:(_Bool)arg4 videoDuration:(double)arg5 otherParameters:(id)arg6;
- (void)logSnapSaveEventStart:(id)arg1;
- (void)logAlbumPhotoCount:(unsigned long long)arg1 videoCount:(unsigned long long)arg2 albumCounts:(id)arg3;
- (void)fetchAndLogAlbumSize;
- (void)finishedSavingToAlbumWithError:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)saveAsset:(id)arg1 toALAssetsGroup:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)saveToAlbumUsingALAssetsLibraryWithAssetURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)saveAsset:(id)arg1 toPHAssetCollection:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)saveToAlbumUsingPHPhotoLibraryWithAssetURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)finishedWritingWithAssetURL:(id)arg1 error:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)saveSnapVideoAtURLToSnapAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 deleteAfterSaving:(_Bool)arg3;
- (void)saveSnapImageToSnapAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

