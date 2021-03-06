/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UIImage, NSString, MKMapSnapshotRequest, NSLock, NSMutableArray;

@interface MKMapSnapshotCreator : NSObject <MKMapViewDelegate> {
    UIImage *_lastSnapshot;
    NSString *_lastAttributionString;
    NSLock *_requestLock;
    NSMutableArray *_requests;
    MKMapSnapshotRequest *_servingRequest;
}

@property(retain) MKMapSnapshotRequest * servingRequest;


- (id)init;
- (void)dealloc;
- (void)createSnapShotWithCoordinate:(struct { double x1; double x2; })arg1 zoomLevel:(unsigned int)arg2 size:(struct CGSize { float x1; float x2; })arg3 handler:(id)arg4;
- (void)flushRequestQueue;
- (void)didDisplaySnapShotWithCoordinate:(struct { double x1; double x2; })arg1 zoomLevel:(unsigned int)arg2 size:(struct CGSize { float x1; float x2; })arg3;
- (id)recreateCurrentSnapshotWithRequester:(id)arg1 context:(id)arg2;
- (void)createSnapShotWithCoordinate:(struct { double x1; double x2; })arg1 zoomLevel:(unsigned int)arg2 size:(struct CGSize { float x1; float x2; })arg3 requester:(id)arg4 context:(id)arg5;
- (id)_newSnapshotWithView:(id)arg1;
- (void)_processRequest;
- (void)_respondWithSnapshot;
- (void)setServingRequest:(id)arg1;
- (id)servingRequest;

@end
