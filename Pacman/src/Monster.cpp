//
//  Monster.cpp
//  Pacman
//
//  Created by LeonKang on 2019/8/31.
//  Copyright © 2019 LeonKang. All rights reserved.
//

#include "Monster.hpp"
#include "main.h"

void drawMonster(float positionX, float positionY, float r, float g, float b) {
    int x, y;
    glBegin(GL_LINES);
    glColor3f(r, g, b);
    
    for (int k = 0; k < 32; k++) {
        x = (float)k / 2.0 * cos(360 * M_PI / 180.0) + (positionX * squareSize);
        y = (float)k / 2.0 * sin(360 * M_PI / 180.0) + (positionY * squareSize);
        for (int i = 180; i <= 360; i++){
            glVertex2f(x, y);
            x = (float)k / 2.0 * cos(i * M_PI / 180.0) + (positionX * squareSize);
            y = (float)k / 2.0 * sin(i * M_PI / 180.0) + (positionY * squareSize);
            glVertex2f(x, y);
        }
    }
    glEnd();
    
    glRectf((positionX * squareSize) - 17, positionY * squareSize, (positionX * squareSize) + 15, (positionY * squareSize) + 15);
    glBegin(GL_POINTS);
    glColor3f(0, 0.2, 0.4);
    
    glVertex2f((positionX * squareSize) - 11, (positionY * squareSize) + 14); //legs
    glVertex2f((positionX * squareSize) - 1, (positionY * squareSize) + 14); //legs
    glVertex2f((positionX * squareSize) + 8, (positionY * squareSize) + 14); //legs
    glVertex2f((positionX * squareSize) + 4, (positionY * squareSize) - 3); //eyes
    glVertex2f((positionX * squareSize) - 7, (positionY * squareSize) - 3); //eyes
    glEnd();
}

void updateMonster(float *monster, int id) {
    
    int x1Quadrant = (int)((monster[0] - (2 / squareSize)) - (16.0 * cos(360 * M_PI / 180.0)) / squareSize);
    int x2Quadrant = (int)((monster[0] + (2 / squareSize)) + (16.0 * cos(360 * M_PI / 180.0)) / squareSize);
    int y1Quadrant = (int)((monster[1] - (2 / squareSize)) - (16.0 * cos(360 * M_PI / 180.0)) / squareSize);
    int y2Quadrant = (int)((monster[1] + (2 / squareSize)) + (16.0 * cos(360 * M_PI / 180.0)) / squareSize);
    
    switch ((int)monster[2]) {
        case 1:
            if (!bitmap.at(x1Quadrant).at((int)monster[1])) {
                monster[0] -= 2 / squareSize;
            }else {
                int current = monster[2];
                do{
                    monster[2] = (rand() % 4) + 1;
                } while (current == (int) monster[2]);
            }
            break;
        case 2:
            if (!bitmap.at(x2Quadrant).at((int)monster[1])) {
                monster[0] += 2 / squareSize;
            }
            else {
                int current = monster[2];
                do{
                    monster[2] = (rand() % 4) + 1;
                } while (current == (int)monster[2]);
            }
            break;
        case 3:
            if (!bitmap.at((int)monster[0]).at(y1Quadrant)) {
                monster[1] -= 2 / squareSize;
            }
            else {
                int current = monster[2];
                do{
                    monster[2] = (rand() % 4) + 1;
                } while (current == (int)monster[2]);
            }
            break;
        case 4:
            if (!bitmap.at((int)monster[0]).at(y2Quadrant)) {
                monster[1] += 2 / squareSize;
            }
            else {
                int current = monster[2];
                do{
                    monster[2] = (rand() % 4) + 1;
                } while (current == (int)monster[2]);
            }
            break;
        default:
            break;
    }
}
