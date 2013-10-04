//
//  Ground.h
//  Gittest
//
//  Created by Snälla Eleven on 2013-10-04.
//
//

#ifndef __Gittest__Ground__
#define __Gittest__Ground__

#include "cocos2d.h"
#include "Tile.h"

class Ground : public Tile{
private:
public:
    //Constructor
    Ground(cocos2d::CCSprite* sprite,int i,int j);
    ~Ground();
    
    //Getters
    
    //Setters
    
    //Functions
    void update() const;
    
};

#endif /* defined(__Gittest__Ground__) */
