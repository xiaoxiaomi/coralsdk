#include "GameOver.h"
#include "extensions/cocos-ext.h"
#include "CoralSdkApi/BnInterface.h"

USING_NS_CC;



bool CGameOver::init()
{
    score = 0;
    auto layer = LayerColor::create(Color4B(0, 0, 0, 100));
    this->addChild(layer, 9999);
 
    auto bnfunc = CallFuncN::create(std::bind(&CGameOver::BnFunc, this));

    auto dl = DelayTime::create(1);
    auto sq = Sequence::create(dl,bnfunc, NULL);
    this->runAction(sq);
	return true;
}
void CGameOver::BnFunc()
{
    CGameOver::Over();
}


bool CGameOver::Over()
{
    BnGameOver(score, 0, CCString::createWithFormat("     基础分值:%d\r\n     属于一般水平！",score)->getCString());
	return true;
}