//
//  BidmadRewardAdapter.h
//  BidmadSDK
//
//  Created by 플랫폼-오승섭-맥북 on 2023/08/24.
//

#import <UIKit/UIKit.h>
#import <BidmadSDK/BidmadAdUnit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol BidmadRewardSC <NSObject>

+ (BOOL)isSupported;

@end

@interface BidmadRewardAdapterSupportChecker : NSObject <BidmadRewardSC>
@end

@class BidmadRewardAdapter;

@protocol BidmadRewardAdapterDelegate <NSObject>

- (void)dismissedWith:(__kindof BidmadRewardAdapter *)ad;
- (void)presentedWith:(__kindof BidmadRewardAdapter *)ad;
- (void)failedToPresentWith:(__kindof BidmadRewardAdapter *)ad error:(NSError *)error;
- (void)clickedWith:(__kindof BidmadRewardAdapter *)ad;
- (void)rewardedWith:(__kindof BidmadRewardAdapter *)ad;
- (void)skippedWith:(__kindof BidmadRewardAdapter *)ad;

@end

NS_SWIFT_SENDABLE
@interface BidmadRewardAdapter : NSObject

@property (nonatomic, strong) BidmadAdUnit *adUnit;
@property (nonatomic, weak) id<BidmadRewardAdapterDelegate> delegate;

- (void)loadAdWith:(void (^)(BidmadRewardAdapter * _Nullable, NSError * _Nullable))completionHandler;
- (void)showAdFrom:(UIViewController *)viewController;
- (instancetype)initWithAdUnit:(BidmadAdUnit *)adUnit;

@end

NS_ASSUME_NONNULL_END
