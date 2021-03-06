/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class PBCompiledFilter, NSString;

@interface PBFilter : NSObject  {
    void *_priv;
}

@property(readonly) NSString * openCLKernelName;
@property(readonly) unsigned long kernelArgCount;
@property(retain) PBCompiledFilter * compiledFilter;

+ (id)defaultValueForKey:(id)arg1;
+ (BOOL)needsDisplayForKey:(id)arg1;
+ (id)filterWithName:(id)arg1;

- (id)description;
- (id)init;
- (void)dealloc;
- (id)localizedName;
- (id)name;
- (void)handleRotateGesture:(float)arg1 stateBegan:(BOOL)arg2 mirror:(BOOL)arg3;
- (void)handlePinchGesture:(float)arg1 stateBegan:(BOOL)arg2;
- (void)handlePanGesture:(struct CGPoint { float x1; float x2; })arg1 viewSize:(struct CGSize { float x1; float x2; })arg2 stateBegan:(BOOL)arg3 mirror:(BOOL)arg4;
- (void)handleGestureAtLocations:(struct CGPoint { float x1; float x2; }*)arg1 count:(int)arg2 translation:(struct CGPoint { float x1; float x2; })arg3 viewSize:(struct CGSize { float x1; float x2; })arg4 stateBegan:(BOOL)arg5 mirror:(BOOL)arg6;
- (void)handleTapGesture:(struct CGPoint { float x1; float x2; })arg1 viewSize:(struct CGSize { float x1; float x2; })arg2 mirror:(BOOL)arg3;
- (void)setFloatValue:(float)arg1 forKeyIfSupported:(id)arg2;
- (void)setPointValue:(struct CGPoint { float x1; float x2; })arg1 forKeyIfSupported:(id)arg2;
- (float)floatValueForKeyIfSupported:(id)arg1;
- (struct CGPoint { float x1; float x2; })pointValueForKeyIfSupported:(id)arg1;
- (unsigned long)kernelArgCount;
- (void)setupKernelArguments:(id)arg1 mirrored:(BOOL)arg2;
- (int (*)())kernelWrapper;
- (id)openCLKernelName;
- (void)renderWithContext:(id)arg1 inputSize:(struct CGSize { float x1; float x2; })arg2 outputRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 mirrored:(BOOL)arg4;
- (id)_lookupTableForName:(id)arg1;
- (id)_lookupTableNames;
- (id)_glesUniforms;
- (id)_glesAttributes;
- (const char *)_fragmentShaderSource;
- (const char *)_vertexShaderSource;
- (void)setCompiledFilter:(id)arg1;
- (id)compiledFilter;
- (id)_presentationName;
- (BOOL)allowAbsoluteGestures;
- (void)renderQuadWithOutputSize:(struct CGSize { float x1; float x2; })arg1;
- (void)renderQuadInStrips:(int)arg1;
- (void)setDefaults;
- (id)inputKeys;

@end
