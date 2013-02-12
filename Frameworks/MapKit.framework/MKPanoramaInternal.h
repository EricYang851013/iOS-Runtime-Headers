/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class GMMMapPoint, MKPanoramaLoaderProxy, MKStreetView, NSArray, NSMapTable, NSString;

@interface MKPanoramaInternal : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct { 
        double latitude; 
        double longitude; 
    float annotationHeight;
    float annotationHorizonHeight;
    NSArray *annotations;
    double cameraPitch;
    } coordinate;
    BOOL hasMetadata;
    NSUInteger heapTime;
    double horizontalFOV;
    } imageSize;
    BOOL isDisabled;
    MKPanoramaLoaderProxy *loaderProxy;
    struct CGImage { } *mapImageRef;
    GMMMapPoint *mapPoint;
    double maxVisiblePitch;
    NSUInteger maxZoomLevel;
    double minVisiblePitch;
    NSString *panoramaID;
    NSString *streetName;
    NSString *streetNumber;
    NSUInteger throttleFlags;
    NSUInteger throttleTimeInterval;
    NSUInteger tileByteCount;
    NSMapTable *tileDataTable;
    NSArray *tilePaths;
    } tileSize;
    double tiltPitch;
    double tiltYaw;
    NSUInteger updateTime;
    MKStreetView *view;
    double yaw;
}

@end