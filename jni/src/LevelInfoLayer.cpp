#include "robtop/GJGameLevel.hpp"
#include "includes.h"

bool (*t_LevelInfoLayer_init)(CCLayer*, GJGameLevel*);
bool LevelInfoLayer_init(CCLayer* self, GJGameLevel* lvl) {
    t_LevelInfoLayer_init(self, lvl);
    auto win_size = CCDirector::sharedDirector()->getWinSize();
    int levelID = lvl->m_nLevelID; 
    int isEpic = g_lvlData[levelID];
    CCLog("val42 equals %i (LevelInfoLayer::init)", isEpic);

    if(isEpic > 0) {
        CCSprite* spr = CCSprite::create("GJ_epicCoin_001.png");
        spr->setPosition({(win_size.width / 2) - 120, (win_size.height / 2) + 35});
        self->addChild(spr, -2);
    }
    return true;
}

class LevelCell : public CCLayer {
public:
  virtual ~LevelCell() = default;
};

void (*t_LevelCell_loadCustomLevelCell)(LevelCell*);
void LevelCell_loadCustomLevelCell(LevelCell* self) {
    t_LevelCell_loadCustomLevelCell(self);
    auto lvl = from<GJGameLevel*>(self, 0x15c);
    
    int levelID = lvl->m_nLevelID; 
    int isEpic = g_lvlData[levelID];
    CCLog("val42 equals %i (LevelInfoLayer::init)", isEpic);

    if(isEpic > 0) {
        CCSprite* frame = CCSprite::create("GJ_epicCoin_001.png");
        frame->setPosition({26.f, 40.f});
        frame->_setZOrder(-1);
        self->addChild(frame, -1);
    }
}

void LevelInfoLayer_hook() {
    HOOK("_ZN14LevelInfoLayer4initEP11GJGameLevel", LevelInfoLayer_init, t_LevelInfoLayer_init);
    HOOK("_ZN9LevelCell19loadCustomLevelCellEv", LevelCell_loadCustomLevelCell, t_LevelCell_loadCustomLevelCell);
}