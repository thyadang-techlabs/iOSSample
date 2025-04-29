//
//  BidmadAdStandardBanner.h
//  BidmadSDK-DevSuite
//
//  Created by ADOP_Mac on 2022/06/30.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

@protocol BidmadAdStandardBanner <NSObject>

- (nonnull instancetype)initWith:(UIViewController * _Nonnull)parentViewController containerView:(UIView * _Nonnull)containerView zoneID:(NSString * _Nonnull)zoneID;
- (void)load;
- (void)setRefreshInterval:(NSInteger)refreshIntervalTime;
- (void)hide;
- (void)show;
- (void)remove;

@end
