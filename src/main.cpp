#include <Geode/Geode.hpp>

using namespace geode::prelude;

#include <Geode/modify/MenuLayer.hpp>
class $modify(MyMenuLayer, MenuLayer) {

void onPlayButton(CCObject* sender) {
FLAlertLayer::create("Hello world", 
"Hello from my <cp>mobile</c> mod!", 
"Close"
)->show();
}

};
