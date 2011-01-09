/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

@class NSString;



@interface AYEvent : NSObject 
{
    NSString *_domain;
    NSInteger _code;
    id _info;
}

+ (id)eventWithDomain:(id)arg1 eventCode:(NSInteger)arg2 userInfo:(id)arg3;

- (id)userInfo;
- (void)dealloc;
- (id)description;
- (id)initWithDomain:(id)arg1 eventCode:(NSInteger)arg2 userInfo:(id)arg3;
- (NSInteger)code;
- (id)domain;

@end