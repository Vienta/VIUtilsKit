//
//  VIBaseService.m
//  VIUtilsKit
//
//  Created by Vienta on 9/26/16.
//  Copyright © 2016 Vienta. All rights reserved.
//

#import "VIBaseService.h"
#import "VIMacro.h"

static NSString *const VIBaseURLString = @"vi_base_url";

@implementation VIBaseService

+ (instancetype)sharedInstance {
    static VIBaseService *_instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSString *baseURL = [[NSUserDefaults standardUserDefaults] objectForKey:VIBaseURLString];
        if (!baseURL) {
            NSAssert(baseURL != NULL, @"baseURL需要在VIBaseService类调用前，用NSUserDefaults存储");
        }
        _instance = [[VIBaseService alloc] initWithBaseURL:[NSURL URLWithString:baseURL]];
        _instance.securityPolicy = [AFSecurityPolicy policyWithPinningMode:AFSSLPinningModeNone];
    });
    
    return _instance;
}

- (void)setBaseURL:(NSString *)url
{
    self.baseURL = (id)[NSURL URLWithString:url];
}

- (NSURLSessionDataTask *)GET:(NSString *)URLString
                   parameters:(id)parameters
                      success:(void (^)(NSURLSessionDataTask *task, id responseObject))success
                      failure:(void (^)(NSURLSessionDataTask * task, NSError *error))failure
{
    return [super GET:URLString parameters:parameters progress:nil success:success failure:failure];
}


- (NSURLSessionDataTask *)POST:(NSString *)URLString
                    parameters:(id)parameters
                       success:(void (^)(NSURLSessionDataTask *task, id responseObject))success
                       failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure
{
    return [super POST:URLString parameters:parameters progress:nil success:success failure:failure];
}



@end
