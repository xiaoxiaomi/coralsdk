#include "CostomeKeyPadDelegae.h"
#include "cocos2d.h"
USING_NS_CC;


void onKeyPressed(cocos2d::EventKeyboard::KeyCode keyCode, cocos2d::Event* event)
{
    
}
void onKeyReleased(cocos2d::EventKeyboard::KeyCode keyCode, cocos2d::Event* event)
{
   Director::getInstance()->end();
}