//
//  UnrealReward.h
//  BidmadSDK
//
//  Created by 전혜연 on 2020/12/08.
//  Copyright © 2020 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import "OpenBiddingInterstitial.h"

NS_ASSUME_NONNULL_BEGIN

@protocol BidmadInterstitialUECallback <NSObject>

- (void)bidmadInterstitialUELoad:(NSString * _Nullable)mZoneId uuid:(NSString * _Nullable)uuid;
- (void)bidmadInterstitialUEAllFail:(NSString * _Nullable)mZoneId errorReason:(NSString *)reason uuid:(NSString * _Nullable)uuid;
- (void)bidmadInterstitialUEShow:(NSString * _Nullable)mZoneId uuid:(NSString * _Nullable)uuid;
- (void)bidmadInterstitialUEClose:(NSString * _Nullable)mZoneId uuid:(NSString * _Nullable)uuid;

@end

@interface OpenBiddingUnrealInterstitial : NSObject {
    NSString *mZoneId;
    NSString *mUUID;
    id<BidmadInterstitialUECallback> delegate;
    OpenBiddingInterstitial *ad;
    BOOL isAutoReload;
}

- (id)initWithZoneId:(NSString *)zoneId uuid:(NSString *)uuid;
+ (id)getInstance:(NSString *)uuid;
- (void)setDelegate:(id)param;
- (void)load;
- (void)show;
- (bool)isLoaded;

@end

static NSMutableDictionary<NSString *, OpenBiddingUnrealInterstitial *> * OBUnrealInterstitialDic;

NS_ASSUME_NONNULL_END
