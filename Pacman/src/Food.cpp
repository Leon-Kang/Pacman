//
//  Food.cpp
//  Pacman
//
//  Created by LeonKang on 2019/8/31.
//  Copyright © 2019 LeonKang. All rights reserved.
//

#include "Food.hpp"
#include "main.h"

bool foodEaten(int x, int y, float pacmanX, float pacmanY) {
    
    if (x >= pacmanX - 16.0 * cos(359 * M_PI / 180.0)
        && x <= pacmanX + 16.0 * cos(359 * M_PI / 180.0)) {
        
        if (y >= pacmanY - 16.0 * cos(359 * M_PI / 180.0)
            && y <= pacmanY + 16.0 * cos(359 * M_PI / 180.0)) {
            return true;
        }
        
    }
    
    return false;
}

void drawFood(float pacmanX, float pacmanY) {
    deque<float> temp;
    
    for (deque<float>::size_type i = 0; i < Food.size(); i = i + 2) {
        if (!foodEaten(Food.at(i) * squareSize, Food.at(i + 1) * squareSize, pacmanX, pacmanY)) {
            temp.push_back(Food.at(i));
            temp.push_back(Food.at(i + 1));
        } else {
            point++;
        }
    }
    Food.swap(temp);
    glPointSize(5.0);
    glBegin(GL_POINTS);
    glColor3f(1.0, 1.0, 1.0);
    
    for (deque<float>::size_type j = 0; j < Food.size(); j = j + 2) {
        glVertex2f(Food.at(j) * squareSize, Food.at(j + 1) * squareSize);
    }
    glEnd();
}
