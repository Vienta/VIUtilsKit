//
//  VIUtils.m
//  VIUtilsKit
//
//  Created by Vienta on 16/9/22.
//  Copyright © 2016年 Vienta. All rights reserved.
//

#import "VIUtils.h"
#import "DeviceHardware.h"
#import <UIKit/UIDevice.h>
#import <UIKit/UIScreen.h>

@implementation VIUtils

+ (VIIPhoneInch)iPhoneInch
{
    IPhoneInchType iPhoneInch = [DeviceHardware inchType];
    
    if (iPhoneInch == IPhoneInchType_Simulator) {
        BOOL isIphone = (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone);
        if (isIphone && [[UIScreen mainScreen] bounds].size.height == 480.0)
            return VIIPhoneInch_3_5;
        if (isIphone && [[UIScreen mainScreen] bounds].size.height == 568.0)
            return VIIPhoneInch_4_0;
        if (isIphone && [[UIScreen mainScreen] bounds].size.height == 667.0)
            return VIIPhoneInch_4_7;
        if (isIphone && [[UIScreen mainScreen] bounds].size.height == 736.0)
            return VIIPhoneInch_5_5;
    }
    
    switch (iPhoneInch) {
        case IPhoneInchType_3_5:
            return VIIPhoneInch_3_5;
            break;
            
        case IPhoneInchType_4_0:
            return VIIPhoneInch_4_0;
            break;
            
        case IPhoneInchType_4_7:
            return VIIPhoneInch_4_7;
            break;
            
        case IPhoneInchType_5_5:
            return VIIPhoneInch_5_5;
            break;
        case IPhoneInchType_Unkown:
        case IPhoneInchType_Simulator:
            return VIIPhoneInch_Unkown;
            break;
    }
    return 0;
}

@end
