//
//  UnrealReward.h
//  BidmadSDK
//
//  Created by 전혜연 on 2020/12/08.
//  Copyright © 2020 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import "OpenBiddingRewardVideo.h"

NS_ASSUME_NONNULL_BEGIN

@protocol BidmadRewardUECallback <NSObject>

- (void)bidmadRewardUESkipped:(NSString * _Nullable)mZoneId uuid:(NSString * _Nullable)uuid;
- (void)bidmadRewardUESucceed:(NSString * _Nullable)mZoneId uuid:(NSString * _Nullable)uuid;
- (void)bidmadRewardUELoad:(NSString * _Nullable)mZoneId uuid:(NSString * _Nullable)uuid;
- (void)bidmadRewardUEAllFail:(NSString * _Nullable)mZoneId errorReason:(NSString * _Nullable)reason uuid:(NSString * _Nullable)uuid;
- (void)bidmadRewardUEShow:(NSString * _Nullable)mZoneId uuid:(NSString * _Nullable)uuid;
- (void)bidmadRewardUEClose:(NSString * _Nullable)mZoneId uuid:(NSString * _Nullable)uuid;

@end

@interface OpenBiddingUnrealReward : NSObject {
    NSString *mZoneId;
    NSString *mUUID;
    id<BidmadRewardUECallback> delegate;
    OpenBiddingRewardVideo *ad;
    BOOL isAutoReload;
}

- (id)initWithZoneId:(NSString *)zoneId uuid:(NSString *)uuid;
+ (id)getInstance:(NSString *)uuid;
- (void)setDelegate:(id)param;
- (void)load;
- (void)show;
- (bool)isLoaded;

@end

static NSMutableDictionary<NSString *, OpenBiddingUnrealReward *> *OBUnrealRewardDic;

NS_ASSUME_NONNULL_END
