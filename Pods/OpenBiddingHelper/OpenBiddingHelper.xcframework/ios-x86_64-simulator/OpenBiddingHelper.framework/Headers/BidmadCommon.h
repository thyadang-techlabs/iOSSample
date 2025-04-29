//
//  BidmadCommon.h
//  OpenBiddingHelper
//
//  Created by ADOP_Mac on 2022/07/01.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import <BidmadSDK/BIDMADGDPR.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadCommon : NSObject

+ (void)setAdvertiserTrackingEnabled:(BOOL)enable;
+ (BOOL)getAdvertiserTrackingEnabled;
+ (void)reqAdTrackingAuthorizationWith:(void (^)(BidmadTrackingAuthorizationStatus))completionHandler;
/// If your app is directed to kids under the age of 13, please set YES or true.
+ (void)setIsChildDirectedAds:(BOOL)isChildDirectedAdsNeeded;
/// If your app should be compliant to CCPA, please set the user consent status with this method.
+ (void)setUserConsentStatusForCCPACompliance:(BOOL)isUserConsent;
+ (void)setIsDebug:(BOOL)isDebug;
+ (BOOL)isDebug;
+ (NSString *)bidmadVersion;
+ (void)setTestDeviceId:(NSString *)testDeviceId;
+ (NSString *)testDeviceId;
/// Setting for Child-Directed Treament for COPPA-Compliance.
+ (NSNumber * _Nullable)isChildDirectedTreatment;
/// Setting for CCPA User Consent Status. If nil, the app does not have to be compliant to CCPA.
+ (NSNumber * _Nullable)isUserConsentCCPA;

/**
 Initializes BidmadSDK with the app domain fetched from Info.plist using the key "BidmadAppDomain"
 */
+ (void)initializeSdk;

/**
Initializes BidmadSDK with the app domain fetched from Info.plist using the key "BidmadAppDomain" and calls the completion handler with a BOOL parameter indicating whether the initialization succeeded or failed.
@param completionHandler The completion handler to call once initialization is complete. This block takes a BOOL parameter indicating whether initialization succeeded (YES) or failed (NO).
*/
+ (void)initializeSdkWithCompletionHandler:(void (^)(BOOL))completionHandler;

/**
 Initializes BidmadSDK with the provided app domain.
 @param appDomain The app domain to use for SDK initialization.
 */
+ (void)initializeSdkWithAppDomain:(NSString *)appDomain;

/**
Initializes BidmadSDK with the provided app domain and calls the completion handler with a BOOL parameter indicating whether the initialization succeeded or failed.
@param appDomain The app domain to use for SDK initialization.
@param completionHandler The completion handler to call once initialization is complete. This block takes a BOOL parameter indicating whether initialization succeeded (YES) or failed (NO).
*/
+ (void)initializeSdkWithAppDomain:(NSString *)appDomain completionHandler:(void (^)(BOOL))completionHandler;

+ (void)setCuid:(NSString *)cuid;
+ (NSString *)cuid;
+ (void)setUseServerSideCallback:(BOOL)useServerSideCallback;
+ (BOOL)useServerSideCallback;

@end

NS_ASSUME_NONNULL_END
