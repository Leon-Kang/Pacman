//
//  main.cpp
//  Pacman
//
//  Created by LeonKang on 2019/8/31.
//  Copyright © 2019 LeonKang. All rights reserved.
//

#include <iostream>
#include "main.h"

static float const kWindowSizeWidth = 750;
static float const kWindowSizeHeight = 750;

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(kWindowSizeWidth, kWindowSizeHeight);
    glutInitWindowPosition(500, 50);
    glutCreateWindow("Pacman");
    
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutIdleFunc(display);
    glutKeyboardFunc(keyPressed);
    glutKeyboardUpFunc(keyUp);
    
    init();
    glutMainLoop();
    
    return 0;
}
