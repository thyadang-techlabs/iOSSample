//
//  BidmadNativeAd.h
//  OpenBiddingHelper
//
//  Created by Seungsub Oh on 2023/01/03.
//

#import <UIKit/UIKit.h>
#import "BidmadAdStandardNativeAd.h"
#import <BidmadSDK/BidmadSDK-Swift.h>

NS_ASSUME_NONNULL_BEGIN

@protocol BidmadNativeAdDelegate;

@interface BidmadNativeAd : NSObject <BidmadAdStandardNativeAd>

@property (nonatomic, weak) id<BidmadNativeAdDelegate> delegate;
@property (readonly) BOOL isLoaded;
@property (nonatomic, strong) NSString *zoneID;

+ (BIDMADNativeAdView * _Nullable)findAdViewFromSuperview:(UIView *)superview;

@end

@protocol BidmadNativeAdDelegate <NSObject>

@optional
- (void)onLoadAd:(BidmadNativeAd * _Nonnull)bidmadAd __deprecated_msg("use onLoadAd:info: instead");
- (void)onLoadAd:(BidmadNativeAd * _Nonnull)bidmadAd info:(BidmadInfo *)info;
- (void)onLoadFailAd:(BidmadNativeAd * _Nonnull)bidmadAd error:(NSError * _Nonnull)error;
- (void)onClickAd:(BidmadNativeAd * _Nonnull)bidmadAd __deprecated_msg("use onClickAd:info: instead");
- (void)onClickAd:(BidmadNativeAd * _Nonnull)bidmadAd info:(BidmadInfo *)info;

@end

NS_ASSUME_NONNULL_END
