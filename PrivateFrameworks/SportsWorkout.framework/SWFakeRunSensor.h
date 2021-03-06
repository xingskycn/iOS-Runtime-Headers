/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class <SWFakeRunSensorDelegate>;

@interface SWFakeRunSensor : SWRunSensor  {
    <SWFakeRunSensorDelegate> *_delegate;
}

+ (void)initialize;
+ (id)_newDelegate;

- (id)init;
- (void)dealloc;
- (void)deactivate;
- (void)_fakeLinkingFailure;
- (unsigned int)remainingBatteryLifetimeInHours;
- (void)cancelSearching;
- (void)beginSearching;
- (void)cancelLinking;
- (void)beginLinking;
- (void)_fakeNextPacketWithPayload:(id)arg1 timestamp:(unsigned long)arg2;
- (void)_fakeSearchSuccess;
- (void)_fakeLinkingSuccess;

@end
