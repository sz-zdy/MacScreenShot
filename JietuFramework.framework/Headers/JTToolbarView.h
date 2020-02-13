//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor, NSImageView, NSMutableArray, NSVisualEffectView;

@interface JTToolbarView : NSView
{
    BOOL _postedBeginEditNotification;
    id <JTToolbarViewDelegate> _delegate;
    long long _graphTypeSelected;
    NSMutableArray *_graphButtonArray;
    NSMutableArray *_functionButtonArray;
    NSColor *_backgroundColor;
    NSImageView *_seperateImageView;
    NSVisualEffectView *_gaussEffectView;
}

@property(retain, nonatomic) NSVisualEffectView *gaussEffectView; // @synthesize gaussEffectView=_gaussEffectView;
@property(nonatomic) BOOL postedBeginEditNotification; // @synthesize postedBeginEditNotification=_postedBeginEditNotification;
@property(retain, nonatomic) NSImageView *seperateImageView; // @synthesize seperateImageView=_seperateImageView;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSMutableArray *functionButtonArray; // @synthesize functionButtonArray=_functionButtonArray;
@property(retain, nonatomic) NSMutableArray *graphButtonArray; // @synthesize graphButtonArray=_graphButtonArray;
@property(nonatomic) long long graphTypeSelected; // @synthesize graphTypeSelected=_graphTypeSelected;
@property(nonatomic) __weak id <JTToolbarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reportButtonType:(unsigned long long)arg1 isGraphButton:(BOOL)arg2;
- (void)postBeginEditNotification;
- (id)functionButtonByGraphType:(unsigned long long)arg1;
- (id)graphButtonByGraphType:(long long)arg1;
- (struct CGRect)buttonFrameOfGraphType:(long long)arg1;
- (void)onFunctionButtonClicked:(id)arg1;
- (void)onGraphButtonClicked:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)configAppearanceAndLayout;
@property(nonatomic) BOOL enableUndo;
- (void)initGaussEffect;
- (void)setupImageView;
- (void)setupFunctionButtons;
- (void)setupGraphButtons;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
