//
//  CreatePacman.cpp
//  Pacman
//
//  Created by LeonKang on 2019/8/31.
//  Copyright © 2019 LeonKang. All rights reserved.
//

#include "CreatePacman.hpp"
#include "main.h"

void drawPacman(float positionX, float positionY, float rotation) {
    int x, y;
    glBegin(GL_LINE);
    glColor3f(1.0, 1.0, 0.0);
    for (int k = 0; k < 32; k ++) {
        x = (float)k / 2.0 * cos((30 + 90 * rotation) * M_PI / 180.0) + (positionX * squareSize);
        y = (float)k / 2.0 * sin((30 + 90 * rotation) * M_PI / 180.0) + (positionY * squareSize);
        for (int i = 30; i < 330; i++) {
            glVertex2f(x, y);
            x = (float)k / 2.0 * cos((i + 90 * rotation) * M_PI / 180.0) + (positionX * squareSize);
            y = (float)k / 2.0 * sin((i + 90 * rotation) * M_PI / 180.0) + (positionY * squareSize);
            glVertex2f(x, y);
        }
    }
    glEnd();
}
