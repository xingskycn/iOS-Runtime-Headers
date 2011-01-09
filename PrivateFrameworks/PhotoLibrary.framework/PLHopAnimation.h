/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */



@interface PLHopAnimation : UIFrameAnimation 
{
    struct CGPoint { 
        float x; 
        float y; 
    } _startMid;
    struct CGPoint { 
        float x; 
        float y; 
    } _endMid;
    struct CGPoint { 
        float x; 
        float y; 
    } _control1;
    struct CGPoint { 
        float x; 
        float y; 
    } _control2;
    float _aX;
    float _bX;
    float _cX;
    float _aY;
    float _bY;
    float _cY;
    double _cumulativeTime;
}


- (void)updateControlPoints;
- (void)setStartFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setEndFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setProgress:(float)arg1;
- (double)cumulativeTime;

@end