//
//  BidmadAppOpenAdapter.h
//  BidmadSDK
//
//  Created by 플랫폼-오승섭-맥북 on 2023/08/24.
//

#import <UIKit/UIKit.h>
#import <BidmadSDK/BidmadAdUnit.h>

NS_ASSUME_NONNULL_BEGIN

@class BidmadAppOpenAdapter;

@protocol BidmadAppOpenAdapterDelegate <NSObject>

- (void)dismissedWith:(__kindof BidmadAppOpenAdapter *)ad;
- (void)presentedWith:(__kindof BidmadAppOpenAdapter *)ad;
- (void)failedToPresentWith:(__kindof BidmadAppOpenAdapter *)ad error:(NSError *)error;
- (void)clickedWith:(__kindof BidmadAppOpenAdapter *)ad;

@end

@interface BidmadAppOpenAdapter : NSObject

@property (nonatomic, strong) BidmadAdUnit *adUnit;
@property (nonatomic, weak) id<BidmadAppOpenAdapterDelegate> delegate;

- (void)loadAdWith:(void (^)(BidmadAppOpenAdapter * _Nullable, NSError * _Nullable))completionHandler;
- (void)showAdFrom:(UIViewController *)viewController;
- (instancetype)initWithAdUnit:(BidmadAdUnit *)adUnit;

@end

NS_ASSUME_NONNULL_END
