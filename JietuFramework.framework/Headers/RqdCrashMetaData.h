//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RqdCrashMetaData : NSObject
{
    NSString *md5;
    NSString *file;
    long long time;
    BOOL hasNew;
    BOOL uplaoded;
}

@property BOOL uplaoded; // @synthesize uplaoded;
@property BOOL hasNew; // @synthesize hasNew;
@property long long time; // @synthesize time;
@property(retain) NSString *file; // @synthesize file;
@property(retain) NSString *md5; // @synthesize md5;
- (void)dealloc;
- (BOOL)setEncodeData:(id)arg1;
- (id)encodeData;

@end
