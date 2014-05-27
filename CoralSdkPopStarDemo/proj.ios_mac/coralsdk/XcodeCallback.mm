//
//  XcodeCallback.m
//  Unity-iPhone
//
//  Created by mac mini on 13-11-30.
//
//

#import "XcodeCallback.h"
#import <BattleWorkLibrary/NSString+BNJSON.h>
#import <BattleWorkLibrary/NSObject+BNJSON.h>
#import <BattleWorkLibrary/BNJSONSerializer.h>
#include "BnSDKCallback.h"

@implementation XcodeCallback

static XcodeCallback *pCallback = nil;

+ (XcodeCallback *)callToGameDelegete
{
    if (!pCallback)
    {
        pCallback = [[XcodeCallback alloc] init];
    }
    return pCallback;
}

+ (void) closeDelegate {
    if (pCallback) {
        [pCallback release];
        pCallback = nil;
    }
    
}

//参加游戏的人员回调（数组包含userkey,username,gamescore,gamedata）1001
- (void)BnGameUserSelectedNotification:(NSArray *)userlist
{
    
    bool tIfSuccess = false;
    NSDictionary *dict;
    
    if(![userlist count])
    {
        NSArray *Array = [[NSArray alloc] init];
        dict = [NSDictionary dictionaryWithObjectsAndKeys:Array,@"userlist",nil];
        [Array release];
    }
    else
    {
        dict = [NSDictionary dictionaryWithObjectsAndKeys:userlist,@"userlist",nil];//
    }
    
    if(dict)
    {
        NSLog(@"dict:%@", dict);
        
        NSString *str = [self DictionaryToString:dict];
        
        if (str)
        {
            const char *data = [str UTF8String];

            if(data)
            {
                NSLog(@"gameUserSelectedNotificationData:%s", data);
				GameUserSelectedNotification(data);
                tIfSuccess = true;
            }
            [str release];
        }
        
    }
    if (!tIfSuccess)
    {
        NSLog(@"BnGameUserSelectedNotification:%@", @"error");
    }
    
}

//Dictionary转换成NSString
-(NSString *) DictionaryToString:(NSDictionary *)dic
{
	NSError *error = nil;
	NSData *jsonData = [[BNJSONSerializer serializer] serializeDictionary:dic error:&error];
    NSString *str = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
    //NSString *str = [NSString stringWithUTF8String:(const char *)[jsonData bytes]];
	return str;
}

//退出登陆通知 1003
- (void)BnLogoutNotify
{
	LogoutNotify();
}

//音乐开关通知 1004
- (void)BnMusicTurnOffAndOn:(BOOL)isOn
{
    MusicTurnOffAndOn(isOn);
}

//音效开关通知 1005
- (void)BnSoundTurnOffAndOn:(BOOL)isOn
{
	SoundTurnOffAndOn(isOn);
}

//登录回调:1为登陆成功，2为失败，3为取消登录
- (void)BnLoginResult:(int)isLogin
{
	LoginResult(isLogin);
}

//游戏结束后返回按键回调
- (void)BnGameBackNotification
{
    GameBackNotification();
}


@end
