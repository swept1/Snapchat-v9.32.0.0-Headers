//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureDevice, AVCaptureDeviceFormat, AVCaptureDeviceInput, NSError;

@interface SCManagedCaptureDevice : NSObject
{
    AVCaptureDevice *_device;
    AVCaptureDeviceInput *_deviceInput;
    AVCaptureDeviceFormat *_defaultFormat;
    AVCaptureDeviceFormat *_lensFormat;
    AVCaptureDeviceFormat *_nightFormat;
    unsigned long long _devicePosition;
    struct CGPoint _exposurePointOfInterest;
    struct CGPoint _focusPointOfInterest;
    _Bool _continuousAutofocus;
    _Bool _focusLock;
    NSError *_error;
    _Bool _softwareZoom;
    _Bool _isConnected;
    _Bool _flashActive;
    _Bool _torchActive;
    _Bool _lensesActive;
    float _zoomFactor;
    _Bool _isNightModeActive;
}

+ (_Bool)areLensesSupported;
+ (_Bool)isNightModeSupported;
+ (id)deviceWithPosition:(unsigned long long)arg1;
+ (id)back;
+ (id)front;
- (void).cxx_destruct;
- (id)activeFormat;
- (void)_enableSubjectAreaChangeMonitoring;
- (_Bool)isNightModeActive;
- (float)zoomFactor;
- (_Bool)lensesActive;
- (_Bool)torchActive;
- (_Bool)flashActive;
- (_Bool)isConnected;
- (_Bool)softwareZoom;
- (id)error;
- (id)deviceInput;
- (id)device;
- (struct CGPoint)convertViewCoordinates:(struct CGPoint)arg1 videoPreviewLayer:(id)arg2;
- (_Bool)isTorchSupported;
- (_Bool)isFlashSupported;
- (void)setTorchActive:(_Bool)arg1;
- (void)setFlashActive:(_Bool)arg1;
- (void)setFocusLock:(_Bool)arg1;
- (void)continuousAutofocus;
- (void)setAutofocusPointOfInterest:(struct CGPoint)arg1;
- (void)setExposurePointOfInterest:(struct CGPoint)arg1;
- (void)setZoomFactor:(float)arg1;
- (void)_updateActiveFormatWithSession:(id)arg1 fallbackPreset:(id)arg2;
- (void)setLensesActive:(_Bool)arg1 session:(id)arg2;
- (void)setNightModeActive:(_Bool)arg1 session:(id)arg2;
- (id)_bestSupportedFormat;
- (void)_findSupportedFormats;
- (void)resetDeviceAsInput;
- (void)removeDeviceAsInput:(id)arg1;
- (_Bool)setDeviceAsInput:(id)arg1;
- (id)initWithDevice:(id)arg1 devicePosition:(unsigned long long)arg2;

@end

