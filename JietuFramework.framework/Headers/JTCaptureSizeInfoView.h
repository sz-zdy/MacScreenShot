//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class JTCaptureSizeInfoSubView, NSColor;

@interface JTCaptureSizeInfoView : NSView
{
    NSColor *_backgroundColor;
    NSColor *_borderColor;
    JTCaptureSizeInfoSubView *_sizeView;
    struct CGRect _screenFrame;
    struct CGRect _selectRect;
}

@property(retain, nonatomic) JTCaptureSizeInfoSubView *sizeView; // @synthesize sizeView=_sizeView;
@property(retain, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct CGRect selectRect; // @synthesize selectRect=_selectRect;
@property(nonatomic) struct CGRect screenFrame; // @synthesize screenFrame=_screenFrame;
- (void).cxx_destruct;
- (void)configAppearanceAndLayout;
- (void)drawRect:(struct CGRect)arg1;
- (void)setSelectedRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithScreenFrame:(struct CGRect)arg1;

@end

