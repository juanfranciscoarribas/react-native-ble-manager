#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>

@interface BLECommandContext : NSObject

@property CBPeripheral *peripheral;
@property CBService *service;
@property CBCharacteristic *characteristic;
@property CBDescriptor *descriptor;

@end
