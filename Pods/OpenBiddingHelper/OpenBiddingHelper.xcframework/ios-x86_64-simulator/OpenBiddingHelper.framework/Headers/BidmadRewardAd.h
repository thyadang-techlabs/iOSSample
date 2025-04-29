//
//  BidmadRewardAd.h
//  OpenBiddingHelper
//
//  Created by ADOP_Mac on 2022/06/30.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import "OpenBiddingRewardVideo.h"
#import "BidmadAdStandardFullScreenAd.h"

NS_ASSUME_NONNULL_BEGIN

@interface BidmadRewardAd : NSObject <BidmadAdStandardFullScreenAd, BIDMADOpenBiddingRewardVideoDelegate>
@property (nonatomic, weak) id <BIDMADOpenBiddingRewardVideoDelegate> _Nullable delegate;
@property (nonatomic) BOOL isAutoReload;
- (nonnull instancetype)initWithZoneID:(NSString * _Nonnull)zoneID;
- (void)load;
- (void)showOnViewController:(UIViewController *)viewController;
- (BOOL)isLoaded;
- (void)onSkipAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd;
- (void)onLoadAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd;
- (void)onShowAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd;
- (void)onClickAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd;
- (void)onCloseAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd;
- (void)onCompleteAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd;
- (void)onLoadFailAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd error:(NSError * _Nonnull)error;
@end

NS_ASSUME_NONNULL_END
