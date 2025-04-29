//
//  BidmadInterstitialAd.h
//  OpenBiddingHelper
//
//  Created by ADOP_Mac on 2022/06/30.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import "OpenBiddingInterstitial.h"
#import "BidmadAdStandardFullScreenAd.h"

NS_ASSUME_NONNULL_BEGIN

@interface BidmadInterstitialAd : NSObject <BidmadAdStandardFullScreenAd, BIDMADOpenBiddingInterstitialDelegate>
@property (nonatomic, weak) id <BIDMADOpenBiddingInterstitialDelegate> _Nullable delegate;
@property (nonatomic) BOOL isAutoReload;
- (nonnull instancetype)initWithZoneID:(NSString * _Nonnull)zoneID;
- (void)load;
- (void)showOnViewController:(UIViewController * _Nonnull)viewController;
- (BOOL)isLoaded;
- (void)onLoadAd:(OpenBiddingInterstitial * _Nonnull)bidmadAd;
- (void)onShowAd:(OpenBiddingInterstitial * _Nonnull)bidmadAd;
- (void)onCloseAd:(OpenBiddingInterstitial * _Nonnull)bidmadAd;
- (void)onLoadFailAd:(OpenBiddingInterstitial * _Nonnull)bidmadAd error:(NSError * _Nonnull)error;
@end

NS_ASSUME_NONNULL_END
