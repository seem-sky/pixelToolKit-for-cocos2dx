//
//  pixtkDynamicPixelModel.h
//  HelloCpp
//
//  Created by yang chao (wantnon) on 14-5-6.
//
//

#ifndef __HelloCpp__pixtkDynamicPixelModel__
#define __HelloCpp__pixtkDynamicPixelModel__

#include <iostream>
using namespace std;
#include "cocos2d.h"
using namespace cocos2d;
#include "pixtkDynamicPixelSprite.h"
namespace_pixtk_begin
class CdynamicPixelModel:public CCNode
{
public:
    CdynamicPixelModel(){};
    virtual~CdynamicPixelModel(){}
    void adddpSprite(CdynamicPixelSprite*dpSprite);
    int getdpSpriteCount()const{return (int)m_dpSpriteList.size();}
    CdynamicPixelSprite*getdpSpriteByIndex(int index);
    CCRect getBoundingBoxInLocalSpace()const;
    CCRect getBoundingBox();
protected:
    vector<CdynamicPixelSprite*> m_dpSpriteList;
};
namespace_pixtk_end
#endif /* defined(__HelloCpp__pixtkDynamicPixelModel__) */
