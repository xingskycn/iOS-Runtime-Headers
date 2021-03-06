/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableArray;

@interface _PFGarbageManager : NSObject  {
    NSMutableArray *_urlsToCleanUp;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)defaultInstance;

- (unsigned int)retainCount;
- (id)retain;
- (void)release;
- (id)autorelease;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)registerURLForCleanup:(id)arg1;
- (id)temporaryLinksDirectoryForStore:(id)arg1;
- (void)doCleanupForURL:(id)arg1;
- (id)_init__;
- (void)removeDirectory:(id)arg1;

@end
