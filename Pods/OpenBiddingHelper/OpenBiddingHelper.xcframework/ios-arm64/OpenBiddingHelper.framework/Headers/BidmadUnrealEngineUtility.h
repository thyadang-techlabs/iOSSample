//
//  UnrealEngineUtility.h
//  OpenBiddingHelper
//
//  Created by ADOP_Mac on 2022/07/18.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#define BidmadUECommonVC [BidmadUnrealEngineUtility getCommonViewController]

@interface BidmadUnrealEngineUtility : NSObject

+ (UIViewController * _Nullable)getCommonViewController;

@end

NS_ASSUME_NONNULL_END
