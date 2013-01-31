/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class UILabel;

@interface SBDeviceLockTitleWildcatKeyboard : SBDeviceLockTitle  {
    BOOL _highlighted;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}


- (void)dealloc;
- (void)blinkSubtitle;
- (id)_initWithStyle:(int)arg1 interfaceOrientation:(int)arg2;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)_backgroundImage;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;

@end