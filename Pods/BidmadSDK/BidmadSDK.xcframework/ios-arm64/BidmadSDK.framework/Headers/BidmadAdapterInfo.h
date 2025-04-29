//
//  BidmadAdapterInfo.h
//  BidmadSDK
//
//  Created by 플랫폼-오승섭-맥북 on 2023/09/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol BidmadAdapterInfo <NSObject>

+ (NSString *)adapterVersion;
+ (NSString *)adNetworkSdkVersion;

@end

NS_ASSUME_NONNULL_END
