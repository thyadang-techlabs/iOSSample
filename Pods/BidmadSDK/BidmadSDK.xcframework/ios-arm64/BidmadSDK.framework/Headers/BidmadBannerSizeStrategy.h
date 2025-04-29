#import <Foundation/Foundation.h>

typedef NS_CLOSED_ENUM(NSInteger, BidmadBannerSizeStrategy) {
  BidmadBannerSizeStrategyFitCompassSize = 0,
  BidmadBannerSizeStrategyExpandToMaxWidthAndFitCompassHeight = 1,
  BidmadBannerSizeStrategyExpandToMaxWidthAndExpandToLoadedAdHeight = 2,
  BidmadBannerSizeStrategyExpandToMaxWidthAndKeepHeightAmbiguous = 3,
  BidmadBannerSizeStrategyWidthFlexToContainerAndFitCompassHeight = 4,
  BidmadBannerSizeStrategyUnsupported = 5,
};
