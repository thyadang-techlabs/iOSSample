//
//  BIDMADNativeAdLoader.h
//  BidmadSDK
//
//  Created by Seungsub Oh on 2022/07/26.
//

#import <UIKit/UIKit.h>
#import <BidmadSDK/BIDMADNativeAdView.h>
#import <BidmadSDK/BidmadNativeAdapter.h>

@protocol BIDMADNativeAdDelegate;
@interface BIDMADNativeAd : NSObject
@property (nonatomic, weak) id<BIDMADNativeAdDelegate> _Nullable delegate;
@property (nonatomic) NSString * _Nullable zoneID;
@property (nonatomic, strong) BidmadNativeAdapter * _Nullable adapter;
- (nonnull instancetype)init;
- (void)requestNativeAd;
- (CGSize)setAdView:(UIViewController * _Nonnull)viewController adView:(BIDMADNativeAdView * _Nonnull)adView defaultSize:(CGSize)defaultSize;
- (void)setAdView:(UIViewController * _Nonnull)viewController adView:(BIDMADNativeAdView * _Nonnull)adView;
- (void)removeAdView:(BIDMADNativeAdView * _Nonnull)adView;
- (BOOL)isLoaded;

@end

@protocol BIDMADNativeAdDelegate <NSObject>
@required
- (void)onLoadAd:(BIDMADNativeAd * _Nonnull)bidmadAd;
- (void)onLoadFailAd:(BIDMADNativeAd * _Nonnull)bidmadAd error:(NSError * _Nonnull)error;
- (void)onClickAd:(BIDMADNativeAd * _Nonnull)bidmadAd;
@end
