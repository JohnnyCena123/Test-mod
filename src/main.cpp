#include <Geode/Geode.hpp>

using namespace geode::prelude;

#include <Geode/modify/MenuLayer.hpp>
class $modify(MyMenuLayer, MenuLayer) {

void onPlay(CCObject* sender) {
FLAlertLayer::create("Hello world", 
"Hello from my <cp>mobile</c> mod!", 
"Close"
)->show();
}

void onOptions(CCObject* sender) {
  FLAlertLayer::create("Sike!", 
"You can't change the options.", 
"Close"
)->show();
}
};

PlayLayer* playLayer;
#include <Geode/modify/PlayLayer.hpp>
class $modify(MyPlayLayer, PlayLayer) {
  bool init(GJGameLevel* level, bool useReplay, bool dontCreateObjects) {
    if (!PlayLayer::init(level, useReplay, dontCreateObjects)) return false;
      playLayer = this;
    return true;
      }
};

#include <Geode/modify/PauseLayer.hpp>
class $modify(MyPauseLayer, PauseLayer) {
void customSetup() {
  PauseLayer::customSetup();
  playLayer->getChildByID("progress-bar")->setPositionX(120);
  playLayer->getChildByID("precentage-label")->setPositionX(231);
}
};
