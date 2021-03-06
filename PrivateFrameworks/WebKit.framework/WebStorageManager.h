/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@interface WebStorageManager : NSObject  {
}

+ (id)sharedWebStorageManager;

- (id)init;
- (void)deleteAllOrigins;
- (void)syncLocalStorage;
- (void)syncFileSystemAndTrackerDatabase;
- (id)origins;
- (void)deleteOrigin:(id)arg1;
- (unsigned long long)diskUsageForOrigin:(id)arg1;

@end
