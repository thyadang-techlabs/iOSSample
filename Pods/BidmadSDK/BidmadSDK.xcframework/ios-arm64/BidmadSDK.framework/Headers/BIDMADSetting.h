//
//  AdopMobileAds.h
//  BIDMADSDK
//
//  Created by 김선정 on 2015. 7. 13..
//  Copyright (c) 2015년 ADOP Co., Ltd. All rights reserved.
//

//@import GoogleMobileAds;

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import <BidmadSDK/BidmadSendLogDelegate.h>

#define BIDMAD_APPINFO_URL      @"https://appinfo.adop.cc/app_collect.php"

//Bidmad AppTrackingTransparency 관련 내용 정의
typedef NS_CLOSED_ENUM(NSUInteger, BidmadTrackingAuthorizationStatus) {
    BidmadTrackingAuthorizationStatusNotDetermined = 0,
    BidmadTrackingAuthorizationStatusRestricted = 1,
    BidmadTrackingAuthorizationStatusDenied = 2,
    BidmadTrackingAuthorizationStatusAuthorized = 3,
    BidmadTrackingAuthorizationStatusLessThaniOS14 = 4
};

typedef void (^CompleteHandler)(BidmadTrackingAuthorizationStatus status);
//Bidmad AppTrackingTransparency 관련 내용 정의

extern NSString* _Nonnull const BIDMAD_GDPR_CONSENT;
extern NSString* _Nonnull const BIDMAD_CCPA_CONSENT;

@interface BIDMADSetting : NSObject

+ (BIDMADSetting * _Nonnull)sharedInstance;
- (void)setAdvertiserTrackingEnabled:(BOOL)enable;
- (BOOL)getAdvertiserTrackingEnabled;
- (void)reqAdTrackingAuthorizationWithCompletionHandler:(void (^_Nonnull)(BidmadTrackingAuthorizationStatus))completeHandler;

/**
 Initializes our SDK with the app domain fetched from Info.plist using the key "BidmadAppDomain".
 @param platform The platform (ios, flutter, unity, unreal, cocos2dx, reactnative) where the code is being executed
*/
- (void)initializeSdkWithPlatform:(NSString * _Nonnull)platform;

/**
 Initializes BidmadSDK with the app domain fetched from Info.plist using the key "BidmadAppDomain" and calls the completion handler with a BOOL parameter indicating whether the initialization succeeded or failed.
 @param platform The platform (ios, flutter, unity, unreal, cocos2dx, reactnative) where the code is being executed
 @param completionHandler The completion handler to call once initialization is complete. This block takes a BOOL parameter indicating whether initialization succeeded (YES) or failed (NO).
*/
- (void)initializeSdkWithPlatform:(NSString * _Nonnull)platform 
                completionHandler:(void (^_Nullable)(BOOL))completionHandler;

/**
 Initializes BidmadSDK with the provided app domain.
 @param appDomain The app domain to use for SDK initialization.
 @param platform The platform (ios, flutter, unity, unreal, cocos2dx, reactnative) where the code is being executed
*/
- (void)initializeSdkWithDomain:(NSString * _Nonnull)appDomain
                       platform:(NSString * _Nonnull)platform;

/**
 Initializes BidmadSDK with the provided app domain and calls the completion handler with a BOOL parameter indicating whether the initialization succeeded or failed.
 @param appDomain The app domain to use for SDK initialization.
 @param platform The platform (ios, flutter, unity, unreal, cocos2dx, reactnative) where the code is being executed
 @param completionHandler The completion handler to call once initialization is complete. This block takes a BOOL parameter indicating whether initialization succeeded (YES) or failed (NO).
*/
- (void)initializeSdkWithDomain:(NSString * _Nullable)appDomain
                       platform:(NSString * _Nullable)platform
              completionHandler:(void (^ _Nullable)(BOOL))completionHandler;

/// If your app is directed to kids under the age of 13, please set YES or true.
- (void)setIsChildDirectedAds: (BOOL)isChildDirectedAdsNeeded;

/// If your app should be compliant to CCPA, please set the user consent status with this method.
- (void)setUserConsentStatusForCCPACompliance: (BOOL)isUserConsent;

@property (nonatomic)bool isDebug;

@property (nonatomic, strong) NSString * _Nonnull version;

@property (nonatomic, strong) NSString * _Nullable testDeviceId;

/// Setting for Child-Directed Treament for COPPA-Compliance.
@property (nonatomic, strong) NSNumber * __nullable isChildDirectedTreatment;

/// Setting for CCPA User Consent Status. If nil, the app does not have to be compliant to CCPA.
@property (nonatomic, strong) NSNumber * __nullable isUserConsentCCPA;

@property (nonatomic, weak) id<BidmadSendLogDelegate> __nullable bidmadLogDelegate;

/// Setting this property allows CUID to be sent to ADOP.
@property (nonatomic, strong) NSString * __nullable cuid;

/// Setting this property to @YES enables a server-side callbacks from rewarded ads from various ad networks
@property (nonatomic) NSNumber * _Nonnull useServerSideCallback;

@property (readonly) BOOL isInitialized;

@property (nonatomic, strong) NSDictionary * _Nullable adNetworkSupport;

@property (nonatomic) BOOL isATTPopupAllowed;

@property (nonatomic, readonly) NSString * _Nonnull customDomain;

@property (nonatomic, strong) NSDictionary<NSString *, NSArray<NSString *> *> * _Nullable nasMediaInitializables;

@end
