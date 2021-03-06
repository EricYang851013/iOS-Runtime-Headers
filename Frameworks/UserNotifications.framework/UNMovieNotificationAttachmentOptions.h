/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNMovieNotificationAttachmentOptions : UNNotificationAttachmentOptions <UNNotificationAttachmentThumbnailOptions> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _thumbnailClippingRect;
    BOOL  _thumbnailHidden;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _thumbnailTimestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } thumbnailClippingRect;
@property (nonatomic, readonly) BOOL thumbnailHidden;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } thumbnailTimestamp;

+ (id)optionsFromOptionsDictionary:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithThumbnailHidden:(BOOL)arg1 thumbnailClippingRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 thumbnailTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (BOOL)isEqual:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })thumbnailClippingRect;
- (BOOL)thumbnailHidden;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })thumbnailTimestamp;

@end
