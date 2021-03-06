//
//  Constants.h
//  TextSecureKit
//
//  Created by Frederic Jacobs on 28/10/14.
//  Copyright (c) 2014 Open Whisper Systems. All rights reserved.
//

#import <Foundation/Foundation.h>
@class TSNumberVerifier;

@interface  TSConstants : NSObject

+ (void)setSignalSecureWebSocketAPI: (NSString *)secureWebSocketAPI
                    secureServerURL: (NSString *)secureServerURL
                    redphoneCerName: (NSString *)redphoneCerName
                  textsecureCerName: (NSString *)textsecureCerName
                 redphoneServerPort: (int)redphoneServerPort
                   redphoneHostName: (NSString *)redphoneHostName
             redphoneHostNamePrefix: (NSString *)redphoneHostNamePrefix;

+ (NSString *)textSecureWebSocketAPI;
+ (NSString *)textSecureServerURL;
+ (NSString *)redphoneCer;
+ (NSString *)textsecureCer;

+ (int)redphoneServerPort;
+ (NSString *)redphoneHostName;
+ (NSString *)redphoneHostNamePrefix;

@end


#ifndef TextSecureKit_Constants_h
#define TextSecureKit_Constants_h

typedef NS_ENUM(NSInteger, TSWhisperMessageType) {
    TSUnknownMessageType            = 0,
    TSEncryptedWhisperMessageType   = 1,
    TSIgnoreOnIOSWhisperMessageType = 2, // on droid this is the prekey bundle message irrelevant for us
    TSPreKeyWhisperMessageType      = 3,
    TSUnencryptedWhisperMessageType = 4,
};

typedef enum { kSMSVerification, kPhoneNumberVerification } VerificationTransportType;

#pragma mark Server Address

#define textSecureHTTPTimeOut 10


#define textSecureGeneralAPI @"v1"
#define textSecureAccountsAPI @"v1/accounts"
#define textSecureAttributesAPI @"/attributes/"

#define textSecureMessagesAPI @"v1/messages/"
#define textSecureKeysAPI @"v2/keys"
#define textSecureSignedKeysAPI @"v2/keys/signed"
#define textSecureDirectoryAPI @"v1/directory"
#define textSecureAttachmentsAPI @"v1/attachments"


typedef void (^successCompletionBlock)(void);
typedef void (^failedRegistrationRequestBlock)(void);


#pragma mark Push RegistrationSpecific Constants
typedef NS_ENUM(NSInteger, TSPushRegistrationError) {
    TSPushRegistrationErrorNetwork,
    TSPushRegistrationErrorAuthentication,
    TSPushRegistrationErrorRequest
};

typedef void (^failedPushRegistrationRequestBlock)(TSPushRegistrationError error);


#endif
