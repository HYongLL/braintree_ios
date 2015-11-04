#if __has_include("BraintreeCard.h")
#import "BTCardNonce.h"
#else
#import <BraintreeCard/BTCardNonce.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@interface BTThreeDSecureTokenizedCard : BTCardNonce

@property (nonatomic, readonly, assign) BOOL liabilityShifted;
@property (nonatomic, readonly, assign) BOOL liabilityShiftPossible;

#pragma mark - Internal

- (instancetype)initWithPaymentMethodNonce:(NSString *)nonce
                               description:(nullable NSString *)description
                               cardNetwork:(BTCardNetwork)cardNetwork
                                   lastTwo:(nullable NSString *)lastTwo
                          threeDSecureJSON:(BTJSON *)threeDSecureJSON;

@end

NS_ASSUME_NONNULL_END
