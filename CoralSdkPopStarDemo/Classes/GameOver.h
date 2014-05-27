#ifndef  _GAME_OVER_H_
#define  _GAME_OVER_H_
#include "cocos2d.h"


class CGameOver : public cocos2d::Layer 
{
public:

	CREATE_FUNC(CGameOver);
    bool Over();
    void BnFunc();
    
    int score;

private:
	virtual bool init();
};
#endif //_GAME_OVER_H_

