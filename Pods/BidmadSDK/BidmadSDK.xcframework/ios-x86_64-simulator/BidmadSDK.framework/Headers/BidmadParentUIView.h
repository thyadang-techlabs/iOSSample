//
//  BidmadParentUIView.h
//  BidmadSDK
//
//  Created by ADOP_Mac on 2022/06/30.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadParentUIView : UIView

- (nullable UIView *)hitTest:(CGPoint)point withEvent:(nullable UIEvent *)event;

@end

NS_ASSUME_NONNULL_END
