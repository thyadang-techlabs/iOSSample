//
//  BidmadAdStandardFullScreenAd.h
//  BidmadSDK-DevSuite
//
//  Created by ADOP_Mac on 2022/06/30.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>

@protocol BidmadAdStandardFullScreenAd <NSObject>

/// This initializer takes in zoneID, view controller, and optionally view container.
/// The view container will only be used for banner ads.
- (nonnull instancetype)initWithZoneID:(NSString * _Nonnull)zoneID;
/// This method loads ads from respective zoneID.
- (void)load;
/// This method shows the loaded ad. Use only for Interstitial and Rewarded ads.
- (void)showOnViewController:(UIViewController * _Nonnull)viewController;
/// This method returns if the ad is loaded and available for displaying
- (BOOL)isLoaded;

@end
