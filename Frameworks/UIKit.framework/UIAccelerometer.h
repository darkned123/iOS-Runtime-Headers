/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIAccelerometerDelegate>;

@interface UIAccelerometer : NSObject {
    struct { 
        unsigned int delegateDidAccelerate : 1; 
        unsigned int reserved : 31; 
    } _accelerometerFlags;
    <UIAccelerometerDelegate> *_delegate;
    double _updateInterval;
}

@property <UIAccelerometerDelegate> * delegate;
@property double updateInterval;

+ (id)sharedAccelerometer;

- (void)_acceleratedInX:(double)arg1 y:(double)arg2 z:(double)arg3 timestamp:(double)arg4;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setUpdateInterval:(double)arg1;
- (double)updateInterval;

@end
