//
//  Laberynth.cpp
//  Pacman
//
//  Created by LeonKang on 2019/8/31.
//  Copyright © 2019 LeonKang. All rights reserved.
//

#include "Laberynth.hpp"
#include "main.h"

void drawLaberynth() {
    glColor3f(1.0, 1.0, 1.0);
    
    for (vector<int>::size_type i = 0; i < border.size(); i = i + 4) {
        glRectf(border.at(i) * squareSize, border.at(i + 1) * squareSize, border.at(i + 2) * squareSize, border.at(i + 3) * squareSize);
    }
    
    for (vector<int>::size_type j = 0; j < obstaclesBottom.size(); j = j + 4){
        glRectf(obstaclesBottom.at(j) * squareSize, obstaclesBottom.at(j + 1)*squareSize, obstaclesBottom.at(j + 2)*squareSize, obstaclesBottom.at(j + 3)*squareSize);
    }
    for (vector<int>::size_type k = 0; k < obstaclesMiddle.size(); k = k + 4){
        glRectf(obstaclesMiddle.at(k) * squareSize, obstaclesMiddle.at(k + 1)*squareSize, obstaclesMiddle.at(k + 2)*squareSize, obstaclesMiddle.at(k + 3)*squareSize);
    }
    for (vector<int>::size_type p = 0; p < obstaclesTop.size(); p = p + 4){
        glRectf(obstaclesTop.at(p) * squareSize, obstaclesTop.at(p + 1)*squareSize, obstaclesTop.at(p + 2)*squareSize, obstaclesTop.at(p + 3)*squareSize);
    }
}
