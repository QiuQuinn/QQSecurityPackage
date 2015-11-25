//
//  QQKeyChain.h
//  QQBaseViewController
//
//  Created by QuinnQiu on 15/11/2.
//  Copyright © 2015年 QuinnQiu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Security/Security.h>
/**
 * 供QQUserDataManager使用
 */
@interface QQKeyChain : NSObject

+ (NSMutableDictionary *)getKeychainQuery:(NSString *)service ;

+ (void)save:(NSString *)service data:(id)data ;

+ (id)load:(NSString *)service ;

+ (void)delete:(NSString *)service ;

@end
