//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <JietuFramework/JTPopoverLineColorView.h>

@class JTPopoverColorButtonForWechat, NSMutableArray;

@interface JTPopoverLineColorViewForWechat : JTPopoverLineColorView
{
    NSMutableArray *_buttonArray;
    JTPopoverColorButtonForWechat *_selectedButton;
}

@property(nonatomic) __weak JTPopoverColorButtonForWechat *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
- (void).cxx_destruct;
- (id)availableColorArray;
- (id)buttonFrameArray;
- (void)configAppearanceAndLayout;
- (void)onLineColorButtonClicked:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (long long)indexOfSelectedColor:(id)arg1;
- (id)defaultColor;
- (void)setSelectedColor:(id)arg1;
- (id)selectedColor;
- (void)setupColorButton;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

