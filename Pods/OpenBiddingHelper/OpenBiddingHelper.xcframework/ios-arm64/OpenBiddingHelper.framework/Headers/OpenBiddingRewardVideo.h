//
//  BIDMADRewardVideo.h
//  BidmadSDK
//
//  Created by 김선정 on 2018. 10. 29..
//  Copyright © 2018년 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

@class OpenBiddingRewardVideo;

#import <Foundation/Foundation.h>
#import <BidmadSDK/BIDMADUtil.h>
#import <BidmadSDK/BIDMADSetting.h>
#import "OpenBiddingInterstitial.h"
#import <BidmadSDK/BIDMADRewardVideo.h>
#import <BidmadSDK/BidmadLoadStatus.h>
#import <BidmadSDK/BidmadSDK-Swift.h>

@protocol BIDMADOpenBiddingRewardVideoDelegate;

@interface OpenBiddingRewardVideo : NSObject

@property (nonatomic, weak) id<BIDMADOpenBiddingRewardVideoDelegate> _Nullable delegate;
@property (nonatomic, weak) id<BIDMADOpenBiddingRewardVideoDelegate> _Nullable preloadDelegate;
@property (nonatomic) BidmadLoadStatus loadStatus;
@property (readonly) BOOL isLoaded;
@property (nonatomic, strong) NSString * _Nonnull zoneID;
@property (nonatomic, strong) BIDMADRewardVideo * _Nullable bidmadReward;

- (nonnull instancetype)initWithZoneID:(NSString * _Nonnull)zoneID;
- (void)requestRewardVideo;
- (void)showRewardVideoOnViewController:(UIViewController * _Nonnull)viewController;

@end

@protocol BIDMADOpenBiddingRewardVideoDelegate <NSObject>
@optional

- (void)onLoadFailAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd error:(NSError * _Nonnull)error;
- (void)onLoadAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd __deprecated_msg("use onLoadAd:info: instead");

- (void)onLoadAd:(OpenBiddingRewardVideo *_Nonnull)bidmadAd info:(BidmadInfo *_Nonnull)info;

- (void)onCloseAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd __deprecated_msg("use onCloseAd:info: instead");

- (void)onCloseAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd
             info:(BidmadInfo * _Nonnull)info;

- (void)onShowAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd __deprecated_msg("use onShowAd:info: instead");

- (void)onShowAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd
            info:(BidmadInfo * _Nonnull)info;

- (void)onShowFailAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd
               error:(NSError * _Nonnull)error __deprecated_msg("use onShowFailAd:info:error: instead");

- (void)onShowFailAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd
                info:(BidmadInfo * _Nonnull)info
               error:(NSError * _Nonnull)error;

- (void)onClickAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd __deprecated_msg("use onClickAd:info: instead");

- (void)onClickAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd
             info:(BidmadInfo * _Nonnull)info;

- (void)onCompleteAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd __deprecated_msg("use onCompleteAd:info: instead");

- (void)onCompleteAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd
                info:(BidmadInfo * _Nonnull)info;

- (void)onSkipAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd __deprecated_msg("use onSkipAd:info: instead");

- (void)onSkipAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd
            info:(BidmadInfo * _Nonnull)info;

@end



