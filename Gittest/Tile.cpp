//
//  Tile.cpp
//  Gittest
//
//  Created by Snälla Eleven on 2013-10-04.
//
//

#include "Tile.h"

Tile::Tile(cocos2d::CCSprite* sprite,int i,int j) {
    _sprite = sprite;
    
    if(_sprite){
        _sprite->setAnchorPoint(cocos2d::CCPoint(0,0));
        _sprite->cocos2d::CCNode::setPosition(i*40, j*40);
        this->addChild(_sprite);
    }
}

Tile::~Tile() {}