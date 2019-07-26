//
//  ZTHttpService.h
//  Pods
//
//  Created by BRUNO CARNEIRO on 25/07/19.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <CoreBluetooth/CoreBluetooth.h>

#import "ZTLogger.h"

@interface ZTHttpService : NSObject

@property BOOL debugLogEnabled;
@property (retain, readonly) ZTLogger *logger;

- (void) createMeasurementsRequest:(NSMutableDictionary *)beacons;

- (void) createExitRequest:(NSString *)userId;

@end

