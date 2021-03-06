/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber, NSArray;

@interface SSRentalCheckoutRequest : SSRequest <SSCoding> {
    NSNumber *_accountIdentifier;
    long long _downloadIdentifier;
    NSNumber *_rentalKeyIdentifier;
    NSArray *_sinfs;
}

@property(readonly) NSArray * sinfs;
@property(readonly) NSNumber * accountIdentifier;
@property(readonly) NSNumber * rentalKeyIdentifier;
@property(readonly) long long downloadIdentifier;


- (id)init;
- (void)dealloc;
- (id)sinfs;
- (long long)downloadIdentifier;
- (id)initWithDownloadIdentifier:(long long)arg1;
- (id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2;
- (id)accountIdentifier;
- (id)rentalKeyIdentifier;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id*)arg2;
- (BOOL)handleFinishResponse:(id)arg1 error:(id*)arg2;
- (void*)copyXPCEncoding;
- (id)initWithXPCEncoding:(void*)arg1;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)initWithSinfs:(id)arg1;

@end
