//
//  Control.hpp
//  Pacman
//
//  Created by LeonKang on 2019/8/31.
//  Copyright © 2019 LeonKang. All rights reserved.
//

#ifndef Control_hpp
#define Control_hpp

#include <stdio.h>

void keyPressed(unsigned char key, int x, int y);
void keyUp(unsigned char key, int x, int y);
void resetGame();
void keyOperations();

#endif /* Control_hpp */
