//
//  BidmadAdValueManager.h
//  BidmadSDK
//
//  Created by Seungsub Oh on 6/13/25.
//

#import "BidmadAdValue.h"
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadAdValueManager : NSObject

@property(class, nonatomic, readonly, nonnull)
    BidmadAdValueManager *sharedInstance NS_SWIFT_NAME(shared);

- (instancetype)init NS_UNAVAILABLE;
- (void)fetchWithCompletionHandler:(void (^)(void))completionHandler;
- (BidmadAdValue * _Nullable)valueForZoneId:(NSString *)zoneId;

@end

NS_ASSUME_NONNULL_END
