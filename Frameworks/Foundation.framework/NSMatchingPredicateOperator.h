/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMatchingPredicateOperator : NSStringPredicateOperator  {
    int _contextLock;
    struct { id x1; void *x2; } *_regexContext;
}


- (void)_clearContext;
- (BOOL)_shouldEscapeForLike;
- (id)initWithOperatorType:(unsigned int)arg1 modifier:(unsigned int)arg2 variant:(unsigned int)arg3;
- (void)dealloc;
- (void)finalize;
- (SEL)selector;
- (id)symbol;
- (BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;

@end
