//
//  BIDMADUtil.h
//  BidmadSDK
//
//  Created by 김선정 on 2015. 7. 20..
//  Copyright (c) 2015년 ADOP Co., Ltd. All rights reserved.

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <BidmadSDK/BIDMADSetting.h>
#import <BidmadSDK/BIDMADRewardVideo.h>
#import <SystemConfiguration/CaptiveNetwork.h>
#import <CoreLocation/CoreLocation.h>
#import <BidmadSDK/BidmadAdUnit.h>

@class BidmadAdUnit;

@interface BIDMADUtil : NSObject

+ (NSURLSessionDataTask * _Nonnull)dataTaskFromHost:(NSString * _Nonnull)host path:(NSString * _Nonnull)path queryItems:(NSArray<NSURLQueryItem *> * _Nonnull)queryItems handler:(void (^_Nonnull)(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error))handler;

/**
 * Check the availability of the advertising ID based on the iOS version.
 * @return BOOL - Indicating whether the Ad ID is available.
 */
+ (BOOL)isAdIdAvailable;

+ (NSString * _Nonnull)identifierForAdvertising;

+ (NSString* _Nonnull) deviceName;

+ (UIWindow* _Nullable)fetchKeyWindow;

+ (NSString * _Nonnull)getCurrentRegionInfo;

+ (UIViewController* _Nullable)topMostController;

+ (void)sendLogForAdUnit:(BidmadAdUnit * _Nonnull)adUnit
                 logType:(NSString * _Nonnull)logType;

@end
