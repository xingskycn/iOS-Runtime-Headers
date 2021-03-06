/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UISectionList, NSMutableArray;

@interface UISectionTable : UITable  {
    UISectionList *_sectionList;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _visibleHeaders;
    NSMutableArray *_visibleHeaderViews;
    float _rightMargin;
    NSMutableArray *_reusableHeaderCells;
    NSMutableArray *_reusableTransparentHeaderCells;
    int _reusableHeaderCapacity;
    struct { 
        unsigned int style : 1; 
        unsigned int delegateHeaderForSection : 1; 
        unsigned int disableHideHeadersInShortLists : 1; 
        unsigned int disallowsScrollIndicators : 1; 
        unsigned int reserved : 28; 
    } _sectionTableFlags;
}


- (void)dealloc;
- (void)setSectionListStyle:(int)arg1;
- (void)setShouldHideHeaderInShortLists:(BOOL)arg1;
- (void)setAllowsScrollIndicators:(BOOL)arg1;
- (BOOL)sectionHeaderCellWasClicked:(id)arg1;
- (void)scrollRowToVisible:(int)arg1;
- (void)scrollToSectionWithTitle:(id)arg1;
- (BOOL)showsSectionHeaders;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 sectionList:(id)arg2;
- (void)_reloadRowHeights;
- (id)indexTitles;
- (void)scrollToSection:(int)arg1;
- (void)_replaceCellWithOpaqueOneGapIndex:(int)arg1 viewIndex:(int)arg2 width:(float)arg3;
- (void)_replaceCellWithTransparentOneGapIndex:(int)arg1 viewIndex:(int)arg2 width:(float)arg3;
- (void)_updateVisibleCellsNow;
- (BOOL)_shouldHideHeaders;
- (id)_createHeaderCellForHeaderAtIndex:(int)arg1 width:(float)arg2 opaque:(BOOL)arg3 adjustOrigin:(BOOL)arg4;
- (void)_removeHeaderCellsForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)createPreparedCellForRow:(int)arg1 column:(int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 sectionList:(id)arg2;
- (void)floatArray:(id)arg1 getValueCount:(int*)arg2 gapIndexCount:(int*)arg3;
- (BOOL)floatArray:(id)arg1 loadGapIndexes:(int*)arg2 gapHeight:(float*)arg3 count:(int)arg4;
- (void)_updateShowScrollIndicatorsFlag;
- (void)setRightMargin:(float)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)reloadData;
- (void)setDelegate:(id)arg1;

@end
