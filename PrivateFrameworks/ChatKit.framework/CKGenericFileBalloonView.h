/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIImageView, UILabel, NSString, UIImage;

@interface CKGenericFileBalloonView : CKBalloonView  {
    UIImageView *_iconImageView;
    UILabel *_textLabel;
    UILabel *_subtextLabel;
}

@property(copy) NSString * text;
@property(copy) NSString * subtext;
@property(retain) UIImage * icon;
@property(retain) UILabel * subtextLabel;
@property(retain) UILabel * textLabel;
@property(retain) UIImageView * iconImageView;

+ (id)textColorForBalloonOrientation:(int)arg1 outgoingBalloonColor:(int)arg2;
+ (float)fixedHeight;
+ (struct CGPoint { float x1; float x2; })entryFieldBalloonOffset;
+ (float)entryFieldBalloonAdditionalHeight;
+ (float)heightForText:(id)arg1 width:(float)arg2 includeBuffers:(BOOL)arg3;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsetsForBalloonOrientation:(int)arg1;

- (void)dealloc;
- (void)updateTextColor;
- (id)subtext;
- (void)setIconImageView:(id)arg1;
- (void)setSubtextLabel:(id)arg1;
- (id)subtextLabel;
- (void)setSubtext:(id)arg1;
- (BOOL)shouldHaveAccessoryDiclosure;
- (float)tightenedWidth;
- (void)setTextLabel:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 delegate:(id)arg2;
- (void)updateTextShadowColor;
- (id)textLabel;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)iconImageView;
- (void)prepareForReuse;
- (id)text;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setText:(id)arg1;
- (void)layoutSubviews;

@end
