/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/MapKit.framework/MapKit
 */

@class UIView, NSMutableArray, MKMapLevelView, NSThread;



@interface MKMapSnapshotCreator : NSObject 
{
    MKMapLevelView *_mapLevelView;
    UIView *_mapClipView;
    NSMutableArray *_requests;
    BOOL _isLoading;
    NSThread *_firstThread;
    struct { 
        double latitude; 
        double longitude; 
    } _centerCoordinate;
}

@property ? centerCoordinate; /* unknown property attribute: V_centerCoordinate */
@property(readonly) MKMapLevelView *mapLevelView; /* unknown property attribute: V_mapLevelView */
@property(readonly) UIView *mapClipView; /* unknown property attribute: V_mapClipView */

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_updateWithCenterCoordinate;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1;
- (void)_ensureSingleThread;
- (void)_processRequest;
- (void)_respondWithSnapshot;
- (void)createSnapShotWithCoordinate:(struct { double x1; double x2; })arg1 size:(struct CGSize { float x1; float x2; })arg2 requester:(id)arg3 context:(id)arg4;
- (float)pointDistanceFromCoordinate:(struct { double x1; double x2; })arg1 toCoordinate:(struct { double x1; double x2; })arg2;
- (struct CGPoint { float x1; float x2; })snapShotPointForCoordinate:(struct { double x1; double x2; })arg1;
- (void)mapLevelViewDidStartLoading:(id)arg1;
- (void)mapLevelViewDidFinishLoading:(id)arg1;
- (void)mapLevelViewDidFailLoading:(id)arg1;
- (struct { double x1; double x2; })centerCoordinate;
- (id)mapLevelView;
- (id)mapClipView;

@end