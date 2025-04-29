//
//  OBHCommunicationDelegate.h
//  BidmadSDK-DevSuite
//
//  Created by 플랫폼-오승섭-맥북 on 2023/09/26.
//

#import <BidmadSDK/BidmadAdUnit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol OBHCommunicationDelegate <NSObject>

@required

@property (nonatomic, weak) UIViewController * _Nullable parentViewController;
@property (nonatomic, strong) NSString * _Nonnull classPrefix;
@property (nonatomic, strong) NSString * _Nonnull classPostfix;

- (void)onLoadAdUnit:(BidmadAdUnit *)adUnit;
- (void)onClickAdUnit:(BidmadAdUnit *)adUnit;

@optional

- (void)onLoadAdUnit:(BidmadAdUnit *)adUnit
             adWidth:(CGFloat)width
            adHeight:(CGFloat)height;
- (void)onShowAdUnit:(BidmadAdUnit *)adUnit;
- (void)onShowFailAdUnit:(BidmadAdUnit *)adUnit error:(NSError *)error;
- (void)onRewardedAdUnit:(BidmadAdUnit *)adUnit;
- (void)onSkippedAdUnit:(BidmadAdUnit *)adUnit;
- (void)onDismissedAdUnit:(BidmadAdUnit *)adUnit;
- (void)allFailWithErrors:(NSArray<NSError *> *)errors
                   adUnit:(BidmadAdUnit * _Nullable)adUnit;

@end

NS_ASSUME_NONNULL_END
