//
//  XcodeCallback.h
//  Unity-iPhone
//
//  Created by mac mini on 13-11-30.
//
//

#import <Foundation/Foundation.h>

@interface XcodeCallback : NSObject


//参加游戏的人员回调（数组包含userkey,username,gamescore,gamedata）
- (void)BnGameUserSelectedNotification:(NSArray *)userlist;

//退出登陆通知
- (void)BnLogoutNotify;

//音乐开关通知
- (void)BnMusicTurnOffAndOn:(BOOL)isOn;

//音效开关通知
- (void)BnSoundTurnOffAndOn:(BOOL)isOn;

//登录回调
- (void)BnLoginResult:(int)isLogin;

//游戏结束后返回按键回调
- (void)BnGameBackNotification;

+ (XcodeCallback *)callToGameDelegete;


@end
