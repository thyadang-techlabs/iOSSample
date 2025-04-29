//
//  BidmadError.h
//  BidmadSDK
//
//  Created by Seungsub Oh on 2022/11/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, BidmadError) {
    BidmadErrorNoError = 0,
    BidmadErrorInternalError = 1,
    BidmadErrorUninitializedAdRequest = 2,
    BidmadErrorParsingFailed = 3,
    BidmadErrorUnregisteredSiteIdx = 4,
    BidmadErrorInitializationError = 5,
    BidmadErrorServerCommunication = 6,
    BidmadErrorNoResponse = 7,
    BidmadErrorAdWeightNoHit = 8,
    BidmadErrorKeyWindowNotFound = 9,
    BidmadErrorParentViewNotFound = 10,
    BidmadErrorRootViewControllerNotFound = 11,
    BidmadErrorBannerSizeNotFound = 12,
    BidmadErrorBannerSizeUnsupported = 13,
    BidmadErrorNetworkSDKNotFound = 14,
    BidmadErrorNetworkAdapterNotFound = 15,
    BidmadErrorNetworkAdRequestTimeout = 16,
    BidmadErrorNetworkLoadabilityCheckFail = 17,
    BidmadErrorEmptyZoneIdFail = 18,
    BidmadErrorAdDataUnavailable = 19,
    BidmadErrorNetworkLoadError = 20,
    BidmadErrorNetworkInsufficientParameter = 21,
    BidmadErrorNetworkInitError = 22,
    BidmadErrorNetworkUninitializedRequestError = 23,
    BidmadErrorMethodCallFail = 24,
    BidmadErrorNoAdsInZone = 25,
    BidmadErrorShowError = 26,
    BidmadErrorLowIOSVersion = 27,
};

@interface BidmadAdError : NSObject

+ (NSError *)generateErrorWithReason:(NSString *)reason code:(NSInteger)code;
+ (NSUInteger)codeFromBidmadError:(BidmadError)error;
+ (NSString *)reasonFromBidmadError:(BidmadError)error;
+ (NSError *)errorFromBidmadError:(BidmadError)error;
+ (NSError *)errorFromBidmadError:(BidmadError)error detail:(NSString *)detail;
+ (NSError *)errorFromBidmadError:(BidmadError)error detail:(NSString *)detail adNetworkName:(NSString * _Nullable)adNetworkName;

@end

NS_ASSUME_NONNULL_END
