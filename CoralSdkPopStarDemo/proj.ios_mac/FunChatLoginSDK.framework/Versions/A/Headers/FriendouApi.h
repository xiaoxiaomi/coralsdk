//
//  FriendouApi.h
//  Friendou_SDK_Simple
//
//  Created by zheng xiaolin on 13-11-19.
//  Copyright (c) 2013年 zheng xiaolin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FriendouApi : NSObject

/****
功能点：启动好友逗sdk
功能描述：启动好友逗sdk
函数名称：lanuchEngine
输入参数：appkey:游戏标识
        delegate:用来接收好友逗触发的消息。
****/
+(void)lanuchEngine:(NSString *)appkey delegate:(id)delegate;

/*处理好友逗通过URL启动App时传递的数据
 *
 * 需要在 application:openURL:sourceApplication:annotation:或者application:handleOpenURL中调用。
 * @param url 启动App的URL
 * @return 成功返回YES，失败返回NO。
 */
+(BOOL)handleOpenURL:(NSURL *)url;
/****
功能点：检查用户是否安装趣聊
功能描述：检查用户是否安装趣聊
函数名称：isFunChatAppInstalled
输入参数：无
返回值：好友逗已安装返回YES，未安装返回NO。
****/
+(BOOL)isFunChatAppInstalled;

/****
 功能点：安装趣聊
 功能描述：安装趣聊
 函数名称：installedFunChatApp
 输入参数：无
 返回值：无。
 ****/
+(void)installedFunChatApp;
/****
 功能点：好友逗登录
 功能描述：好友逗登录
 函数名称：login
 输入参数：无
 ****/
+(BOOL)login;

/****
功能点：授权第三方应用
功能描述：授权好友逗账号给第三方应用
函数名称：authorize
输入参数：无
****/
+(BOOL)authorize;

/******
 功能点： 查看个人资料
 功能描述：查看个人资料
 函数名称：openPersonInfoView
 输入参数：userkey:用户id；
 *****/
+(BOOL)openPersonInfoView:(NSString *)userkey;

/******
 功能点： 添加好友
 功能描述：添加好友
 函数名称：addToFriend
 输入参数：userkey:用户id；
 image:分享图片;
 *****/
+(BOOL)addToFriend:(NSString *)userkey;

/******
 功能点：发消息给趣聊朋友
 功能描述：发消息给趣聊朋友
 函数名称：sendMessage
 输入参数：userkey:用户id；
 *****/
+(BOOL)sendMessageToUser:(NSString *)userkey;
@end
