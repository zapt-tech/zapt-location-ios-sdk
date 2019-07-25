//
//  ZTLocationSDK.h
//  Pods
//
//  Created by BRUNO CARNEIRO on 25/07/19.
//

#import <CoreLocation/CoreLocation.h>
#import <CoreBluetooth/CoreBluetooth.h>

#import "ZTBeaconNotifier.h"
#import "ZTLogger.h"

//! Project version number for ZaptLocation_iOS_SDK.
FOUNDATION_EXPORT double ZaptLocation_iOS_SDKVersionNumber;

//! Project version string for ZaptLocation_iOS_SDK.
FOUNDATION_EXPORT const unsigned char ZaptLocation_iOS_SDKVersionString[];

@interface ZTLocationSDK: NSObject<CLLocationManagerDelegate> {
    
}

@property (retain) NSOperationQueue *queue;

@property (retain) CLLocationManager *locationManager;

@property (retain) NSString* delegateCallbackId;

@property (retain, readonly) ZTLogger *logger;

@property BOOL debugLogEnabled;

@property BOOL debugNotificationsEnabled;

@property (retain) CBPeripheralManager *peripheralManager;
@property (retain) CLRegion *advertisedBeaconRegion;
@property (retain) NSDictionary *advertisedPeripheralData;
@property (retain) ZTBeaconNotifier *notifier;

- (void)start;
- (void)stop;

- (ZTLogger*) getLogger;

@end

