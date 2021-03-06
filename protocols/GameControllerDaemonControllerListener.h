/* Generated by RuntimeBrowser.
 */

@protocol GameControllerDaemonControllerListener

@required

- (void)addController:(GCController *)arg1;
- (void)controllerWithUDID:(unsigned int)arg1 setData:(NSData *)arg2;
- (void)controllerWithUDID:(unsigned int)arg1 setValue:(float)arg2 forElement:(int)arg3;
- (void)microControllerWithDigitizerX:(float)arg1 withY:(float)arg2 withTimeStamp:(unsigned long long)arg3 touchDown:(BOOL)arg4;
- (void)microControllerWithUDID:(unsigned int)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(BOOL)arg5;
- (void)removeController:(GCController *)arg1;

@end
