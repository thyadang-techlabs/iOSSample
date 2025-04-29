//
//  BidmadRewardManager.h
//  OpenBiddingHelper
//
//  Created by Seungsub Oh on 2022/11/11.
//

#import <Foundation/Foundation.h>
#import "OpenBiddingRewardVideo.h"

NS_ASSUME_NONNULL_BEGIN

@interface BidmadRewardManager : NSObject

+ (void)pushAd:(OpenBiddingRewardVideo * _Nonnull)ad;
+ (void)pushAds:(NSArray<OpenBiddingRewardVideo *> * _Nonnull)ads;
+ (OpenBiddingRewardVideo * _Nonnull)getAdForZoneID:(NSString * _Nonnull)zoneID;
+ (OpenBiddingRewardVideo * _Nullable)takeOutAdForZoneID:(NSString * _Nonnull)zoneID;
+ (NSArray<OpenBiddingRewardVideo *> * _Nonnull)getAllAds;

@end

NS_ASSUME_NONNULL_END
