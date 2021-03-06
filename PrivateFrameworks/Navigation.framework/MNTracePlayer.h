/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTracePlayer : NSObject <MNTracePlayerSchedulerDelegate, MNTracePlayerTimelineStreamDelegate> {
    MNTracePlayerTimelineStream * _directionsStream;
    double  _duration;
    MNTracePlayerETAUpdater * _etaUpdater;
    MNTracePlayerTimelineStream * _etaUpdatesStream;
    BOOL  _forceDirectionsResponsesFromTrace;
    BOOL  _isPaused;
    BOOL  _isPlaying;
    MNLocation * _lastReportedLocation;
    MNTracePlayerTimelineStream * _locationStream;
    int  _mainTransportType;
    NSHashTable * _observers;
    MNTracePlayerScheduler * _scheduler;
    BOOL  _shouldPlayETARequests;
    double  _speedMultiplier;
    MNTrace * _trace;
}

@property (nonatomic, readonly) NSDate *currentLocationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) GEOETAUpdater *etaUpdater;
@property (nonatomic) BOOL forceDirectionsResponsesFromTrace;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isPaused;
@property (nonatomic, readonly) BOOL isPlaying;
@property (nonatomic, readonly) int mainTransportType;
@property (nonatomic, readonly) double position;
@property (nonatomic, readonly) NSData *selectedRouteID;
@property (nonatomic, readonly) unsigned int selectedRouteIndex;
@property (nonatomic) BOOL shouldPlayETARequests;
@property (nonatomic) double speedMultiplier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MNTrace *trace;

- (void).cxx_destruct;
- (void)_createTimelineStreams;
- (id)_locationWithCurrentDate:(id)arg1;
- (double)_responseTimeForRequestAtIndex:(unsigned int)arg1;
- (void)addObserver:(id)arg1;
- (id)currentLocationDate;
- (void)dealloc;
- (double)duration;
- (id)etaUpdater;
- (BOOL)forceDirectionsResponsesFromTrace;
- (id)initWithPath:(id)arg1;
- (id)initWithTrace:(id)arg1;
- (BOOL)isPaused;
- (BOOL)isPlaying;
- (void)jumpToBookmarkAtIndex:(unsigned int)arg1;
- (void)jumpToLocationAtIndex:(unsigned int)arg1;
- (void)jumpToTime:(double)arg1;
- (int)mainTransportType;
- (void)pause;
- (double)position;
- (void)removeObserver:(id)arg1;
- (BOOL)requestDirectionsNearTimestamp:(double)arg1 withHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (BOOL)requestDirectionsWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)resume;
- (id)selectedRouteID;
- (unsigned int)selectedRouteIndex;
- (void)setForceDirectionsResponsesFromTrace:(BOOL)arg1;
- (void)setShouldPlayETARequests:(BOOL)arg1;
- (void)setSpeedMultiplier:(double)arg1;
- (BOOL)shouldPlayETARequests;
- (void)skipByTimeInterval:(double)arg1;
- (double)speedMultiplier;
- (void)start;
- (void)startAtLocationIndex:(unsigned int)arg1;
- (void)stop;
- (id)trace;
- (void)tracePlayerScheduler:(id)arg1 didUpdatePosition:(double)arg2;

@end
