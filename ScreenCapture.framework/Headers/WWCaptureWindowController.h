//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSWindowDelegate.h"

@class NSScreen, NSString, YascaWindowController;

@interface WWCaptureWindowController : NSWindowController <NSWindowDelegate>
{
    BOOL _isNotTellDelegate;
    BOOL _isSoundClose;
    BOOL _isNeedDecrease;
    BOOL _isMultiScreen;
    BOOL _isWorking;
    BOOL _isShowToolKit;
    BOOL _isMouseDragged;
    BOOL _isMouseDraggedEnterWindow;
    BOOL _runModelFlag;
    YascaWindowController *_yascalWindowController;
    id _caller;
    unsigned long long _saveImageType;
    NSScreen *_screen;
    struct CGPoint _tookKitWindowOrigin;
    struct CGRect _grabArea;
}

+ (id)sharedInstance;
@property BOOL runModelFlag; // @synthesize runModelFlag=_runModelFlag;
@property(retain) NSScreen *screen; // @synthesize screen=_screen;
@property unsigned long long saveImageType; // @synthesize saveImageType=_saveImageType;
@property BOOL isMouseDraggedEnterWindow; // @synthesize isMouseDraggedEnterWindow=_isMouseDraggedEnterWindow;
@property BOOL isMouseDragged; // @synthesize isMouseDragged=_isMouseDragged;
@property BOOL isShowToolKit; // @synthesize isShowToolKit=_isShowToolKit;
@property BOOL isWorking; // @synthesize isWorking=_isWorking;
@property BOOL isMultiScreen; // @synthesize isMultiScreen=_isMultiScreen;
@property BOOL isNeedDecrease; // @synthesize isNeedDecrease=_isNeedDecrease;
@property BOOL isSoundClose; // @synthesize isSoundClose=_isSoundClose;
@property struct CGPoint tookKitWindowOrigin; // @synthesize tookKitWindowOrigin=_tookKitWindowOrigin;
@property __weak id caller; // @synthesize caller=_caller;
@property BOOL isNotTellDelegate; // @synthesize isNotTellDelegate=_isNotTellDelegate;
@property struct CGRect grabArea; // @synthesize grabArea=_grabArea;
@property(retain) YascaWindowController *yascalWindowController; // @synthesize yascalWindowController=_yascalWindowController;
- (void).cxx_destruct;
- (void)windowWillClose:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)writeToPasteboard:(id)arg1;
- (BOOL)isScreenCaptureWorking;
- (BOOL)saveImageToFile:(id)arg1;
- (id)readGrabAreaImage;
- (void)grabAreaChange:(id)arg1;
- (void)captureCancel:(id)arg1;
- (void)delayRefreshShowInfo;
- (void)refreshShowInfo;
- (id)captureScreenWindows;
- (void)enableScreenUpdates;
- (void)captureCancel;
- (void)closeCapture;
- (id)getCaptureImage;
- (id)startChooseURL;
- (void)caputreSaveToLobal:(id)arg1;
- (id)getDragCaptureImage;
- (void)captureSave:(id)arg1;
- (void)callImageCapture:(id)arg1;
- (void)captureFinished;
- (void)captureFinished:(id)arg1;
- (void)hideToolKit:(id)arg1;
- (void)showToolKit:(id)arg1;
- (double)backingScaleFactor;
@property(readonly, nonatomic) BOOL mouseInWindow;
- (void)startCapture:(id)arg1 withScreen:(id)arg2 hideFlag:(BOOL)arg3;
- (void)startCapture:(id)arg1 hideFlag:(BOOL)arg2;
- (void)unregistNotification;
- (void)registNotification;
- (void)activeSpaceDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
