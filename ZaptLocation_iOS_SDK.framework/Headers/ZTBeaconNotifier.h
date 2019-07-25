//
//  BeaconNotifier.h
//  Pods
//
//  Created by BRUNO CARNEIRO on 25/07/19.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <CoreBluetooth/CoreBluetooth.h>

#import "ZTLogger.h"

@interface ZTBeaconNotifier : NSObject

@property BOOL debugLogEnabled;
@property (retain, readonly) ZTLogger *logger;

- (void) didRangeBeacons:(NSMutableDictionary *)beacons;

@end

