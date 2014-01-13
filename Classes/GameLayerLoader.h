//
//  GameLayerLoader.h
//  TofuRun
//
//  Created by hiro on 2014/01/13.
//
//

#ifndef TofuRun_GameLayerLoader_h
#define TofuRun_GameLayerLoader_h

#include "GameLayer.h"

class GameLayerLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(GameLayerLoader, loader);
    
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(GameLayer);
};

#endif
