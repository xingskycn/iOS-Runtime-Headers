/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CPEnumerationMap : NSObject  {
    struct __CFDictionary { } *m_valueToString;
    struct __CFDictionary { } *m_stringToValue;
    BOOL m_caseSensitive;
}


- (void)dealloc;
- (id)initWithStructs:(const struct CPEnumerationStruct { int x1; id x2; }*)arg1 count:(int)arg2;
- (id)initWithStructs:(const struct CPEnumerationStruct { int x1; id x2; }*)arg1 count:(int)arg2 caseSensitive:(BOOL)arg3;
- (int)valueForString:(id)arg1;
- (id)stringForValue:(int)arg1;

@end
