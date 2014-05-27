#pragma once
#include "cocos2d.h"


class CostomeKeyPadDelegae : public cocos2d::Layer
{
    public:
    virtual void onKeyPressed(cocos2d::EventKeyboard::KeyCode keyCode, cocos2d::Event* event);
    virtual void onKeyReleased(cocos2d::EventKeyboard::KeyCode keyCode, cocos2d::Event* event);
};