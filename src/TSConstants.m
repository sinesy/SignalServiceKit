//
//  TSConstants.m
//  Pods
//
//  Created by Luca on 03/03/17.
//
//

#import <Foundation/Foundation.h>

#import "TSConstants.h"

@implementation TSConstants

static NSString		*textSecureWebSocketAPI;
static NSString		*textSecureServerURL;
static NSString		*redphoneCer;
static NSString		*textsecureCer;

static int          redphoneServerPort;
static NSString     *redphoneHostName;
static NSString     *redphoneHostNamePrefix;



+ (void)setSignalSecureWebSocketAPI: (NSString *)secureWebSocketAPI
                    secureServerURL: (NSString *)secureServerURL
                    redphoneCerName: (NSString *)redphoneCerName
                  textsecureCerName: (NSString *)textsecureCerName
                 redphoneServerPort: (int)rpServerPort
                   redphoneHostName: (NSString *)rpHostName
             redphoneHostNamePrefix: (NSString *)rpHostNamePrefix{
    
    textSecureWebSocketAPI = secureWebSocketAPI;
    textSecureServerURL = secureServerURL;
    redphoneCer = redphoneCerName;
    textsecureCer = textsecureCerName;
    
    redphoneServerPort =  rpServerPort;
    redphoneHostName = rpHostName;
    redphoneHostNamePrefix = rpHostNamePrefix;
    
}

+ (NSString *)textSecureWebSocketAPI {return textSecureWebSocketAPI;}
+ (NSString *)textSecureServerURL {return textSecureServerURL;}
+ (NSString *)redphoneCer {return redphoneCer;}
+ (NSString *)textsecureCer {return textsecureCer;}

+ (int)redphoneServerPort {return redphoneServerPort;}
+ (NSString *)redphoneHostName {return redphoneHostName;}
+ (NSString *)redphoneHostNamePrefix {return redphoneHostNamePrefix;}

@end
