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
