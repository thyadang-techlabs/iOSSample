//
//  BidmadSendLogDelegate.h
//  ADOPUtility
//
//  Created by Seungsub Oh on 2022/06/03.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol BidmadSendLogDelegate <NSObject>

@optional
- (void)bidmadSendLogWithAdNetworkName:(NSString *)adNetworkName type:(NSString *)logType sessionId:(NSString *)sessionId;

@end

NS_ASSUME_NONNULL_END
