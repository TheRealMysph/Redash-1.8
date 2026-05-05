#pragma once
#include "cocos2d.h"

void LevelInfoLayer_hook();
void GJGameLevel_hook();

inline void applyNanoHooks() {
    LevelInfoLayer_hook();
    GJGameLevel_hook();
}