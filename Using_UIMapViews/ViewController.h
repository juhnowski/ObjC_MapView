//
//  ViewController.h
//  Using_UIMapViews
//
//  Created by Илья Юхновский on 02.06.2018.
//  Copyright © 2018 Илья Юхновский. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
@interface ViewController : UIViewController<MKMapViewDelegate, CLLocationManagerDelegate>{
    
    CLLocationManager *locationManager;
    
}
@property (weak, nonatomic) IBOutlet MKMapView *mapView;
@property (weak, nonatomic) IBOutlet UISegmentedControl *segmentControl;
- (IBAction)changeMap:(id)sender;
- (IBAction)loacateMe:(id)sender;

- (IBAction)route:(id)sender;

@end

