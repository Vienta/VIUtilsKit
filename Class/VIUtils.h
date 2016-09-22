//
//  VIUtils.h
//  VIUtilsKit
//
//  Created by Vienta on 16/9/22.
//  Copyright © 2016年 Vienta. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, VIIPhoneInch) {
    VIIPhoneInch_Unkown,
    VIIPhoneInch_3_5,
    VIIPhoneInch_4_0,
    VIIPhoneInch_4_7,
    VIIPhoneInch_5_5
};


@interface VIUtils : NSObject

/**手机的尺寸
 */
+ (VIIPhoneInch)iPhoneInch;


@end
