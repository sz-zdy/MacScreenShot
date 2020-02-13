//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "YascaControlPanelDelegate.h"

@class NSString, YascaControlPanel;

@interface YascaWindowController : NSWindowController <YascaControlPanelDelegate>
{
    YascaControlPanel *_controlPanel;
}

@property(retain, nonatomic) YascaControlPanel *controlPanel; // @synthesize controlPanel=_controlPanel;
- (void).cxx_destruct;
- (void)controlPanel:(id)arg1 saveButtonClick:(id)arg2;
- (void)controlPanel:(id)arg1 colorButtonClickedWithIndex:(long long)arg2;
- (void)controlPanel:(id)arg1 didChooseFontSize:(long long)arg2;
- (void)controlPanel:(id)arg1 lineSizeButtonClickedWithMode:(int)arg2;
- (void)controlPanelDidConfirm:(id)arg1;
- (void)controlPanelDidCancel:(id)arg1;
- (void)controlPanel:(id)arg1 shapeButtonClickedWithType:(int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

