/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISOpenURLRequest;

@interface ISOpenURLOperation : ISOperation  {
    ISOpenURLRequest *_request;
}

@property(readonly) ISOpenURLRequest * openURLRequest;


- (id)init;
- (void)dealloc;
- (id)openURLRequest;
- (id)_newSortedTargetsArray;
- (BOOL)_openURL:(id)arg1;
- (void)run;
- (id)initWithOpenURLRequest:(id)arg1;

@end
