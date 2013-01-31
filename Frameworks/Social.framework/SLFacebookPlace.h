/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class NSURL, NSString;

@interface SLFacebookPlace : NSObject <NSCoding> {
    NSString *_name;
    NSURL *_pictureURL;
    NSString *_identifier;
    double _longitude;
    double _distance;
    NSString *_category;
    double _latitude;
}

@property(retain) NSString * identifier;
@property(retain) NSString * name;
@property(retain) NSURL * pictureURL;
@property(retain) NSString * category;
@property double latitude;
@property double longitude;
@property double distance;

+ (id)placeWithResponseDictionary:(id)arg1;

- (id)identifier;
- (void)setName:(id)arg1;
- (id)name;
- (id)description;
- (void).cxx_destruct;
- (double)longitude;
- (double)latitude;
- (double)distance;
- (void)setDistance:(double)arg1;
- (id)category;
- (void)setCategory:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)pictureURL;
- (void)setPictureURL:(id)arg1;
- (id)encodableProperties;
- (void)setLongitude:(double)arg1;
- (void)setLatitude:(double)arg1;

@end