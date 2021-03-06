/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSURLConnection, NSMutableData, NSThread;

@interface GMMLoader : NSObject <NSURLConnectionDelegate> {
    NSURLConnection *_connection;
    struct Requester { int (**x1)(); int x2; struct Connection {} *x3; char *x4; boolx5; boolx6; } *_requester;
    struct Response { int (**x1)(); id x2; } *_response;
    NSMutableData *_data;
    NSThread *_thread;
    BOOL _readPreamble;
    BOOL _needsCancel;
    unsigned long _bodyOffset;
}


- (void)cancel;
- (void)dealloc;
- (void)_cleanup;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_failWithError:(id)arg1;
- (void)setNeedsCancel;
- (id)initWithURL:(id)arg1 postData:(id)arg2 requester:(struct Requester { int (**x1)(); int x2; struct Connection {} *x3; char *x4; boolx5; boolx6; }*)arg3 timeout:(double)arg4;
- (void)_handleSuspendOnThread;
- (BOOL)_continueReadStream:(BOOL)arg1;
- (BOOL)needsCancel;
- (void)_cancelWithErrorCode:(int)arg1;
- (void)_failWithErrorCode:(int)arg1;

@end
