//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSAttributedString, NSBitmapImageRep, NSColor, NSImage, NSMutableDictionary;

@interface JTCaptureMagnifierView : NSView
{
    NSImage *_screenImage;
    NSMutableDictionary *_imageInfoDic;
    NSBitmapImageRep *_imageRep;
    NSAttributedString *_mouseInfoStr;
    NSAttributedString *_colorInfoStr;
    NSColor *_magnifierCrossColor;
    NSColor *_magnifierBackgroundColor;
    NSColor *_magnifierInfoBackgroundColor;
    NSColor *_magnifierFontColor;
    struct CGPoint _mouseLocation;
    struct CGPoint _imageOrigin;
    struct CGRect _screenFrame;
    struct CGRect _mouseInfoRect;
    struct CGRect _colorInfoRect;
}

@property(retain, nonatomic) NSColor *magnifierFontColor; // @synthesize magnifierFontColor=_magnifierFontColor;
@property(retain, nonatomic) NSColor *magnifierInfoBackgroundColor; // @synthesize magnifierInfoBackgroundColor=_magnifierInfoBackgroundColor;
@property(retain, nonatomic) NSColor *magnifierBackgroundColor; // @synthesize magnifierBackgroundColor=_magnifierBackgroundColor;
@property(retain, nonatomic) NSColor *magnifierCrossColor; // @synthesize magnifierCrossColor=_magnifierCrossColor;
@property(nonatomic) struct CGPoint imageOrigin; // @synthesize imageOrigin=_imageOrigin;
@property(nonatomic) struct CGRect colorInfoRect; // @synthesize colorInfoRect=_colorInfoRect;
@property(nonatomic) struct CGRect mouseInfoRect; // @synthesize mouseInfoRect=_mouseInfoRect;
@property(retain, nonatomic) NSAttributedString *colorInfoStr; // @synthesize colorInfoStr=_colorInfoStr;
@property(retain, nonatomic) NSAttributedString *mouseInfoStr; // @synthesize mouseInfoStr=_mouseInfoStr;
@property(retain, nonatomic) NSBitmapImageRep *imageRep; // @synthesize imageRep=_imageRep;
@property(retain, nonatomic) NSMutableDictionary *imageInfoDic; // @synthesize imageInfoDic=_imageInfoDic;
@property(nonatomic) struct CGPoint mouseLocation; // @synthesize mouseLocation=_mouseLocation;
@property(nonatomic) struct CGRect screenFrame; // @synthesize screenFrame=_screenFrame;
@property(nonatomic) __weak NSImage *screenImage; // @synthesize screenImage=_screenImage;
- (void).cxx_destruct;
- (void)configAppearanceAndLayout;
- (id)colorInfo;
- (void)updateImageOrigin:(struct CGPoint)arg1;
- (struct CGPoint)adjustFrameOriginByMouseLocation:(struct CGPoint)arg1;
- (void)getColorValue:(unsigned long long *)arg1 byPoint:(struct CGPoint)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithScreenImage:(id)arg1 screenFrame:(struct CGRect)arg2;

@end
