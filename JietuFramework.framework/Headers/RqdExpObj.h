//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <JietuFramework/RqdLocalObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, RqdAppInfo, RqdAppSession;

@interface RqdExpObj : RqdLocalObject
{
    NSString *crashType;
    long long cashTime;
    NSString *exceptionType;
    NSString *excepitonAddress;
    NSString *callStack;
    NSString *causedBy;
    NSString *threadName;
    NSString *hash;
    NSDictionary *allStacks;
    RqdAppInfo *appInfo;
    NSArray *appInfoList;
    NSString *deviceId;
    NSString *userId;
    NSString *expUid;
    NSArray *attachmentList;
    NSMutableDictionary *valueMap;
    NSDictionary *userMap;
    RqdAppSession *sessionInfo;
}

@property(retain, nonatomic) RqdAppSession *sessionInfo; // @synthesize sessionInfo;
@property(retain, nonatomic) NSString *expUid; // @synthesize expUid;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId;
@property(retain, nonatomic) NSDictionary *userMap; // @synthesize userMap;
@property(retain, nonatomic) NSMutableDictionary *valueMap; // @synthesize valueMap;
@property(retain, nonatomic) NSDictionary *allStacks; // @synthesize allStacks;
@property(nonatomic) long long cashTime; // @synthesize cashTime;
@property(retain, nonatomic) NSArray *appInfoList; // @synthesize appInfoList;
@property(retain, nonatomic) NSArray *attachmentList; // @synthesize attachmentList;
@property(retain, nonatomic) NSString *crashType; // @synthesize crashType;
@property(retain, nonatomic) RqdAppInfo *appInfo; // @synthesize appInfo;
@property(retain, nonatomic) NSString *causedBy; // @synthesize causedBy;
@property(retain, nonatomic) NSString *callStack; // @synthesize callStack;
@property(retain, nonatomic) NSString *threadName; // @synthesize threadName;
@property(retain, nonatomic) NSString *hash; // @synthesize hash;
@property(retain, nonatomic) NSString *excepitonAddress; // @synthesize excepitonAddress;
@property(retain, nonatomic) NSString *exceptionType; // @synthesize exceptionType;
- (void)dealloc;
- (void)createWUPModel:(struct ExceptionUpload *)arg1;
- (id)init;

@end

