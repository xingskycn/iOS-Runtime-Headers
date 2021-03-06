/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface AXNotificationHandler : NSObject  {
    NSString *_notificationName;
    id _target;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _dispatcher;

    unsigned int _observerIdentifier;
    BOOL _valid;
}

@property(getter=isValid,readonly) BOOL valid;
@property(setter=_setNotificationName:,retain) NSString * _notificationName;
@property(setter=_setTarget:,retain) id _target;
@property(setter=_setDispatcher:,copy) id _dispatcher;

+ (id)_safelyGetObserverForIdentifier:(unsigned int)arg1;
+ (void)_safelyRemoveObserverForIdentifier:(unsigned int)arg1;
+ (unsigned int)_safelyRegisterObserver:(id)arg1;

- (void)_handleNotificationWithName:(id)arg1 object:(const void*)arg2 userInfo:(id)arg3;
- (id)_dispatcher;
- (void)_stopObserving;
- (void)_startObserving;
- (id)_notificationName;
- (id)_notificationTypeDescription;
- (void)_setDispatcher:(id)arg1;
- (void)_setNotificationName:(id)arg1;
- (id)initWithNotificationName:(id)arg1 target:(id)arg2 dispatcher:(id)arg3 startObserving:(BOOL)arg4;
- (void)processHandler:(SEL)arg1;
- (id)initWithNotificationName:(id)arg1 target:(id)arg2 handler:(SEL)arg3;
- (id)initWithNotificationName:(id)arg1 target:(id)arg2 dispatcher:(id)arg3;
- (id)description;
- (void)dealloc;
- (void)_setTarget:(id)arg1;
- (id)_target;
- (BOOL)isValid;
- (void)invalidate;

@end
