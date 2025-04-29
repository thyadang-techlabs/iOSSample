//
//  BIDMADRewardVideo.h
//  BidmadSDK
//
//  Created by 김선정 on 2018. 10. 29..
//  Copyright © 2018년 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import <BidmadSDK/BIDMADUtil.h>
#import <BidmadSDK/BIDMADSetting.h>
#import <BidmadSDK/BidmadAdUnit.h>
#import <BidmadSDK/BidmadAppOpenAdapter.h>

NS_ASSUME_NONNULL_BEGIN

@interface BIDMADAppOpenAd : NSObject

@property (nonatomic, strong) BidmadAppOpenAdapter *adapter;

- (instancetype _Nonnull)initWithInstanceOBH:(id _Nullable)instanceOBH;
- (void)showAppOpenAdOnViewController:(UIViewController * _Nonnull)viewController;
- (void)selectAdUnit:(BidmadAdUnit *)adUnit;

@end

NS_ASSUME_NONNULL_END
