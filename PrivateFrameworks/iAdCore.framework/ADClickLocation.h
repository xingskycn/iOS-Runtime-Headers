/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@interface ADClickLocation : PBCodable  {
    BOOL _hasX;
    int _x;
    BOOL _hasY;
    int _y;
    BOOL _hasW;
    int _w;
    BOOL _hasH;
    int _h;
}

@property BOOL hasX;
@property int x;
@property BOOL hasY;
@property int y;
@property BOOL hasW;
@property int w;
@property BOOL hasH;
@property int h;


- (id)description;
- (void)dealloc;
- (int)h;
- (int)w;
- (void)setH:(int)arg1;
- (void)setW:(int)arg1;
- (id)dictionaryRepresentation;
- (void)setY:(int)arg1;
- (int)y;
- (void)setX:(int)arg1;
- (int)x;
- (BOOL)readFrom:(id)arg1;
- (void)setHasH:(BOOL)arg1;
- (void)setHasW:(BOOL)arg1;
- (void)setHasY:(BOOL)arg1;
- (void)setHasX:(BOOL)arg1;
- (BOOL)hasH;
- (BOOL)hasW;
- (BOOL)hasY;
- (BOOL)hasX;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;

@end
