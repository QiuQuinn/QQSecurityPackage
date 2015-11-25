//
//  QQUserDataManager.m
//  QQBaseViewController
//
//  Created by QuinnQiu on 15/11/2.
//  Copyright © 2015年 QuinnQiu. All rights reserved.
//

#import "QQUserDataManager.h"
#import "QQKeyChain.h"

@implementation QQUserDataManager

+(void)saveUserData:(id)userData withKey:(NSString *)key
{
    NSMutableDictionary *userDataKVPairs = (NSMutableDictionary *)[QQKeyChain load:KEY_IN_KEYCHAIN];
    if (userDataKVPairs == nil) {
        userDataKVPairs = [NSMutableDictionary dictionary];
        [userDataKVPairs setObject:userData forKey:key];
    }else{
        [userDataKVPairs setObject:userData forKey:key];
    }
    [QQKeyChain save:KEY_IN_KEYCHAIN data:userDataKVPairs];
}

+(id)readUserDataByKey:(NSString *)key
{
    NSMutableDictionary *userDataKVPairs = (NSMutableDictionary *)[QQKeyChain load:KEY_IN_KEYCHAIN];
    return [userDataKVPairs objectForKey:key];
}

+(void)deleteAllUserData
{
    [QQKeyChain delete:KEY_IN_KEYCHAIN];
}
@end
