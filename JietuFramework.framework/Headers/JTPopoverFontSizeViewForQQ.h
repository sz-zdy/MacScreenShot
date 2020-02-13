//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <JietuFramework/JTPopoverFontSizeView.h>

@class JTPopoverButton, JTPopoverMenu, NSColor;

@interface JTPopoverFontSizeViewForQQ : JTPopoverFontSizeView
{
    JTPopoverButton *_fontSizeButton;
    JTPopoverButton *_pullDownArrowButton;
    JTPopoverMenu *_fontSizeMenu;
    NSColor *_fontColor;
}

@property(retain, nonatomic) NSColor *fontColor; // @synthesize fontColor=_fontColor;
@property(retain, nonatomic) JTPopoverMenu *fontSizeMenu; // @synthesize fontSizeMenu=_fontSizeMenu;
@property(retain, nonatomic) JTPopoverButton *pullDownArrowButton; // @synthesize pullDownArrowButton=_pullDownArrowButton;
@property(retain, nonatomic) JTPopoverButton *fontSizeButton; // @synthesize fontSizeButton=_fontSizeButton;
- (void).cxx_destruct;
- (void)configAppearanceAndLayout;
- (void)hideMenu;
- (void)fontSizeButtonDidClick:(id)arg1;
- (void)showPopoverFontSizeMenu:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)viewSize;
- (unsigned long long)fontSize;
- (void)setFontSize:(unsigned long long)arg1;
- (unsigned long long)defaultFontSize;
- (void)setupPullDownArrowButton;
- (void)setupFontSizeMenu;
- (void)setupFontSizeButton;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

