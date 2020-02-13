//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSColor, WWCaptureGeometryView;

@interface WWCaptureToolKitManager : NSObject
{
    float _lineWidth;
    int _textSize;
    int _viewType;
    WWCaptureGeometryView *_selectedView;
    NSColor *_lineColor;
}

+ (id)shareInstance;
@property(nonatomic) int viewType; // @synthesize viewType=_viewType;
@property int textSize; // @synthesize textSize=_textSize;
@property float lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain) NSColor *lineColor; // @synthesize lineColor=_lineColor;
@property(retain) WWCaptureGeometryView *selectedView; // @synthesize selectedView=_selectedView;
- (void).cxx_destruct;
- (void)restoreVar;
- (void)setSelectedViewLineColor:(id)arg1;
- (void)setSelectedViewTextSize:(int)arg1;
- (void)setSelectedViewLineWidth:(float)arg1;
- (id)produceGeometryViewWithFrame:(struct CGRect)arg1;
- (id)init;

@end

