//
//  VIBaseService.h
//  VIUtilsKit
//
//  Created by Vienta on 9/26/16.
//  Copyright © 2016 Vienta. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking.h>

@interface VIBaseService : AFHTTPSessionManager

+ (instancetype)sharedInstance;

- (void)setBaseURL:(NSString *)url;

- (NSURLSessionDataTask *)GET:(NSString *)URLString
                   parameters:(id)parameters
                      success:(void (^)(NSURLSessionDataTask *task, id responseObject))success
                      failure:(void (^)(NSURLSessionDataTask * task, NSError *error))failure ;


- (NSURLSessionDataTask *)POST:(NSString *)URLString
                    parameters:(id)parameters
                       success:(void (^)(NSURLSessionDataTask *task, id responseObject))success
                       failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;



@end
