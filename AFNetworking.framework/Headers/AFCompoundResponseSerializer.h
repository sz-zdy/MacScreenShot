//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AFNetworking/AFHTTPResponseSerializer.h>

@class NSArray;

@interface AFCompoundResponseSerializer : AFHTTPResponseSerializer
{
    NSArray *_responseSerializers;
}

+ (id)compoundSerializerWithResponseSerializers:(id)arg1;
@property(copy, nonatomic) NSArray *responseSerializers; // @synthesize responseSerializers=_responseSerializers;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;

@end

