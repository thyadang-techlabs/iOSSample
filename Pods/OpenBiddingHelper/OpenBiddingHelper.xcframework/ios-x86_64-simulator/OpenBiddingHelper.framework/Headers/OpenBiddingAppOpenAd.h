//
//  OpenBiddingAppOpenAd.h
//  OpenBiddingHelper
//
//  Created by 김선정 on 2018. 10. 29..
//  Copyright © 2018년 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import <BidmadSDK/BIDMADUtil.h>
#import <BidmadSDK/BIDMADSetting.h>
#import <BidmadSDK/BIDMADAppOpenAd.h>
#import <BidmadSDK/BidmadSDK-Swift.h>
#import <BidmadSDK/BIDMADAppOpenAd.h>

NS_ASSUME_NONNULL_BEGIN

@protocol OpenBiddingAppOpenAdDelegate;

@interface OpenBiddingAppOpenAd : NSObject

@property (nonatomic, weak) id<OpenBiddingAppOpenAdDelegate> _Nullable delegate;
@property (readonly) BOOL isLoaded;
@property (nonatomic, strong) NSString * _Nullable zoneID;
@property (nonatomic, strong) BIDMADAppOpenAd *bidmadAppOpenAd;

- (void)showAppOpenAdOnViewController:(UIViewController *)viewController;
- (void)requestAppOpenAd;
- (void)registerForAppOpenAdForZoneID:(NSString * _Nonnull)zoneId;
- (void)deregisterForAppOpenAd;

@end

@protocol OpenBiddingAppOpenAdDelegate <NSObject>
@optional

- (void)onLoadFailAd:(OpenBiddingAppOpenAd * _Nonnull)bidmadAd error:(NSError * _Nonnull)error;

- (void)onLoadAd:(OpenBiddingAppOpenAd * _Nonnull)bidmadAd __deprecated_msg("use onLoadAd:info: instead");

- (void)onLoadAd:(OpenBiddingAppOpenAd * _Nonnull)bidmadAd
            info:(BidmadInfo *)info;

- (void)onCloseAd:(OpenBiddingAppOpenAd * _Nonnull)bidmadAd __deprecated_msg("use onCloseAd:info:");

- (void)onCloseAd:(OpenBiddingAppOpenAd * _Nonnull)bidmadAd
             info:(BidmadInfo * _Nonnull)info;

- (void)onShowAd:(OpenBiddingAppOpenAd * _Nonnull)bidmadAd __deprecated_msg("use onShowAd:info:");

- (void)onShowAd:(OpenBiddingAppOpenAd * _Nonnull)bidmadAd
            info:(BidmadInfo * _Nonnull)info;

- (void)onShowFailAd:(OpenBiddingAppOpenAd * _Nonnull)bidmadAd
               error:(NSError * _Nonnull)error __deprecated_msg("use onShowFailAd:error:info:");

- (void)onShowFailAd:(OpenBiddingAppOpenAd * _Nonnull)bidmadAd
                info:(BidmadInfo * _Nonnull)info
               error:(NSError * _Nonnull)error;

- (void)onClickAd:(OpenBiddingAppOpenAd * _Nonnull)bidmadAd __deprecated_msg("use onClickAd:info:");

- (void)onClickAd:(OpenBiddingAppOpenAd * _Nonnull)bidmadAd
             info:(BidmadInfo * _Nonnull)info;

@end

NS_ASSUME_NONNULL_END
