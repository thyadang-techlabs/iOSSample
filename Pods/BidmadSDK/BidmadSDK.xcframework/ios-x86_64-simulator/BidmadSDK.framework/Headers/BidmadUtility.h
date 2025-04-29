//
//  BidmadUtility.h
//  BidmadSDK
//
//  Created by ADOP_Mac on 2022/06/30.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadAdInfo : NSObject

- (instancetype)initWithAdInfoDict:(NSDictionary<NSString *, id> *)adInfoDict adInfoKey:(NSString *)adInfoKey adNetworkType:(NSString *)adNetworkType floorPrice:(NSNumber *)floorPrice appID:(NSString *)appID pubID:(NSString *)pubID isOBH:(NSNumber *)isOBH originalOrder:(NSNumber *)originalOrder;

@property (strong, nonatomic) NSDictionary<NSString *, id> *adInfoDict;
@property (strong, nonatomic) NSString * _Nonnull adInfoKey;
@property (strong, nonatomic) NSString *_Nonnull adNetworkType;
@property (strong, nonatomic) NSNumber *_Nonnull floorPrice;
@property (strong, nonatomic) NSString *_Nonnull appID;
@property (strong, nonatomic) NSString *_Nonnull pubID;
@property (strong, nonatomic) NSNumber *_Nonnull isOBH;
@property (strong, nonatomic) NSNumber *_Nonnull originalOrder;

@end

@interface BidmadUtility : NSObject

+ (CGFloat)bannerAdWidthLimit;
+ (NSNumber * _Nullable)gdprSettingToOptionalBool;
+ (NSArray<BidmadAdInfo *> *)arraySortedWithOrder:(NSArray<BidmadAdInfo *> *)adInfoArray;
+ (NSArray<BidmadAdInfo *> *)bidmadSwiftSort:(NSArray<BidmadAdInfo *> *)adInfoArray;
+ (NSString*)deviceName;
+ (UIViewController * _Nullable)getActiveViewController;
@property (class, readonly, nullable) UIImage *mainAppIcon;
+ (BOOL)checkIfInvisibleForViewController:(UIViewController *)viewController;
+ (NSTimeInterval)showFailCheckTimeWindow;
+ (BOOL)shouldNetworkReqWithCriterion:(double)adWeight;

@end

@interface NSString (BidmadUtilityNSString)

- (NSString * (^)(void))whiteSpaceRemoved;
- (NSString * (^)(NSString *, NSString *))createClassName;
- (Class (^)(void))makeClass;

@end

NS_ASSUME_NONNULL_END
