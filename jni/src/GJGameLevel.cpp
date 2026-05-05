#include "robtop/GJGameLevel.hpp"
#include "includes.h"

GJGameLevel* (*t_GJGameLevel_create)(CCDictionary*);
GJGameLevel* GJGameLevel_create(CCDictionary* dict) {
    GJGameLevel* self = t_GJGameLevel_create(dict);
    int levelID = dict->valueForKey("1")->intValue();
    int isEpic = dict->valueForKey("42")->intValue();
        
    g_lvlData[levelID] = isEpic;
    return self;
}

void GJGameLevel_hook() {
    HOOK("_ZN11GJGameLevel6createEPN7cocos2d12CCDictionaryE", GJGameLevel_create, t_GJGameLevel_create);
}