//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SCPreviewFilterDataProviderDelegate <NSObject>
- (void)previewFilterDataProviderDidCompleteUpdates:(id <SCPreviewFilterDataProvider>)arg1 succeeded:(_Bool)arg2;
- (void)previewFilterDataProviderDidUpdateWeather:(id <SCPreviewFilterDataProvider>)arg1;
- (void)previewFilterDataProviderDidUpdateSpeed:(id <SCPreviewFilterDataProvider>)arg1;
- (void)previewFilterDataProviderDidUpdateGeoFilterImages:(id <SCPreviewFilterDataProvider>)arg1;
- (void)previewFilterDataProviderDidUpdateGeoFilters:(id <SCPreviewFilterDataProvider>)arg1;
@end

