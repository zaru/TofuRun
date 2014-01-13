//
//  GameLayer.cpp
//  TofuRun
//
//  Created by hiro on 2014/01/13.
//
//

#include "GameLayer.h"

SEL_MenuHandler GameLayer::onResolveCCBCCMenuItemSelector(CCObject* pTarget, const char* pSelectorName) {
    CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this, "tappedLeftFoot", GameLayer::tappedLeftFoot);
    CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this, "tappedRightFoot", GameLayer::tappedRightFoot);
    
    return NULL;
}

void GameLayer::tappedLeftFoot(CCObject* pSender, CCControlEvent pCCControlEvent) {
    CCLOG("left");
}
void GameLayer::tappedRightFoot(CCObject* pSender, CCControlEvent pCCControlEvent) {
    CCLOG("right");
}

SEL_CCControlHandler GameLayer::onResolveCCBCCControlSelector(CCObject* pTarget, const char* pSelectorName) {
    return NULL;
}