//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WupAgent : NSObject
{
    NSString *_servantName;
}

+ (id)agent;
+ (id)cachedInstanceWithServant:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (id)init;
- (id)handleResponseData:(id)arg1 headerFields:(id)arg2 encryptKey:(id)arg3;
- (void)setupPostDataAndExtraHeadFields:(id)arg1 packet:(id)arg2 userInfo:(id)arg3;
- (id)generateRequestURLsSequence:(id)arg1;
- (unsigned long long)retryTimesForEachServer;
- (id)serverURLs;
- (id)qGuid;
- (id)initWithServant:(id)arg1;

@end

