//
//  FDBNAppDelegate.h
//  BattleNetwork
//
//  Created by zheng xiaolin on 13-7-19.
//  Copyright (c) 2013年 zheng xiaolin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FDBNAppDelegate : NSObject

//回调通知

#pragma mark - 主要功能回调

//1.开始游戏回调
-(void)BnGameUserSelectedNotification:(NSArray *)userlist;

//2.游戏结束后返回按键回调
- (void)BnGameBackNotification;

//3.注销登录通知
-(void)BnLogoutNotify;

//4.登陆回调:1为登陆成功，2为失败,3为取消登陆
-(void)BnLoginResult:(int)isLogin;


#pragma mark - 扩展功能回调

//音乐开关通知
- (void)BnMusicTurnOffAndOn:(BOOL)isOn;

//音效开关通知
- (void)BnSoundTurnOffAndOn:(BOOL)isOn;





/**20140303 OUT**/
//切到后台回调
-(void)BnApplicationWillResignActive;
//切回前台回调
- (void)BnApplicationWillEnterForeground;

//消息数回调
- (void)BnGameNewsNumberNotification:(int)number;

//回放回调
-(void)BnGameReplayNotification:(NSArray *)userlist;



@end
