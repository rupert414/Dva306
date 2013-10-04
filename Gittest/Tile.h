//
//  Tile.h
//  Gittest
//
//  Created by Snälla Eleven on 2013-10-04.
//
//

#ifndef __Gittest__Tile__
#define __Gittest__Tile__

#include "cocos2d.h"

class Tile : public cocos2d::CCNode {
private:
    cocos2d::CCSprite* _sprite;
    
public:
    //Constructor
    Tile(cocos2d::CCSprite* sprite,int i, int j);
    ~Tile();
    
    //Getters
    
    //Setters
    
    //Functions
    virtual void update() const = 0;
    

};

#endif /* defined(__Gittest__Tile__) */
