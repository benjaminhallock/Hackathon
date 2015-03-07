
#import <Foundation/Foundation.h>
#import <Gimbal/Gimbal.h>

/**
 * GimbalAdapter interfaces Gimbal SDK functionality with Urban Airship services.
 */
@interface GimbalAdapter : NSObject <GMBLPlaceManagerDelegate, GMBLCommunicationManagerDelegate>

/**
 * Enables alert when bluetooth is powered off. Defaults to NO.
 */
@property (nonatomic, assign, getter=isBluetoothPoweredOffAlertEnabled) BOOL bluetoothPoweredOffAlertEnabled;

/**
 * Returns the shared `GimbalAdapter` instance.
 *
 * @return The shared `GimbalAdapter` instance.
 */
+ (instancetype)shared;

/**
 * Starts Gimbal adapter.
 */
- (void)startAdapter;

/**
 * Stops Gimbal adapter.
 */
- (void)stopAdapter;

@end
