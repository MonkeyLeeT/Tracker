#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>


@interface DisplayMapViewController : UIViewController  <MKMapViewDelegate>

- (void) startTracking;
- (void) stopTracking;
@property (strong, nonatomic) NSMutableArray *keyPoints;
@property (strong, nonatomic) NSMutableArray *routePoints;
@end
