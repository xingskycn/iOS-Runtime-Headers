/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, UIImage, NSMutableData, NSURLConnection, NSURL;

@interface UIWebClip : NSObject  {
    NSString *identifier;
    NSURL *pageURL;
    NSArray *icons;
    unsigned int currentIconIndex;
    NSURL *startupImageURL;
    NSURL *startupLandscapeImageURL;
    NSString *title;
    float scale;
    struct CGPoint { 
        float x; 
        float y; 
    } scrollPoint;
    BOOL fullScreen;
    BOOL classicMode;
    BOOL removalDisallowed;
    BOOL iconIsScreenShotBased;
    BOOL iconIsPrecomposed;
    BOOL iconIsPrerendered;
    int statusBarStyle;
    UIImage *iconImage;
    UIImage *startupImage;
    UIImage *startupLandscapeImage;
    id delegate;
    NSMutableData *_customIconData;
    NSURLConnection *_iconConnection;
    NSMutableData *_customStartupImageData;
    NSURLConnection *_startupImageConnection;
    NSMutableData *_customStartupLandscapeImageData;
    NSURLConnection *_startupLandscapeImageConnection;
}

@property(copy) NSString * identifier;
@property(retain) NSURL * pageURL;
@property(retain) NSArray * icons;
@property(retain) NSURL * startupImageURL;
@property(retain) NSURL * startupLandscapeImageURL;
@property(copy) NSString * title;
@property float scale;
@property struct CGPoint { float x1; float x2; } scrollPoint;
@property BOOL fullScreen;
@property BOOL classicMode;
@property BOOL removalDisallowed;
@property(readonly) BOOL iconIsScreenShotBased;
@property(readonly) BOOL iconIsPrecomposed;
@property(readonly) BOOL iconIsPrerendered;
@property int statusBarStyle;
@property(readonly) NSString * iconImagePath;
@property(readonly) UIImage * iconImage;
@property(retain) UIImage * startupImage;
@property(retain) UIImage * startupLandscapeImage;
@property id delegate;

+ (BOOL)webClipClassicModeValueForWebDocumentView:(id)arg1;
+ (BOOL)webClipFullScreenValueForWebDocumentView:(id)arg1;
+ (int)webClipStatusBarStyleForWebDocumentView:(id)arg1;
+ (id)webClips;
+ (id)webClipWithURL:(id)arg1;
+ (id)webClipIconsForWebDocumentView:(id)arg1;
+ (id)_contentForMetaName:(id)arg1 inWebDocumentView:(id)arg2;
+ (id)webClipsDirectoryPath;
+ (id)webClipWithIdentifier:(id)arg1;
+ (id)pathForWebClipWithIdentifier:(id)arg1;
+ (id)urlForWebClipWithIdentifier:(id)arg1;

- (void)dealloc;
- (BOOL)iconIsPrerendered;
- (BOOL)iconIsScreenShotBased;
- (BOOL)removalDisallowed;
- (BOOL)classicMode;
- (struct CGPoint { float x1; float x2; })scrollPoint;
- (id)startupLandscapeImageURL;
- (id)startupImageURL;
- (id)icons;
- (id)getStartupImage:(int)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)updateCustomMediaLocationsFromWebDocumentView:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)setIconImageFromScreenshot:(id)arg1;
- (id)generateIconImageForFormat:(int)arg1 scale:(float)arg2;
- (id)iconImagePath;
- (BOOL)removeFromDisk;
- (BOOL)createOnDisk;
- (id)startupLandscapeImage;
- (id)startupImage;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)requestIconUpdateInSpringBoard;
- (void)setIconImage:(id)arg1 isPrecomposed:(BOOL)arg2;
- (BOOL)tryLoadingNextCustomIcon;
- (void)requestCustomLandscapeStartupImageUpdate;
- (void)requestCustomPortraitStartupImageUpdate;
- (BOOL)fullScreen;
- (void)requestCustomIconUpdate;
- (void)setStartupLandscapeImageURL:(id)arg1;
- (void)setStartupImageURL:(id)arg1;
- (void)setIcons:(id)arg1;
- (id)_displayIdentifierString;
- (void)stopLoadingStartupLandscapeImage;
- (void)stopLoadingStartupImage;
- (void)stopLoadingCustomIcon;
- (id)_initWithIdentifier:(id)arg1;
- (void)cancelMediaUpdate;
- (void)_setIconImage:(id)arg1 isPrecomposed:(BOOL)arg2 isScreenShotBased:(BOOL)arg3;
- (id)_bundleImageWithName:(id)arg1;
- (BOOL)iconIsPrecomposed;
- (id)iconImage;
- (id)_bundleResourceWithName:(id)arg1;
- (void)_reloadProperties;
- (BOOL)updateOnDisk;
- (void)setStartupLandscapeImage:(id)arg1;
- (void)setStartupImage:(id)arg1;
- (BOOL)_writeImage:(id)arg1 toDiskWithFileName:(id)arg2;
- (void)_readPropertiesFromBundle:(struct __CFBundle { }*)arg1;
- (id)pageURL;
- (void)setRemovalDisallowed:(BOOL)arg1;
- (void)setClassicMode:(BOOL)arg1;
- (void)setFullScreen:(BOOL)arg1;
- (void)setScrollPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPageURL:(id)arg1;
- (id)_info;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)title;
- (void)setScale:(float)arg1;
- (int)statusBarStyle;
- (void)setStatusBarStyle:(int)arg1;
- (float)scale;
- (id)delegate;
- (void)setTitle:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
