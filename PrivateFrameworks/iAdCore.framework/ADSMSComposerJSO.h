/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSArray, NSString, <ADJSODelegate>, WebScriptObject;

@interface ADSMSComposerJSO : ADJavaScriptObject <MFMessageComposeViewControllerDelegate> {
    <ADJSODelegate> *_delegate;
    NSArray *_messageRecipients;
    NSString *_messageBody;
    WebScriptObject *_listener;
}

@property <ADJSODelegate> * delegate;
@property(retain) NSArray * messageRecipients;
@property(copy) NSString * messageBody;
@property(retain) WebScriptObject * listener;

+ (void)initializeInContext:(struct OpaqueJSContext { }*)arg1;
+ (id)scriptingKeys;
+ (id)scriptSelectors;

- (id)messageBody;
- (void)setMessageBody:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)recipients;
- (void)setRecipients:(id)arg1;
- (id)listener;
- (void)send;
- (id)body;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setBody:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (id)messageRecipients;
- (void)setMessageRecipients:(id)arg1;
- (void)setListener:(id)arg1;

@end
