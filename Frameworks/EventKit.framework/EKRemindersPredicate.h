/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate, NSString;

@interface EKRemindersPredicate : EKPredicate {
}

@property(readonly) BOOL queryCompleted;
@property(readonly) NSDate * queryDueAfter;
@property(readonly) NSDate * queryDueBefore;
@property(readonly) BOOL queryLimitToCompletedOrIncomplete;
@property(readonly) NSString * queryListTitle;
@property(readonly) NSString * querySearchTerm;
@property(readonly) int querySortOrder;
@property(readonly) NSString * queryTitle;
@property(readonly) BOOL queryUseDueDateAsCompletionDate;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)queryCompleted;
- (id)queryDueAfter;
- (id)queryDueBefore;
- (BOOL)queryIncludeRemindersDueBefore;
- (BOOL)queryLimitToCompletedOrIncomplete;
- (id)queryListTitle;
- (id)querySearchTerm;
- (int)querySortOrder;
- (id)queryTitle;
- (BOOL)queryUseDueDateAsCompletionDate;

@end