//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <JietuFramework/RqdLocalObject.h>

@class NSArray, NSString;

@interface RqdAppSession : RqdLocalObject
{
    NSString *sessionId;
    NSArray *events;
}

@property(retain, nonatomic) NSArray *events; // @synthesize events;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId;
- (void)dealloc;
- (void)createWUPModel:(struct AppSession *)arg1;

@end
