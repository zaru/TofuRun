//
//  GameLayer.h
//  TofuRun
//
//  Created by hiro on 2014/01/13.
//
//

#ifndef __TofuRun__GameLayer__
#define __TofuRun__GameLayer__

#include "cocos2d.h"
#include "cocos-ext.h"

USING_NS_CC;
USING_NS_CC_EXT;

#define GOAL_COUNT 100

class GameLayer : public CCLayer, public CCBSelectorResolver, public CCBMemberVariableAssigner {
    enum EFoot {
        FOOT_UNKNOWN = 0,
        FOOT_LEFTFOOT = 1,
        FOOT_RIGHTFOOT = 2,
    };
    
    int mCount;
    EFoot mBeforeFoot;
    CCSprite* mBg1;
    CCSprite* mBg2;
    CCSprite* mBg3;
    CCBAnimationManager* mAnimationManager;
    
    virtual SEL_MenuHandler onResolveCCBCCMenuItemSelector(CCObject* pTarget, const char* pSelectorName);
    virtual SEL_CCControlHandler onResolveCCBCCControlSelector(CCObject* pTarget, const char* pSelectorName);
    virtual bool onAssignCCBMemberVariable(CCObject* pTarget, const char* pMemberVariableName, CCNode* pNode);
    
    void tappedLeftFoot(CCObject* pSender, CCControlEvent pCCControlEvent);
    void tappedRightFoot(CCObject* pSender, CCControlEvent pCCControlEvent);
    void tappedFoot(EFoot currentFoot);

public:
    GameLayer();
    virtual ~GameLayer();
    
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_WITH_INIT_METHOD(GameLayer, create);
    
    void setAnimationManager(CCBAnimationManager* pAnimationManager);
};

#endif /* defined(__TofuRun__GameLayer__) */
