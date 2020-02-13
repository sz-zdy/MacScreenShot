//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSAttributedString, NSBitmapImageRep, NSImage;

@interface WWCaptureReadingGlassView : NSView
{
    struct {
        unsigned long long bytesPerRow;
        unsigned long long width;
        unsigned long long heght;
        unsigned long long length;
        unsigned long long bitsPerPixel;
    } _imageInfo;
    NSImage *_backgroundImage;
    NSBitmapImageRep *_imageRep;
    NSAttributedString *_mouseInfoString;
    NSAttributedString *_colorInfoString;
    struct CGPoint _imageOrigin;
    struct CGRect _mouseInfoRect;
    struct CGRect _colorInfoRect;
}

@property struct CGRect colorInfoRect; // @synthesize colorInfoRect=_colorInfoRect;
@property struct CGRect mouseInfoRect; // @synthesize mouseInfoRect=_mouseInfoRect;
@property(retain) NSAttributedString *colorInfoString; // @synthesize colorInfoString=_colorInfoString;
@property(retain) NSAttributedString *mouseInfoString; // @synthesize mouseInfoString=_mouseInfoString;
@property(nonatomic) struct CGPoint imageOrigin; // @synthesize imageOrigin=_imageOrigin;
@property(retain) NSBitmapImageRep *imageRep; // @synthesize imageRep=_imageRep;
@property(retain) NSImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
- (void).cxx_destruct;
- (void)refreshImage:(id)arg1;
- (id)colorInfo;
- (void)getColorValue:(unsigned long long *)arg1 byPoint:(struct CGPoint)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2;

@end
