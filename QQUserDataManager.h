//
//  QQUserDataManager.h
//  QQBaseViewController
//
//  Created by QuinnQiu on 15/11/2.
//  Copyright © 2015年 QuinnQiu. All rights reserved.
//

#import <Foundation/Foundation.h>

//自己定义宏去
//Keychain 定义
//所有信息
static NSString *const KEY_IN_KEYCHAIN  = @"com.quinnqiu.app.allInfo";
//登录信息
static NSString *const KEY_LOGIN_KEYCHAIN = @"com.quinnqiu.app.login";
//使用过的wifi密码记录
static NSString *const KEY_WIFI_KEYCHAIN = @"com.quinnqiu.app.wifi";
//

@interface QQUserDataManager : NSObject
/**
 *  @brief  存储
 *
 *  @param  userData    内容;  key    键
 */
+(void)saveUserData:(id)userData withKey:(NSString *)key;

/**
 *  @brief  读取数据
 *
 *  @param  key     键
 *
 *  @return 内容
 */
+(id)readUserDataByKey:(NSString *)key;

/**
 *  @brief  删除数据
 */
+(void)deleteAllUserData;


@end
