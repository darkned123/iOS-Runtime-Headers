/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSDate, NSNumber, NSString, NSURL;

@interface SAReminderSearch : SABaseClientBoundCommand {
}

@property(copy) NSNumber * completionStatus;
@property(copy) NSDate * dueAfter;
@property(copy) NSDate * dueBefore;
@property(copy) NSString * listName;
@property(copy) NSString * subject;
@property(copy) NSURL * targetAppId;
@property(copy) NSString * timeZoneId;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)completionStatus;
- (id)dueAfter;
- (id)dueBefore;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)listName;
- (BOOL)requiresResponse;
- (void)setCompletionStatus:(id)arg1;
- (void)setDueAfter:(id)arg1;
- (void)setDueBefore:(id)arg1;
- (void)setListName:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setTargetAppId:(id)arg1;
- (void)setTimeZoneId:(id)arg1;
- (id)subject;
- (id)targetAppId;
- (id)timeZoneId;

@end
