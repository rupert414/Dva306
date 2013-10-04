//
//  Map.h
//  Gittest
//
//  Created by Snälla Eleven on 2013-10-04.
//
//

#ifndef __Gittest__Map__
#define __Gittest__Map__

#include "Tile.h"
#include "Water.h"
#include "Ground.h"
#include <fstream>
#include <iostream>

class Map : public cocos2d::CCNode{
private:
    Tile** tiles;
    
public:
    //Constructor/Destructor
    Map();
    Map(std::string fName);
    ~Map();
    
    void loadFromFile(std::string fName);
    
    
    
};

#endif /* defined(__Gittest__Map__) */
