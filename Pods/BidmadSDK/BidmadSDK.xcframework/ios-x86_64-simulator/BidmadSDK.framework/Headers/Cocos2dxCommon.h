//
//  Cocos2dxCommon.h
//  BidmadSDK
//
//  Created by Kenneth on 2021/04/28.
//  Copyright © 2021 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#ifndef Cocos2dxCommon_h
#define Cocos2dxCommon_h

#import <Foundation/Foundation.h>
#import <BidmadSDK/BIDMADSetting.h>

@protocol BIDMADCocos2dxCommonDelegate <NSObject>

@optional

- (void)BIDMADAdTrackingAuthorizationResponse:(int)response;

@end

@interface Cocos2dxCommon : NSObject <BIDMADCocos2dxCommonDelegate>{
    id<BIDMADCocos2dxCommonDelegate> delegate;
}

+ (Cocos2dxCommon*)sharedInstance;
- (void)setDelegate:(id)param;
- (void)setDebugMode:(BOOL)isDebug;
- (void)setAdvertiserTrackingEnabled:(BOOL)enable;
- (BOOL)getAdvertiserTrackingEnabled;
- (void)reqAdTrackingAuthorization;
- (void)setGoogleTestId:(NSString*)testDeviceId;
- (void)setGdprConsent:(bool)consent useArea:(bool)useArea;
- (int)getGdprConsentWithUseArea:(bool)useArea;
- (const char*)getPRIVACYURL;

@end

#endif /* Cocos2dxCommon_h */
