//
//  Water.h
//  Gittest
//
//  Created by Snälla Eleven on 2013-10-04.
//
//

#ifndef __Gittest__Water__
#define __Gittest__Water__

#include "cocos2d.h"
#include "Tile.h"

class Water : public Tile{
private:
public:
    //Constructor
    Water(cocos2d::CCSprite* sprite,int i,int j);
    ~Water();
    
    //Getters
    
    //Setters
    
    //Functions
    void update() const;
    
};

#endif /* defined(__Gittest__Water__) */
