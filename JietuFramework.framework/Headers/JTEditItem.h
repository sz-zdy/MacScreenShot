//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAffineTransform, NSColor, NSMutableArray, NSView;

@interface JTEditItem : NSObject
{
    NSView *_superView;
    NSColor *_normalStrokeColor;
    double _normalStrokeWidth;
    NSColor *_activeStrokeColor;
    double _activeStrokeWidth;
    NSColor *_controlPointFillColor;
    NSColor *_controlPointStrokeColor;
    double _resizeReactiveRadius;
    double _rotateReactiveRadius;
    unsigned long long _editType;
    unsigned long long _supportType;
    long long _graphType;
    NSMutableArray *_pointsArray;
    double _degrees;
    NSAffineTransform *_moveTransform;
    NSAffineTransform *_rotateTransform;
    NSAffineTransform *_reverseMoveTransform;
    NSAffineTransform *_reverseRotateTransform;
    struct CGPoint _center;
    struct CGSize _size;
    struct CGPoint _resizeFixedPoint;
    struct CGPoint _resizeChangePoint;
    struct CGPoint _rotateStartPoint;
    struct CGPoint _rotateEndPoint;
    struct CGRect _bounds;
}

@property(retain, nonatomic) NSAffineTransform *reverseRotateTransform; // @synthesize reverseRotateTransform=_reverseRotateTransform;
@property(retain, nonatomic) NSAffineTransform *reverseMoveTransform; // @synthesize reverseMoveTransform=_reverseMoveTransform;
@property(retain, nonatomic) NSAffineTransform *rotateTransform; // @synthesize rotateTransform=_rotateTransform;
@property(retain, nonatomic) NSAffineTransform *moveTransform; // @synthesize moveTransform=_moveTransform;
@property(nonatomic) struct CGPoint rotateEndPoint; // @synthesize rotateEndPoint=_rotateEndPoint;
@property(nonatomic) struct CGPoint rotateStartPoint; // @synthesize rotateStartPoint=_rotateStartPoint;
@property(nonatomic) double degrees; // @synthesize degrees=_degrees;
@property(nonatomic) struct CGPoint resizeChangePoint; // @synthesize resizeChangePoint=_resizeChangePoint;
@property(nonatomic) struct CGPoint resizeFixedPoint; // @synthesize resizeFixedPoint=_resizeFixedPoint;
@property(retain, nonatomic) NSMutableArray *pointsArray; // @synthesize pointsArray=_pointsArray;
@property(nonatomic) long long graphType; // @synthesize graphType=_graphType;
@property(nonatomic) unsigned long long supportType; // @synthesize supportType=_supportType;
@property(nonatomic) unsigned long long editType; // @synthesize editType=_editType;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(nonatomic) double rotateReactiveRadius; // @synthesize rotateReactiveRadius=_rotateReactiveRadius;
@property(nonatomic) double resizeReactiveRadius; // @synthesize resizeReactiveRadius=_resizeReactiveRadius;
@property(retain, nonatomic) NSColor *controlPointStrokeColor; // @synthesize controlPointStrokeColor=_controlPointStrokeColor;
@property(retain, nonatomic) NSColor *controlPointFillColor; // @synthesize controlPointFillColor=_controlPointFillColor;
@property(nonatomic) double activeStrokeWidth; // @synthesize activeStrokeWidth=_activeStrokeWidth;
@property(retain, nonatomic) NSColor *activeStrokeColor; // @synthesize activeStrokeColor=_activeStrokeColor;
@property(nonatomic) double normalStrokeWidth; // @synthesize normalStrokeWidth=_normalStrokeWidth;
@property(retain, nonatomic) NSColor *normalStrokeColor; // @synthesize normalStrokeColor=_normalStrokeColor;
@property(nonatomic) __weak NSView *superView; // @synthesize superView=_superView;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isValid;
- (void)updateControlPoints;
- (id)fixedPointOfControlPoint:(id)arg1;
- (struct CGPoint)convertPointOut:(struct CGPoint)arg1;
- (struct CGPoint)convertPointIn:(struct CGPoint)arg1;
- (void)updateRotateTransfrom;
- (void)updateMoveTransform;
- (struct CGPoint)applyPointWithTransform:(struct CGPoint)arg1;
- (id)applyTransformToPath:(id)arg1;
- (void)transformDidChange;
- (void)drawControlPoints;
- (void)drawActiveBorder;
- (void)drawGraph;
- (void)reverse;
- (BOOL)mouseHitReverseControlPoints:(struct CGPoint)arg1;
- (BOOL)mouseHitCornerRotateControlPoints:(struct CGPoint)arg1 hitPointType:(unsigned long long *)arg2;
- (void)rotate;
- (void)rotateToDegrees:(double)arg1;
- (void)rotate:(double)arg1;
- (void)handelEqualRatioResize;
- (void)handelResizeWidth;
- (void)handelResizeHeight;
- (void)resize;
- (BOOL)mouseHitEndResizeControlPoints:(struct CGPoint)arg1 fixedPoint:(struct CGPoint *)arg2;
- (BOOL)mouseHitBeginResizeControlPoints:(struct CGPoint)arg1 fixedPoint:(struct CGPoint *)arg2;
- (BOOL)mouseHitHorizontalResizeControlPoints:(struct CGPoint)arg1 fixedPoint:(struct CGPoint *)arg2;
- (BOOL)mouseHitVerticalResizeControlPoints:(struct CGPoint)arg1 fixedPoint:(struct CGPoint *)arg2;
- (BOOL)mouseHitCornerResizeControlPoints:(struct CGPoint)arg1 fixedPoint:(struct CGPoint *)arg2 hitPointType:(unsigned long long *)arg3;
- (BOOL)mouseHitGraph:(struct CGPoint)arg1;
- (void)moveToPoint:(struct CGPoint)arg1;
- (void)move:(struct CGPoint)arg1;
- (void)addPoint:(struct CGPoint)arg1;
- (void)dealloc;
- (id)initWithSuperView:(id)arg1 centerPoint:(struct CGPoint)arg2 size:(struct CGSize)arg3;

@end

