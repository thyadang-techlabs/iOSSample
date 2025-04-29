//
//  BidmadNativeAdOriginalUIState.h
//  BidmadSDK
//
//  Created by 플랫폼-오승섭-맥북 on 2023/08/25.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadNativeAdOriginalUIState : NSObject

// callToAction
@property (nonatomic, strong) NSNumber * _Nullable callToActionButtonUserInteractionEnabled;
@property (nonatomic, strong) NSString * _Nullable callToActionTitle;
@property (nonatomic, strong) NSNumber * _Nullable callToActionHidden;

// iconImage
@property (nonatomic, strong) UIImage * _Nullable iconImage;
@property (nonatomic, strong) NSNumber * _Nullable iconImageHidden;

// title
@property (nonatomic, strong) NSString * _Nullable title;
@property (nonatomic, strong) NSNumber * _Nullable titleHidden;

// body
@property (nonatomic, strong) NSString * _Nullable body;
@property (nonatomic, strong) NSNumber * _Nullable bodyHidden;

// media
@property (nonatomic, strong) NSNumber * _Nullable mediaHidden;

+ (BidmadNativeAdOriginalUIState * (^)(void))newState;

@end

NS_ASSUME_NONNULL_END
