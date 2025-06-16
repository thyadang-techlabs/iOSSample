//
//  BidmadAdValue.h
//  BidmadSDK
//
//  Created by Seungsub Oh on 6/13/25.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadAdValue : NSObject

@property(nonatomic, strong) NSString *updateTime;
@property(nonatomic, strong) NSString *zoneId;
@property(nonatomic, strong) NSNumber *_Nullable vpc;
@property(nonatomic, strong) NSNumber *_Nullable vpi;
@property(nonatomic, readonly) BOOL isValid;

- (instancetype)initWithZoneId:(NSString *)zoneId
                    updateTime:(NSString *)updateTime
                         areas:(NSDictionary *)areas;
- (instancetype)initWithUpdateTime:(NSString *)updateTime
                            zoneId:(NSString *)zoneId
                               vpc:(NSNumber *)vpc
                               vpi:(NSNumber *)vpi;
- (BOOL)isValid;
- (NSString *)description;

@end

NS_ASSUME_NONNULL_END
