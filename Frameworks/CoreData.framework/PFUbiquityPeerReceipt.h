/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class PFUbiquityKnowledgeVector, PFUbiquityLocation;

@interface PFUbiquityPeerReceipt : NSObject <NSCoding> {
    PFUbiquityKnowledgeVector *_kv;
    PFUbiquityLocation *_receiptFileLocation;
}

@property(readonly) PFUbiquityKnowledgeVector * kv;
@property(readonly) PFUbiquityLocation * receiptFileLocation;


- (id)description;
- (id)init;
- (void)dealloc;
- (id)receiptFileLocation;
- (id)initWithPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4;
- (BOOL)existsInCloud;
- (BOOL)loadReceiptFile:(id*)arg1;
- (id)kv;
- (id)initWithReceiptFileLocation:(id)arg1;
- (id)initWithKnowledgeVector:(id)arg1 forPeerID:(id)arg2 storeName:(id)arg3 modelVersionHash:(id)arg4 andUbiquityRootLocation:(id)arg5;
- (BOOL)writeReceiptToFile:(id*)arg1;

@end
