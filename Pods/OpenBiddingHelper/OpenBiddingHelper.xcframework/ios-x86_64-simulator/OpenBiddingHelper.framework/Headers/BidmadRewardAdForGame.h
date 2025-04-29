//
//  UnityReward.h
//  BidmadSDK
//
//  Created by Kenneth on 2021/01/15.
//  Copyright © 2021 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import "OpenBiddingRewardVideo.h"

@interface BidmadRewardAdForGame : NSObject

+ (void)initialSetupForZoneID:(NSString *)zoneID;
+ (void)loadWithZoneID:(NSString *)zoneID;
+ (void)showWithZoneID:(NSString *)zoneID viewController:(UIViewController *)viewController;
+ (BOOL)isLoadedWithZoneID:(NSString *)zoneID;
+ (void)setDelegate:(id)instance;
+ (void)setAutoReload:(BOOL)isAutoReload;
+ (UIViewController *)getCommonViewController;

@end
