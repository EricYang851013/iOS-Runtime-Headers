/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAstronomyView : UIView <NUAnimationObserver> {
    NSMutableSet * _activeContentsAnimations;
    NUPortal * _button;
    unsigned int  _buttonContents;
    NUScene * _buttonScenes;
    unsigned int  _currentTab;
    NUAnimation * _earthTabAnim;
    unsigned int  _isDrawRectEnabled;
    unsigned int  _isSupplemental;
    NUAnimation * _lunaTabAnim;
    <NTKAstronomyViewObserver> * _observer;
    NUAnimation * _orreryTabAnim0;
    NUAnimation * _orreryTabAnim1;
    NUView * _viewer;
}

@property (getter=isDrawRectEnabled, nonatomic) BOOL drawRectEnabled;
@property (nonatomic) <NTKAstronomyViewObserver> *observer;

- (void).cxx_destruct;
- (void)cleanupAfterZoom;
- (unsigned int)contents;
- (unsigned int)contentsForButton:(unsigned int)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isDrawRectEnabled;
- (void)layoutSubviews;
- (id)observer;
- (void)prepareToZoom;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1;
- (id)rotatable:(unsigned int)arg1;
- (void)setButton:(unsigned int)arg1 contents:(unsigned int)arg2;
- (void)setButton:(unsigned int)arg1 contentsFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)setButton:(unsigned int)arg1 opacity:(float)arg2 animated:(BOOL)arg3;
- (void)setContents:(unsigned int)arg1 supplemental:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setDrawRectEnabled:(BOOL)arg1;
- (void)setMinFrameInterval:(int)arg1;
- (void)setObserver:(id)arg1;
- (void)setZoomFraction:(float)arg1 targetDiameter:(float)arg2;
- (void)startAnimation;
- (void)stopAnimation;
- (void)universeAnimationFinished:(id)arg1;
- (void)updateSunLocationForDate:(id)arg1 animated:(BOOL)arg2;

@end
