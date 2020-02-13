//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class NSColor;

@interface WWCaptureIconfontButton : NSButton
{
    BOOL _buttonSelected;
    BOOL _mouseOnButton;
    id <WWCaptureIconfontButtonDelegate> _iconfontDelegate;
    NSColor *_fontColor;
    NSColor *_fontHighlightColor;
    NSColor *_selectedBackgroundColor;
    long long _trackingTag;
}

@property BOOL mouseOnButton; // @synthesize mouseOnButton=_mouseOnButton;
@property long long trackingTag; // @synthesize trackingTag=_trackingTag;
@property(nonatomic) BOOL buttonSelected; // @synthesize buttonSelected=_buttonSelected;
@property(retain) NSColor *selectedBackgroundColor; // @synthesize selectedBackgroundColor=_selectedBackgroundColor;
@property(retain) NSColor *fontHighlightColor; // @synthesize fontHighlightColor=_fontHighlightColor;
@property(retain, nonatomic) NSColor *fontColor; // @synthesize fontColor=_fontColor;
@property __weak id <WWCaptureIconfontButtonDelegate> iconfontDelegate; // @synthesize iconfontDelegate=_iconfontDelegate;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)updateTrackingAreas;
- (void)setTitle:(id)arg1;
- (void)setupUIThemes;
- (BOOL)acceptsFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

