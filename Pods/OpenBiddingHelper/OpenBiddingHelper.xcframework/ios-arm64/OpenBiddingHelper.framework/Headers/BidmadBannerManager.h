//
//  BidmadBannerManager.h
//  OpenBiddingHelper
//
//  Created by Seungsub Oh on 2022/11/11.
//

#import <Foundation/Foundation.h>
#import "OpenBiddingBanner.h"

NS_ASSUME_NONNULL_BEGIN

@interface BidmadBannerManager : NSObject

+ (void)pushAd:(OpenBiddingBanner * _Nonnull)ad;
+ (void)pushAds:(NSArray<OpenBiddingBanner *> * _Nonnull)ads;
+ (OpenBiddingBanner * _Nonnull)getAdForZoneID:(NSString * _Nonnull)zoneID viewController:(UIViewController *)viewController xCoordinate:(CGFloat)x yCoordinate:(CGFloat)y;
+ (OpenBiddingBanner * _Nonnull)getAdForZoneID:(NSString * _Nonnull)zoneID viewController:(UIViewController *)viewController yCoordinate:(CGFloat)y;
+ (OpenBiddingBanner * _Nonnull)getAdForZoneID:(NSString * _Nonnull)zoneID viewController:(UIViewController *)viewController adPosition:(BIDMADAdPosition)position;
+ (OpenBiddingBanner * _Nullable)getNullableAdForZoneID:(NSString * _Nonnull)zoneID;
+ (OpenBiddingBanner * _Nullable)takeOutAdForZoneID:(NSString * _Nonnull)zoneID;
+ (NSArray<OpenBiddingBanner *> * _Nonnull)getAllAds;

@end

NS_ASSUME_NONNULL_END
