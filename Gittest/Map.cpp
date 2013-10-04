//
//  Map.cpp
//  Gittest
//
//  Created by Snälla Eleven on 2013-10-04.
//
//

#include "Map.h"

Map::Map() {
    tiles = new Tile*[8*13];
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 13; j++) {
            if((i == 3 && (j == 0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 5 || j == 7 || j == 8 || j == 9 || j == 10 || j == 11 || j == 12)) || (i == 4 && j == 5) || (i == 4 && j == 6) || (i == 4 && j == 7)){
                cocos2d::CCSprite* spriteW = cocos2d::CCSprite::create("Water.png", cocos2d::CCRect(0,0,40,40));
                Water* w1 = new Water(spriteW, j,i );
                this->addChild(w1);
            }
            else{
                cocos2d::CCSprite* spriteG = cocos2d::CCSprite::create("Ground.png", cocos2d::CCRect(0,0,40,40));
                Ground* g1 = new Ground(spriteG, j,i);
                this->addChild(g1);
            }
        }
    }
}

Map::Map(std::string fName) {
    loadFromFile(fName);
}

Map::~Map() {
    //Loopa igenom alla element och gör delete på dom
}

void Map::loadFromFile(std::string fName) {
    char* array;
    std::ifstream myFile;
    myFile.open(fName.c_str());
    if(myFile.is_open()){
        myFile.read(array, (sizeof(char)*(8*13)));
        
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 13; j++) {
                if(strncmp(&array[1*j+i],"W",1)){
                    cocos2d::CCSprite* spriteG = cocos2d::CCSprite::create("Ground.png", cocos2d::CCRect(0,0,40,40));
                    Ground* g1 = new Ground(spriteG, j,i);
                    this->addChild(g1);
                }
                else{
                    cocos2d::CCSprite* spriteW = cocos2d::CCSprite::create("Water.png", cocos2d::CCRect(0,0,40,40));
                    Water* w1 = new Water(spriteW, j,i );
                    this->addChild(w1);
                }
            }
        }
        
    }
    myFile.close();
    
    
    
    
    
}