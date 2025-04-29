//
//  BidmadInterstitialManager.h
//  OpenBiddingHelper
//
//  Created by Seungsub Oh on 2022/11/11.
//

#import <Foundation/Foundation.h>
#import "OpenBiddingInterstitial.h"

NS_ASSUME_NONNULL_BEGIN

@interface BidmadInterstitialManager : NSObject

+ (void)pushAd:(OpenBiddingInterstitial * _Nonnull)ad;
+ (void)pushAds:(NSArray<OpenBiddingInterstitial *> * _Nonnull)ads;
+ (OpenBiddingInterstitial * _Nonnull)getAdForZoneID:(NSString * _Nonnull)zoneID;
+ (OpenBiddingInterstitial * _Nullable)takeOutAdForZoneID:(NSString * _Nonnull)zoneID;
+ (NSArray<OpenBiddingInterstitial *> * _Nonnull)getAllAds;

@end

NS_ASSUME_NONNULL_END
