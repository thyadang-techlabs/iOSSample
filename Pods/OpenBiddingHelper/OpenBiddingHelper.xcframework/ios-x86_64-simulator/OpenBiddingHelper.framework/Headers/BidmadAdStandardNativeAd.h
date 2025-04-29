//
//  BidmadAdStandardNativeAd.h
//  OpenBiddingHelper
//
//  Created by Seungsub Oh on 2023/01/03.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class BIDMADNativeAdView;

@protocol BidmadAdStandardNativeAd <NSObject>

/// convenience initializer
+ (instancetype)adWithZoneID:(NSString *)zoneID;

/// Initialize
- (instancetype)initWithZoneID:(NSString *)zoneID;

/// attempt requesting ads from ad networks. this method results in either onLoadAd: or onLoadFailAd: method callback.
- (void)load;

/// setting the view controller and ad view before viewing the ad
- (void)setRootViewController:(UIViewController *)viewController adView:(BIDMADNativeAdView *)adView;

/// removing the ad from ad view before the cell disappears from table view
- (void)removeAdView:(BIDMADNativeAdView *)adView;

@end

NS_ASSUME_NONNULL_END
