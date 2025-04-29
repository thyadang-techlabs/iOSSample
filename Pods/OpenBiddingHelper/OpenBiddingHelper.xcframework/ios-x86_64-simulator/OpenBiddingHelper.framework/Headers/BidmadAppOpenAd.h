//
//  BidmadAppOpenAd.h
//  OpenBiddingHelper
//
//  Created by ADOP_Mac on 2022/07/01.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import "BidmadAdStandardFullScreenAd.h"
#import "OpenBiddingAppOpenAd.h"

NS_ASSUME_NONNULL_BEGIN

@interface BidmadAppOpenAd : NSObject <BidmadAdStandardFullScreenAd, OpenBiddingAppOpenAdDelegate>

@property (nonatomic, strong) id <OpenBiddingAppOpenAdDelegate> _Nullable delegate;
@property (nonatomic) BOOL isAutoReload;
- (nonnull instancetype)initWithZoneID:(NSString * _Nonnull)zoneID;
- (void)load;
- (void)showOnViewController:(UIViewController *)viewController;
- (void)deregisterForAppOpenAd;
- (BOOL)isLoaded;

#pragma mark OpenBiddingAppOpenAdDelegate Methods

- (void)onLoadAd:(OpenBiddingAppOpenAd * _Nonnull)bidmadAd;
- (void)onShowAd:(OpenBiddingAppOpenAd * _Nonnull)bidmadAd;
- (void)onClickAd:(OpenBiddingAppOpenAd * _Nonnull)bidmadAd;
- (void)onCloseAd:(OpenBiddingAppOpenAd * _Nonnull)bidmadAd;
- (void)onLoadFailAd:(OpenBiddingAppOpenAd * _Nonnull)bidmadAd error:(NSError * _Nonnull)error;

@end

NS_ASSUME_NONNULL_END
