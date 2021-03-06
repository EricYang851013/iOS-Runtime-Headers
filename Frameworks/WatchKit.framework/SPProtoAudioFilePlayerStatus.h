/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPProtoAudioFilePlayerStatus : PBCodable <NSCopying> {
    long long  _errorCode;
    NSData * _errorDict;
    NSString * _errorDomain;
    struct { 
        unsigned int errorCode : 1; 
        unsigned int status : 1; 
    }  _has;
    NSString * _identifier;
    int  _status;
}

@property (nonatomic) long long errorCode;
@property (nonatomic, retain) NSData *errorDict;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic, readonly) BOOL hasErrorDict;
@property (nonatomic, readonly) BOOL hasErrorDomain;
@property (nonatomic, readonly) BOOL hasIdentifier;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) int status;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)errorCode;
- (id)errorDict;
- (id)errorDomain;
- (BOOL)hasErrorCode;
- (BOOL)hasErrorDict;
- (BOOL)hasErrorDomain;
- (BOOL)hasIdentifier;
- (BOOL)hasStatus;
- (unsigned int)hash;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setErrorDict:(id)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasErrorCode:(BOOL)arg1;
- (void)setHasStatus:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setStatus:(int)arg1;
- (id)sockPuppetMessageForPlayerItemSetStatus;
- (id)sockPuppetMessageForQueuePlayerSetStatus;
- (int)status;
- (void)writeTo:(id)arg1;

@end
