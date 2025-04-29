//
//  BIDMADInterstitial.h
//  BIDMADSDK
//
//  Created by 김선정 on 2015. 7. 15..
//  Copyright (c) 2015년 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import <BidmadSDK/BIDMADUtil.h>
#import <BidmadSDK/BIDMADSetting.h>
#import <BidmadSDK/BidmadAdUnit.h>
#import <BidmadSDK/OBHCommunicationDelegate.h>
#import <BidmadSDK/BidmadInterstitialAdapter.h>

NS_ASSUME_NONNULL_BEGIN

@interface BIDMADInterstitial : NSObject

@property (nonatomic, strong) BidmadInterstitialAdapter *adapter;

- (instancetype)initWithInstanceOBH:(id<OBHCommunicationDelegate>)instanceOBH;
- (void)showInterstitialViewOnViewController:(UIViewController * _Nonnull)viewController;
- (void)selectAdUnit:(BidmadAdUnit *)adUnit;

@end

NS_ASSUME_NONNULL_END
