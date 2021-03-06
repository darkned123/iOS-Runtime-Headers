/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface SLSystemConfigManager : NSObject {
    int _applySkipCount;
    BOOL _notifyForExternalChangeOnly;
    void *_prefs;
    NSString *_serviceType;
}

+ (id)sharedInstanceForCallbackWhileLocked:(void*)arg1;
+ (id)sharedInstanceForServiceType:(id)arg1;

- (void).cxx_destruct;
- (void*)_getValueForKey:(id)arg1;
- (void)_initializeSystemConfigPrefs:(id)arg1;
- (void)_keepAlive;
- (void)_notifyTarget:(unsigned int)arg1;
- (void)_refresh;
- (void)_setCallback:(int (*)())arg1 withContext:(struct { int x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); }*)arg2;
- (void)_setValue:(void*)arg1 forKey:(id)arg2;
- (void)_synchronize;
- (void)_tearDown;
- (id)cachedUsername;
- (void)dealloc;
- (id)initWithServiceType:(id)arg1;
- (void)setCachedUsername:(id)arg1;
- (void)setTimestampSkew:(double)arg1;
- (double)timestampSkew;

@end
