//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JcePair, NSString;

@interface JcePropertyInfo : NSObject
{
    BOOL flag;
    long long tag;
    NSString *name;
    NSString *type;
    JcePair *ext;
}

+ (id)propertyInfo;
@property(retain, nonatomic) JcePair *ext; // @synthesize ext;
@property(retain, nonatomic) NSString *type; // @synthesize type;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(nonatomic) BOOL flag; // @synthesize flag;
@property(nonatomic) long long tag; // @synthesize tag;
- (void).cxx_destruct;
- (id)description;
- (long long)compareWithTag:(id)arg1;
- (id)init;

@end
