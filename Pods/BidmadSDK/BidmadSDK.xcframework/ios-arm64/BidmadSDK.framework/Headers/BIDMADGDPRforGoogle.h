//
//  BIDMAD-GPDR-UMP.h
//  BidmadSDK
//
//  Created by ADOP_Mac on 2021/04/02.
//  Copyright © 2021 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, BIDMAD_UMPConsentStatus) {
    BIDMAD_UMPConsentStatusUnknown = 0,
    BIDMAD_UMPConsentStatusRequired = 1,
    BIDMAD_UMPConsentStatusNotRequired = 2,
    BIDMAD_UMPConsentStatusObtained = 3
};

//UMP GDPR(Wrapper Class)관련 콜백 함수 목록
@protocol BIDMADGDPRforGoogleProtocol <NSObject>

-(void)onConsentInfoUpdateSuccess;
-(void)onConsentInfoUpdateFailure: (NSError*)formError;
-(void)onConsentFormLoadSuccess;
-(void)onConsentFormLoadFailure: (NSError*)formError;
-(void)onConsentFormDismissed: (NSError* _Nullable)formError;

@end

@interface BIDMADGDPRforGoogle : NSObject

@property (nonatomic) BOOL underAgeOfConsent;
@property (nonatomic, strong) UIViewController *parentViewController;
@property (nonatomic, strong) id<BIDMADGDPRforGoogleProtocol> consentStatusDelegate;

- (instancetype)init NS_UNAVAILABLE;
-(id)initWith:(UIViewController* _Nullable)controller;
-(void)setListener:(id<BIDMADGDPRforGoogleProtocol>)delegate;
-(void)setDebug:(NSString*)testDeviceId isTestEurope:(BOOL)testEurope;
-(BOOL)isConsentFormAvailable;
//-(BIDMAD_UMPConsentType)getConsentType;
-(BIDMAD_UMPConsentStatus)getConsentStatus;
-(void)reset;
-(void)requestConsentInfoUpdate;
-(void)loadForm;
-(void)showForm;
+ (void)setPurposeConsentOnLocalStoarge;

@end

NS_ASSUME_NONNULL_END
