//
//  UnityBanner.h
//  BidmadSDK
//
//  Created by Kenneth on 2021/01/18.
//  Copyright © 2021 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#ifndef OpenBiddingUnityBanner_h
#define OpenBiddingUnityBanner_h

#import <Foundation/Foundation.h>
#import <BidmadSDK/BIDMADSetting.h>
#import "OpenBiddingBanner.h"

static NSMutableDictionary* BidmadOpenBiddingBannerDic;

@interface BidmadBannerAdForGame : NSObject

+ (void)initialSetupForZoneID:(NSString *)zoneID
               viewController:(UIViewController *)viewController
                  xCoordinate:(CGFloat)x
                  yCoordinate:(CGFloat)y;

+ (void)initialSetupForZoneID:(NSString *)zoneID
               viewController:(UIViewController *)viewController
                  yCoordinate:(CGFloat)y;

+ (void)initialSetupForZoneID:(NSString *)zoneID
               viewController:(UIViewController *)viewController
                   adPosition:(BIDMADAdPosition)position;

+ (void)setDelegate:(id)instance;
+ (void)loadWithZoneID:(NSString *)zoneID;
+ (void)removeWithZoneID:(NSString *)zoneID;
+ (void)setRefreshInterval:(NSInteger)interval withZoneID:(NSString *)zoneID;
+ (void)hideWithZoneID:(NSString *)zoneID;
+ (void)showWithZoneID:(NSString *)zoneID;
+ (void)updateViewPositionWithZoneID:(NSString *)zoneID;

@end

#endif /* OpenBiddingUnityBanner_h */
