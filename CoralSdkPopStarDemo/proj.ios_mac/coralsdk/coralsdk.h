//
//  File.h
//  BnInterfaceForIOS
//
//  Created by mac mini on 13-12-20.
//
//

#ifndef __BnInterfaceForIOS__File__
#define __BnInterfaceForIOS__File__

#include <iostream>
#include <cocos2d.h>

using namespace std;

//设置游戏配置
void BnSetConfig(void *__glView);

void IOSLogin(int type);//cocos2d::CCString

bool IOSGetLoginStatus();

void IOSShowGameHome();

//隐藏SDK
void IOSBnHideSDK();

void IOSGameOver(int score,int gold, const char* baseStr);

//==============拓展功能================

const char *IOSGetProfile();

bool IOSGetMusicOnStatus();

bool IOSGetSoundOnStatus();

void IOSSetConfig();

//增加或减少金币
bool IOSBnSetGameGold(int gold);

//获取金币
int IOSBnGetGameGold();

//page:1、爱心 2、金币 3、钻石
void IOSBnShowStoreView(int page);

//道具保存
void IOSBnSetGamePropSave(const char *prop);

//获取道具
const char *IOSBnGetGameProp();

//获取钻石数量
int IOSBnGetGameDiamond();

//增加或减少钻石
bool IOSBnSetGameDiamond(int DiamondNum);

//获取爱心数量
int IOSBnGetGamePower();

//增加或减少爱心
bool IOSBnSetGamePower(int PowerNum);
#endif /* defined(__BnCocos2dCallSDK__File__) */
