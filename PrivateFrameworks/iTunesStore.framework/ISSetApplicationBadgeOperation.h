/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString;

@interface ISSetApplicationBadgeOperation : ISOperation  {
    id _badgeValue;
    NSString *_bundleIdentifier;
}

@property(retain) id badgeValue;
@property(retain) NSString * bundleIdentifier;


- (void)dealloc;
- (id)uniqueKey;
- (void)setBundleIdentifier:(id)arg1;
- (id)badgeValue;
- (void)setBadgeValue:(id)arg1;
- (void)run;
- (id)bundleIdentifier;

@end
