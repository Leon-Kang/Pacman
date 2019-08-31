//
//  Pacman.hpp
//  Pacman
//
//  Created by LeonKang on 2019/8/31.
//  Copyright © 2019 LeonKang. All rights reserved.
//

#ifndef Pacman_hpp
#define Pacman_hpp

#include <stdio.h>
#include <vector>
#include <GLUT/GLUT.h>
#include <iostream>
#include <cstring>
#include <math.h>
#include <deque>

using namespace std;

extern bool replay;
extern bool over;

extern float squareSize;
extern float xIncrement;
extern float yIncrement;
extern int rotation;

extern float *monster1;
extern float *monster2;
extern float *monster3;
extern float *monster4;

extern vector<int> border;

extern vector<int> obstaclesTop;
extern vector<int> obstaclesMiddle;
extern vector<int> obstaclesBottom;

extern deque<float> Food;

extern vector<vector<bool>> bitmap;

extern bool *keyStates;

extern int point;


#endif /* Pacman_hpp */
