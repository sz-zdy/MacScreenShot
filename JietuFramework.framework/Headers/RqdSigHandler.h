//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RqdSigHandler : NSObject
{
    BOOL _handlerEnable;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL handlerEnable; // @synthesize handlerEnable=_handlerEnable;
- (BOOL)UnInitAltStack;
- (BOOL)InitAltStack;
- (BOOL)uninstall;
- (BOOL)install;
- (BOOL)checkHandler;
- (BOOL)reset;
- (void)enableHandler:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end

