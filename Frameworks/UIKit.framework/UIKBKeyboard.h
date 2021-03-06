/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface UIKBKeyboard : UIKBShape <NSCoding, UIKBCacheKey> {
    NSString *m_name;
    NSString *m_visualStyle;
    NSString *m_layout;
    NSMutableArray *m_keyplanes;
    NSMutableDictionary *m_keyCache;
    NSMutableDictionary *m_keysetCache;
}

@property(retain) NSString * name;
@property(retain) NSString * visualStyle;
@property(retain) NSArray * keyplanes;
@property(retain) NSDictionary * keyCache;
@property(retain) NSMutableDictionary * keysetCache;
@property(readonly) NSString * layoutName;
@property(readonly) NSString * cacheKey;

+ (id)keyboard;

- (void)setName:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)setKeysetCache:(id)arg1;
- (id)keysetCache;
- (void)setKeyCache:(id)arg1;
- (void)setKeyplanes:(id)arg1;
- (id)currentKeyplanes;
- (void)addKeyplane:(id)arg1;
- (id)keyplaneWithName:(id)arg1;
- (id)cachedKeysByKeyName:(id)arg1 onKeyplane:(id)arg2;
- (id)keyplanes;
- (void)cacheKey:(id)arg1 onKeyplane:(id)arg2;
- (id)keyCache;
- (id)cacheKey;
- (id)layoutName;
- (void)makeLikeOther:(id)arg1;
- (id)visualStyle;
- (void)setVisualStyle:(id)arg1;
- (id)keyplaneForKey:(id)arg1;
- (void)layout;
- (id)name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
