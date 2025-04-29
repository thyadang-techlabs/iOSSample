//
//  BIDMADBanner.h
//  BIDMADMobileAds
//
//  Created by 김선정 on 2015. 7. 13..
//  Copyright (c) 2015년 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import <BidmadSDK/BIDMADUtil.h>
#import <BidmadSDK/BIDMADSetting.h>
#import <BidmadSDK/BidmadAdUnit.h>
#import <BidmadSDK/BidmadBannerAdapter.h>
#import <BidmadSDK/OBHCommunicationDelegate.h>

@protocol OBHBannerExtraDelegate <NSObject>

@property (nonatomic) NSString * _Nullable zoneID;
- (void)addLoadedAdView:(UIView * _Nonnull)adView
                adWidth:(CGFloat)adWidth
               adHeight:(CGFloat)adHeight
               strategy:(BidmadBannerSizeStrategy)strategy
              keyWindow:(UIWindow * _Nonnull)keyWindow
                  error:(NSError * _Nullable * _Nonnull)error;
- (void)cleanPreviousAdView;

@end

typedef NS_CLOSED_ENUM(NSUInteger, BIDMADBannerViewCase) {
    BIDMADBannerViewCaseXYCoordinateGiven = 0,
    BIDMADBannerViewCaseContainerViewGiven = 1,
    BIDMADBannerViewCaseOnlyYCoordinateGiven = 2,
    BIDMADBannerViewCaseAdPositionAnchorGiven = 3,
};

typedef NS_CLOSED_ENUM(NSUInteger, BIDMADAdPosition) {
    BIDMADAdPositionCenter = 0,
    BIDMADAdPositionTop = 1,
    BIDMADAdPositionBottom = 2,
    BIDMADAdPositionLeft = 3,
    BIDMADAdPositionRight = 4,
    BIDMADAdPositionTopLeft = 5,
    BIDMADAdPositionTopRight = 6,
    BIDMADAdPositionBottomLeft = 7,
    BIDMADAdPositionBottomRight = 8,
    BIDMADAdPositionNone = 9,
};

@interface BIDMADBanner : NSObject

- (instancetype _Nonnull)initWithInstanceOBH:(id<OBHCommunicationDelegate, OBHBannerExtraDelegate> _Nonnull)instanceOBH;
- (void)selectAdUnit:(BidmadAdUnit * _Nonnull)adUnit;

@property (nonatomic, strong) BidmadBannerAdapter * _Nullable adapter;

@end
