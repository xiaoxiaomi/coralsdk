//
//  FDBNApp.h
//  BattleNetwork
//
//  Created by zheng xiaolin on 13-7-15.
//  Copyright (c) 2013年 zheng xiaolin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FDBNApp : NSObject

#pragma mark - 主要功能

//1.初始化战网
+(void)initEngine:(UIWindow *)window delegate:(id)delegate;

//2.处理微博SDK通过URL启动App时传递的数据
//需要在 application:openURL:sourceApplication:annotation:或者application:handleOpenURL中调用。
+(BOOL)handleOpenURL:(NSURL *)url;

//3.登陆(type:1 friendou 2 新浪 3腾讯)
+(void)login:(int)type;

//4.获取登陆状态（YES已经登陆，NO未登陆）
+(BOOL)getloginstatus;

//5.打开SDK首页
+ (void)showGameHome;

//6.隐藏SDK
+(void)hideSDK;

//7.游戏结束(score:分数 gold：获得的金币数量 baseStr：基础分数（比如：‘基础分：1024 分’） archieveStr：表现分数（比如：‘表现分：204 分’）)
+(void)gameOver:(NSString *)score gameGold:(NSString *)gold baseScoreStr:(NSString *)baseStr;
+(void)gameOverWithChar:(const char*)score gameGoldChar:(const char*)gold baseScoreChar:(const char*)baseStr;




#pragma mark - setConfig

//1.设置游戏唯一标识gameid 以及应用名字
+(void)setGameId:(NSString *)gameid gameName:(NSString *)gameName;

//2.设置屏幕方向(YES: 横屏。NO:竖屏)
+(void)setScreenOrientation:(BOOL)isLandscape;

//3.设置游戏版本号
+(void)setGameVerion:(NSString *)GameVerion;

//4.微信
+(void)loadWXEngine:(NSString *)appid icon:(UIImage *)icon title:(NSString *)title message:(NSString *)message url:(NSString *)url;

//5.设置游戏视图
+(void)setGameView:(UIView *)gameView;

//6.挑战好友人数上限
+(void)setChallengeFriendNum:(int)maxSelectedNum;

//7.随机挑战人数上限
+ (void)setChallengeRanDomNun:(int)maxSelectedNum;

//8.设置按键声音文件（传文件名）
+(void)setButtonVoice:(NSString *)VoiceName;

//9.设置SDK其他页面的背景
+(void)setBNEngineBackgroundImage:(UIImage *)image;

//10.设置趣聊功能隐藏或者显示 YES为显示
+(void)setFunChatStatusDisplay:(BOOL)isDisplay;

//11.设置金币功能隐藏
+(void)setGoldHideMode;

//12.设置为测试服务器。
+(void)setDebugMode;



#pragma mark - 功能扩展
//1.获取用户信息
+ (NSDictionary *)getUser;

//2.获取音乐开关状态
+(BOOL)getMusicOnStatus;

//3.获取音效开关状态
+(BOOL)getSoundOnStatus;

//4.打开SDK商城
+ (void)showStoreView:(int)type;

//5.获取金币
+ (int)getGameGold;

//6.增加或减少金币
+ (BOOL)setGameGold:(int)gold;

//7.道具保存
+ (void)setGamePropSave:(NSString *)prop;

//8.获取道具
+ (NSString *)getGameProp;

//9.设置回放功能（NO为没有该功能）
+(void)setReplayStatus:(BOOL)isReplay;

//10.获取钻石数量
+(int)getGameDiamond;

//11.增加或减少钻石
+ (BOOL)setGameDiamond:(int)diamond;

//12.获取爱心数量
+(int)getGamePower;

//13.增加或减少爱心
+ (BOOL)setGamePower:(int)power;




//游戏结束(score:分数，data：游戏数据 gold：获得的金币数量 baseStr：基础分数（比如：‘基础分：1024 分’） archieveStr：表现分数（比如：‘表现分：204 分’）)
+(void)finishGame:(NSString *)score gameData:(NSData *)data gameGold:(NSString *)gold baseScoreStr:(NSString *)baseStr;
+(void)finishGameWithChar:(const char*)score gameData:(const char*)gamedata gameGoldChar:(const char*)gold baseScoreChar:(const char*)baseStr;







/*
///////回放/
//获取回放用户初始化游戏数据
+(NSData *)getInitRecordGameDataForData:(NSString *)userkey;
+(const char *)getInitRecordGameDataForChar:(NSString *)userkey;
//获取回放游戏数据包
+(NSData *)getRecordDataForData:(NSString *)userkey;
+(const char *)getRecordDataForChar:(NSString *)userkey;
//获取回放初始化成绩
+(NSString *)getInitRecordGameScoreForString:(NSString *)userkey;
+(const char *)getInitRecordGameScoreForChar:(NSString *)userkey;
//获取回放游戏成绩
+(NSString *)getRecordScoreForString:(NSString *)userkey;
+(const char *)getRecordScoreForChar:(NSString *)userkey;


///获取好友数据/
//游戏初始数据
+(int)setInitGameData:(NSString *)score gamedata:(NSData *)gamedata;
+(int)setInitGameDataWithChar:(const char*)score gamedata:(const char*)gamedata;

//获取用户初始化游戏数据
+(NSData *)getInitGameDataForData:(NSString *)userkey;
+(const char *)getInitGameDataForChar:(NSString *)userkey;

//获取用户初始化战绩
+(NSString *)getInitGameScoreForString:(NSString *)userkey;
+(const char*)getInitGameScoreForChar:(NSString *)userkey;

//获取用户游戏数据包
+(NSData *)getGameAllDataForData:(NSString *)userkey;
+(const char *)getGameAllDataForChar:(NSString *)userkey;
//获取用户游戏战绩
+(NSString *)getGameScoreForString:(NSString *)userkey;
+(const char *)getGameScoreForChar:(NSString *)userkey;
*/




/*

//选择游戏关卡
+(int)setGameLevelID:(int)levelid;
//获取游戏关卡
+(int)getGameLevelID;
//挑战好友
+(void)BN_ChallengeFriend:(int)maxSelectedNum;
//随机挑战
+(void)BN_ChallengeRanDom:(int)maxSelectedNum;
//排行榜
+(void)BN_getRanklist;
//个人中心
+(void)BN_getMyInfo;


//获取体力
+(int)getGamePower;
//减少体力
+(void)deletePower:(int)power;

*/


@end
