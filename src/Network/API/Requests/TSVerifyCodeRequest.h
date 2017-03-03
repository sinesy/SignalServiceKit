//
//  TSVerifyCodeRequest.h
//  TextSecureKit
//
//  Created by Frederic Jacobs on 14/11/14.
//  Copyright (c) 2014 Open Whisper Systems. All rights reserved.
//

#import "TSRequest.h"

@interface TSVerifyCodeRequest : TSRequest

- (TSRequest *)initWithVerificationCode:(NSString *)verificationCode
                              forNumber:(NSString *)phoneNumber
                           signalingKey:(NSString *)signalingKey
                                authKey:(NSString *)authKey
                          supportsVoice:(BOOL)voice;

@property (nonatomic, readonly) NSString *numberToValidate;

@end
