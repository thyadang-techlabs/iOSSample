//
//  AdFreeInformation.h
//  BidmadSDK
//
//  Created by Seungsub Oh on 2023/06/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, BidmadAdFreeInformationStatus) {
    BidmadAdFreeInformationStatusPassed,
    BidmadAdFreeInformationStatusBlocked,
};

@protocol BidmadAdFreeInformationDelegate <NSObject>

- (void)didAdFreeInformationStatusChange:(BidmadAdFreeInformationStatus)status;

@end

@interface BidmadAdFreeInformation : NSObject

+ (BidmadAdFreeInformationStatus)status;
+ (void)setDelegate:(id<BidmadAdFreeInformationDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
