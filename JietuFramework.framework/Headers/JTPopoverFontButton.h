//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class NSColor, NSImage, NSString;

@interface JTPopoverFontButton : NSButton
{
    unsigned long long _type;
    NSColor *_backgroundColor;
    NSImage *_arrowImage;
    double _fontSize;
    NSColor *_fontColor;
    NSString *_text;
}

@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSColor *fontColor; // @synthesize fontColor=_fontColor;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSImage *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)configAppearanceAndLayout;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

