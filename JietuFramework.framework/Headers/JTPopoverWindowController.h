//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "CAAnimationDelegate.h"
#import "JTPopoverFontSizeViewDelegate.h"
#import "JTPopoverLineColorViewDelegate.h"
#import "JTPopoverLineWidthViewDelegate.h"

@class JTPopoverFontSizeView, JTPopoverLineColorView, JTPopoverLineWidthView, JTPopoverView, NSString, NSView;

@interface JTPopoverWindowController : NSWindowController <JTPopoverLineWidthViewDelegate, JTPopoverLineColorViewDelegate, JTPopoverFontSizeViewDelegate, CAAnimationDelegate>
{
    BOOL _showLogo;
    id <JTPopoverWindowControllerDelegate> _delegate;
    long long _graphType;
    unsigned long long _popoverType;
    unsigned long long _arrowDirection;
    NSView *_superView;
    double _alphaTransformAnimationStyleDuration;
    JTPopoverView *_popoverView;
    JTPopoverLineWidthView *_lineWidthView;
    JTPopoverLineColorView *_lineColorView;
    JTPopoverFontSizeView *_fontSizeView;
    struct CGPoint _arrowPoint;
}

@property(nonatomic, getter=isShowLogo) BOOL showLogo; // @synthesize showLogo=_showLogo;
@property(retain, nonatomic) JTPopoverFontSizeView *fontSizeView; // @synthesize fontSizeView=_fontSizeView;
@property(retain, nonatomic) JTPopoverLineColorView *lineColorView; // @synthesize lineColorView=_lineColorView;
@property(retain, nonatomic) JTPopoverLineWidthView *lineWidthView; // @synthesize lineWidthView=_lineWidthView;
@property(retain, nonatomic) JTPopoverView *popoverView; // @synthesize popoverView=_popoverView;
@property(nonatomic) double alphaTransformAnimationStyleDuration; // @synthesize alphaTransformAnimationStyleDuration=_alphaTransformAnimationStyleDuration;
@property(nonatomic) __weak NSView *superView; // @synthesize superView=_superView;
@property(nonatomic) unsigned long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(nonatomic) unsigned long long popoverType; // @synthesize popoverType=_popoverType;
@property(nonatomic) long long graphType; // @synthesize graphType=_graphType;
@property(nonatomic) struct CGPoint arrowPoint; // @synthesize arrowPoint=_arrowPoint;
@property(nonatomic) __weak id <JTPopoverWindowControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubViews;
- (void)configAppearanceAndLayout;
- (void)handleChangeThemeNotification:(id)arg1;
- (void)unregisterForChangeThemeNotification;
- (void)registerForChangeThemeNotification;
- (id)defaultColor;
- (unsigned long long)defaultFontSize;
- (unsigned long long)defaultWidth;
- (void)getConfigurationsOfType:(long long)arg1 withWidth:(unsigned long long *)arg2 color:(id *)arg3 fontSize:(unsigned long long *)arg4;
- (void)saveConfigurationsOfType:(long long)arg1 withWidth:(unsigned long long)arg2 color:(id)arg3 fontSize:(unsigned long long)arg4;
- (void)updateConfigurations;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)startShowAnimatesWithWindowFrame:(struct CGRect)arg1;
- (void)prepareShowAnimatesWithWindowFrame:(struct CGRect)arg1;
- (void)fontSizeDidChange:(unsigned long long)arg1;
- (void)colorDidChange:(id)arg1;
- (void)widthDidChange:(unsigned long long)arg1;
- (struct CGPoint)popoverPosition;
- (struct CGSize)windowSizeOfType:(unsigned long long)arg1;
- (unsigned long long)popoverTypeByGraphType:(long long)arg1;
- (void)forceClose;
- (void)cancelTracking;
- (void)showPopoverAtArrowPoint:(struct CGPoint)arg1 graphType:(long long)arg2 width:(unsigned long long)arg3 color:(id)arg4 arrowDirection:(unsigned long long)arg5 inView:(id)arg6;
- (void)showPopoverAtArrowPoint:(struct CGPoint)arg1 graphType:(long long)arg2 arrowDirection:(unsigned long long)arg3 inView:(id)arg4;
- (void)showPopoverAtArrowPoint:(struct CGPoint)arg1 graphType:(long long)arg2 arrowDirection:(unsigned long long)arg3 inView:(id)arg4 updateConfigurations:(BOOL)arg5 showAnimation:(BOOL)arg6;
- (void)setupFontSizeView;
- (void)setupLineColorView;
- (void)setupLineWidthView;
- (void)setupPopoverView;
- (void)setupWindow;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

