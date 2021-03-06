/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKICSPreviewControllerDelegate>, EKEventStore, EKEventViewController, EKICSPreviewModel, UIViewController;

@interface EKICSPreviewController : NSObject {
    BOOL _actionsDisabled;
    BOOL _allowsEditing;
    BOOL _allowsImport;
    BOOL _allowsInvalidProperties;
    BOOL _allowsSubitems;
    BOOL _allowsToDos;
    int _cancelButtonType;
    UIViewController *_contentViewController;
    EKEventViewController *_currentImport;
    EKEventStore *_eventStore;
    BOOL _hasCustomCancelButton;
    BOOL _importing;
    EKICSPreviewModel *_model;
    <EKICSPreviewControllerDelegate> *_previewDelegate;
}

@property BOOL actionsDisabled;
@property BOOL allowsEditing;
@property BOOL allowsImport;
@property BOOL allowsInvalidProperties;
@property BOOL allowsSubitems;
@property BOOL allowsToDos;
@property(readonly) BOOL isImporting;
@property <EKICSPreviewControllerDelegate> * previewDelegate;
@property(readonly) int totalEventCount;
@property(readonly) int unimportedEventCount;

- (void)_createCancelButtonWithType:(int)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)_databaseChanged:(id)arg1;
- (void)_updateCancelButton;
- (BOOL)actionsDisabled;
- (BOOL)allowsEditing;
- (BOOL)allowsImport;
- (BOOL)allowsInvalidProperties;
- (BOOL)allowsSubitems;
- (BOOL)allowsToDos;
- (void)calendarChooserDidCancel:(id)arg1;
- (void)calendarChooserDidFinish:(id)arg1;
- (void)dealloc;
- (id)detailViewForEvent:(id)arg1 eventInRealStore:(BOOL)arg2;
- (void)eventViewControllerDidRequestAddToCalendar:(id)arg1;
- (void)icsPreviewListController:(id)arg1 didSelectEvent:(id)arg2;
- (void)icsPreviewListControllerDidRequestImportAll:(id)arg1;
- (void)importAllIntoCalendar:(id)arg1;
- (void)importAllRequested:(id)arg1;
- (void)importEventFromController:(id)arg1 intoCalendar:(id)arg2;
- (id)initWithData:(id)arg1 eventStore:(id)arg2 options:(unsigned int)arg3;
- (id)initWithData:(id)arg1 eventStore:(id)arg2;
- (id)initWithURL:(id)arg1 eventStore:(id)arg2 options:(unsigned int)arg3;
- (id)initWithURL:(id)arg1 eventStore:(id)arg2;
- (BOOL)isImporting;
- (id)popoverContentController;
- (void)presentCalendarChooserForController:(id)arg1;
- (id)previewDelegate;
- (void)removeCancelButton;
- (void)setActionsDisabled:(BOOL)arg1;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setAllowsImport:(BOOL)arg1;
- (void)setAllowsInvalidProperties:(BOOL)arg1;
- (void)setAllowsSubitems:(BOOL)arg1;
- (void)setAllowsToDos:(BOOL)arg1;
- (void)setCancelButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setPreviewDelegate:(id)arg1;
- (int)totalEventCount;
- (int)unimportedEventCount;
- (id)viewController;

@end
