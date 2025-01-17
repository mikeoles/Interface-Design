#ifndef __PLAY_SCENE_H__
#define __PLAY_SCENE_H__

#include "cocos2d.h"

class Play : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(Play);
    
    void update(float dt);
    void toHome(cocos2d::Ref *pSender);
    bool onTouchBegan(cocos2d::Touch *touch, cocos2d::Event * event);
};

#endif // __HELLOWORLD_SCENE_H__
