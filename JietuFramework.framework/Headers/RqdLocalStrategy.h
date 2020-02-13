//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <JietuFramework/RqdLocalObject.h>

#import "RqdLocalObjInitWithWupProtocol.h"

@class NSMutableDictionary, NSString;

@interface RqdLocalStrategy : RqdLocalObject <RqdLocalObjInitWithWupProtocol>
{
    NSString *encKey;
    NSString *encPubKey;
    BOOL enable;
    BOOL userInfoEnable;
    BOOL queryEnable;
    NSString *url;
    NSString *expUrl;
    NSMutableDictionary *valueMap;
}

@property(retain, nonatomic) NSMutableDictionary *valueMap; // @synthesize valueMap;
@property(retain, nonatomic) NSString *expUrl; // @synthesize expUrl;
@property(retain, nonatomic) NSString *url; // @synthesize url;
@property(nonatomic) BOOL queryEnable; // @synthesize queryEnable;
@property(nonatomic) BOOL userInfoEnable; // @synthesize userInfoEnable;
@property(nonatomic) BOOL enable; // @synthesize enable;
@property(retain, nonatomic) NSString *encPubKey; // @synthesize encPubKey;
@property(retain, nonatomic) NSString *encKey; // @synthesize encKey;
@property(readonly, copy) NSString *debugDescription;
- (BOOL)isEqual:(id)arg1;
- (void)initLocalObjWithWupBuffer:(struct JceInputStream<analyticstaf::BufferReader> *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

