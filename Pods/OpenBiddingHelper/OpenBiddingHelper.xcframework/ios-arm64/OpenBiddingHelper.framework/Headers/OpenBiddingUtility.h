//
//  OpenBiddingUtility.h
//  divination
//
//  Created by ADOP_Mac on 2021/06/24.
//  Copyright © 2021 Handasoft Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, BidmadTestEnvData) {
    BidmadTestEnvDataBannerForSuccessCase_RAW,
    BidmadTestEnvDataBannerForSuccessCase,
    BidmadTestEnvDataBannerForFailCase,
    BidmadTestEnvDataInterstitialForSuccessCase,
    BidmadTestEnvDataInterstitialForFailCase,
    BidmadTestEnvDataRewardVideoForSuccessCase,
    BidmadTestEnvDataADOPRewardVideoForSuccessCase,
    BidmadTestEnvDataADOPRewardVideoForFailCase
};

@interface OpenBiddingUtility : NSObject

+ (NSString *)SDKVersion;

@end

NS_ASSUME_NONNULL_END
