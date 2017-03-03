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


+ (void)setSignalSecureWebSocketAPI: (NSString *)secureWebSocketAPI
                    secureServerURL: (NSString *)secureServerURL
                    redphoneCerName: (NSString *)redphoneCerName
                  textsecureCerName: (NSString *)textsecureCerName{
    
    textSecureWebSocketAPI = secureWebSocketAPI;
    textSecureServerURL = secureServerURL;
    redphoneCer = redphoneCerName;
    textsecureCer = textsecureCerName;
    
}

+ (NSString *)textSecureWebSocketAPI {return textSecureWebSocketAPI;}
+ (NSString *)textSecureServerURL {return textSecureServerURL;}
+ (NSString *)redphoneCer {return redphoneCer;}
+ (NSString *)textsecureCer {return textsecureCer;}

@end
