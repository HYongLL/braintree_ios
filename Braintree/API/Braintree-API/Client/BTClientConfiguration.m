#import "BTClientConfiguration.h"

#import "BTClientApplePayConfigurationAPI.h"
#import "BTClientToken.h"

#import "BTLogger_Internal.h"

@implementation BTClientConfiguration

- (instancetype)initWithClientToken:(BTClientToken *)clientToken {
        NSError *error;
        BTClientApplePayConfiguration *applePayConfiguration = [BTClientApplePayConfigurationAPI modelWithAPIDictionary:clientToken.applePayConfiguration
                                                                                                                  error:&error];

    if (error) {
        [[BTLogger sharedLogger] error:@"Failed to initialize BTClientConfiguration: %@", error];
        return nil;
    }

    self = [super init];
    if (self) {
        self.applePayConfiguration = applePayConfiguration;
    }
    return self;
}

@end
