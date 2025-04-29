//
//  BidmadInitialize.h
//  OpenBiddingHelper
//
//  Created by Seungsub Oh on 2022/09/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^BidmadInitializeBlock)(NSError * _Nullable error, BOOL isARPM, BOOL isTestTool, BOOL isPreload);

@interface BidmadInitialize : NSObject

/**
 * Return booleans, each representing the user's access status of ARPM (BOOL), TestTool (BOOL), and Preload Status (BOOL)
 */
+ (void)requestAppDataWithDomain:(NSString *)appDomain
                         withUID:(NSString *)uid
                    withPlatform:(NSString *)platform
                         handler:(BidmadInitializeBlock)handler;

@end

NS_ASSUME_NONNULL_END
