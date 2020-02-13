//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <JietuFramework/WupAgent.h>

@class MttHTTPSessionManager, NSString, NSURL;

@interface MttWupAgent : WupAgent
{
    BOOL _haveRetryRequest;
    NSString *_reqAttrName;
    NSString *_reqAttrType;
    NSString *_rspAttrName;
    MttHTTPSessionManager *_afSessionManager;
    NSURL *_preferredURL;
}

@property(copy, nonatomic) NSURL *preferredURL; // @synthesize preferredURL=_preferredURL;
@property(nonatomic) BOOL haveRetryRequest; // @synthesize haveRetryRequest=_haveRetryRequest;
@property(retain, nonatomic) MttHTTPSessionManager *afSessionManager; // @synthesize afSessionManager=_afSessionManager;
@property(copy, nonatomic) NSString *rspAttrName; // @synthesize rspAttrName=_rspAttrName;
@property(copy, nonatomic) NSString *reqAttrType; // @synthesize reqAttrType=_reqAttrType;
@property(copy, nonatomic) NSString *reqAttrName; // @synthesize reqAttrName=_reqAttrName;
- (void).cxx_destruct;
- (void)startRequestWithInfo:(id)arg1 completeHandle:(CDUnknownBlockType)arg2;
- (void)invocation:(id)arg1 parameter:(id)arg2 completeHandle:(CDUnknownBlockType)arg3;
- (id)wupRequestWithInfo:(id)arg1;
- (id)wupHttpRequestInfoWithfuncName:(id)arg1 uniPacket:(id)arg2 serverURLs:(id)arg3;
- (id)handleResponseData:(id)arg1 headerFields:(id)arg2 encryptKey:(id)arg3;
- (id)invocation:(id)arg1 parameter:(id)arg2;
- (void)invocation:(id)arg1 request:(id)arg2 forClass:(Class)arg3 completeHandle:(CDUnknownBlockType)arg4;
- (id)qUA;
- (id)qGuid;
- (id)initWithServant:(id)arg1;

@end
