//
//  BIDMADInterstitial.h
//  BIDMADSDK
//
//  Created by 김선정 on 2015. 7. 15..
//  Copyright (c) 2015년 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

@class OpenBiddingInterstitial;

#import <Foundation/Foundation.h>
#import <BidmadSDK/BIDMADUtil.h>
#import <BidmadSDK/BIDMADSetting.h>
#import <BidmadSDK/BidmadLoadStatus.h>
#import <BidmadSDK/BidmadSDK-Swift.h>

NS_ASSUME_NONNULL_BEGIN

@protocol BIDMADOpenBiddingInterstitialDelegate <NSObject>
@optional

- (void)onLoadFailAd:(OpenBiddingInterstitial * _Nonnull)bidmadAd error:(NSError * _Nonnull)error;

- (void)onLoadAd:(OpenBiddingInterstitial * _Nonnull)bidmadAd __deprecated_msg("use onLoadAd:info: instead");

- (void)onLoadAd:(OpenBiddingInterstitial * _Nonnull)bidmadAd info:(BidmadInfo *)info;

- (void)onCloseAd:(OpenBiddingInterstitial * _Nonnull)bidmadAd __deprecated_msg("use onCloseAd:info: instead");

- (void)onCloseAd:(OpenBiddingInterstitial * _Nonnull)bidmadAd
             info:(BidmadInfo *)info;

- (void)onShowAd:(OpenBiddingInterstitial * _Nonnull)bidmadAd __deprecated_msg("use onShowFailAd:info:error:");

- (void)onShowAd:(OpenBiddingInterstitial * _Nonnull)bidmadAd
            info:(BidmadInfo *)info;

- (void)onShowFailAd:(OpenBiddingInterstitial * _Nonnull)bidmadAd
               error:(NSError * _Nonnull)error __deprecated_msg("use onShowFailAd:info:error:");

- (void)onShowFailAd:(OpenBiddingInterstitial *)bidmadAd
                info:(BidmadInfo *)info
               error:(NSError *)error;

- (void)onClickAd:(OpenBiddingInterstitial * _Nonnull)bidmadAd __deprecated_msg("use onClickAd:info: instead");

- (void)onClickAd:(OpenBiddingInterstitial *)bidmadAd
             info:(BidmadInfo *)info;

@end

@interface OpenBiddingInterstitial : NSObject

@property (nonatomic, weak) id<BIDMADOpenBiddingInterstitialDelegate> _Nullable delegate;
@property (nonatomic, weak) id<BIDMADOpenBiddingInterstitialDelegate> _Nullable preloadDelegate;
@property (readonly) BOOL isLoaded;
@property (nonatomic) BidmadLoadStatus loadStatus;
@property (nonatomic, strong) NSString *zoneID;
@property (nonatomic, strong) BIDMADInterstitial *bidmadInterstitial;

- (nonnull instancetype)initWithZoneID:(NSString * _Nonnull)zoneID;
- (void)requestInterstitialView;
- (void)showInterstitialViewOnViewController:(UIViewController * _Nonnull)viewController;

@end

NS_ASSUME_NONNULL_END
