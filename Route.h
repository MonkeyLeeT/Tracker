#import <Foundation/Foundation.h>

@class Comment, KeyPoint, MapPoint;

@interface Route : NSObject

@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) NSDate * createdTime;
@property (nonatomic, retain) NSString * keyWords;
@property (nonatomic, retain) NSDate * lastModifiedTime;
@property (nonatomic, retain) NSString * routeId;
@property (nonatomic, assign) BOOL sharedFlag;
@property (nonatomic, retain) NSArray *comments;
@property (nonatomic, retain) NSArray *keyPoints;
@property (nonatomic, retain) NSArray *mapPoints;
@property (nonatomic, retain) NSArray *usersWhoLike;

@end
