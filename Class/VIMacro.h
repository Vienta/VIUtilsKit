//
//  VIMacro.h
//  VIUtilsKit
//
//  Created by Vienta on 9/22/16.
//  Copyright © 2016 Vienta. All rights reserved.
//


#ifndef VIMacro_h
#define VIMacro_h


#define APP_BUILD_VERSION [[[NSBundle mainBundle] infoDictionary] objectForKey:(NSString *)kCFBundleVersionKey]
#define APP_VERSION [[NSBundle mainBundle] objectForInfoDictionaryKey: @"CFBundleShortVersionString"]
#define APP_DISPLAY_NAME [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleDisplayName"]
#define APP_BUNDLEID [[NSBundle mainBundle] bundleIdentifier]
#define APP_UNIQUEID [[[UIDevice currentDevice] identifierForVendor] UUIDString]

#define IS_IOS6_OR_LOWER (([[[UIDevice currentDevice] systemVersion] doubleValue] < 7.0) ? YES : NO)
#define IS_IOS7_OR_GREATER (([[[UIDevice currentDevice] systemVersion] doubleValue] >= 7.0) ? YES : NO)
#define IS_IOS7_OR_LOWER (([[[UIDevice currentDevice] systemVersion] doubleValue] < 8.0) ? YES : NO)
#define IS_IOS7 (([[[UIDevice currentDevice] systemVersion] doubleValue] >= 7.0 && [[[UIDevice currentDevice] systemVersion] doubleValue] < 8.0) ? YES : NO)
#define IS_IOS8_OR_GREATER (([[[UIDevice currentDevice] systemVersion] doubleValue] >= 8.0) ? YES : NO)
#define IS_IOS10_OR_GREATER (([[[UIDevice currentDevice] systemVersion] doubleValue] >= 10.0) ? YES : NO)

#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define IS_IPHONE_INCH_3_5 ([VIUtils iPhoneInch] == VIIPhoneInch_3_5)
#define IS_IPHONE_INCH_4_0 ([VIUtils iPhoneInch] == VIIPhoneInch_4_0)
#define IS_IPHONE_INCH_4_7 ([VIUtils iPhoneInch] == VIIPhoneInch_4_7)
#define IS_IPHONE_INCH_5_5 ([VIUtils iPhoneInch] == VIIPhoneInch_5_5)

#define DEVICE_MAINSCREEN [UIScreen mainScreen].bounds
#define DEVICE_MAINSCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height
#define DEVICE_MAINSCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define DEVICE_SCREEN_SCALE [UIScreen mainScreen].bounds.size.width/320.0

#define SYSTEM_VERSION_EQUAL_TO(__version__)                  ([[[UIDevice currentDevice] systemVersion] compare:__version__ options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(__version__)              ([[[UIDevice currentDevice] systemVersion] compare:__version__ options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(__version__)  ([[[UIDevice currentDevice] systemVersion] compare:__version__ options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(__version__)                 ([[[UIDevice currentDevice] systemVersion] compare:__version__ options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(__version__)     ([[[UIDevice currentDevice] systemVersion] compare:__version__ options:NSNumericSearch] != NSOrderedDescending)

#define COLOR_RGBA(__red__,__green__,__blue__,__alpha__)  [UIColor colorWithRed:((__red__)*1.0/255.0) green:((__green__)*1.0/255.0) blue:((__blue__)*1.0/255.0) alpha:(__alpha__*1.0)]
#define COLOR_RGB(__red__,__green__,__blue__) [UIColor colorWithRed:((__red__)*1.0/255.0) green:((__green__)*1.0/255.0) blue:((__blue__)*1.0/255.0) alpha:1]
#define COLOR_CSS(__hex__)  [UIColor colorWithRed:((__hex__ & 0xFF0000) >> 16)*1.0/255.0 green:((__hex__ & 0xFF00) >> 8)*1.0/255.0 blue:(__hex__ & 0xFF)*1.0/255.0 alpha:1.0]


#define SINGLETON_INSTANCE \
\
+ (instancetype)sharedInstance \
{ \
    static id _sharedInstance = nil; \
    static dispatch_once_t onceToken; \
    dispatch_once(&onceToken, ^{ \
        _sharedInstance = [[self alloc]init]; \
    }); \
    return _sharedInstance; \
}




#endif /* VIMacro_h */
