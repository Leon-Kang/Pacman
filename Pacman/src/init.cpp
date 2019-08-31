//
//  init.cpp
//  Pacman
//
//  Created by LeonKang on 2019/8/31.
//  Copyright © 2019 LeonKang. All rights reserved.
//

#include "init.hpp"
#include "main.h"

void init(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
    
    for (int i = 0; i < 256; i++) {
        keyStates[i] = false;
    }
    
    bitmap.push_back({ true, true, true, true, true, true, true, true, true, true, true, true, true, true, true });
    bitmap.push_back({ true, false, false, false, false, false, false, false, false, false, false, false, false, false, true });
    bitmap.push_back({ true, false, true, true, true, true, false, true, true, false, true, true, true, false, true });
    bitmap.push_back({ true, false, false, false, false, true, false, true, false, false, false, false, true, false, true});
    bitmap.push_back({ true, false, true, true, false, false, false, false, false, true, true, false, false, false, true});
    bitmap.push_back({ true, false, false, true, true, false, true, true, true, true, false, false, true, false, true});
    bitmap.push_back({ true, true, false, false, false, false, true, false, true, true, false, true, true, false, true});
    bitmap.push_back({ true, true, true, true, true, false, false, false, true, false, false, false, false, false, true});
    bitmap.push_back({ true, true, false, false, false, false, true, false, true, true, false, true, true, false, true });
    bitmap.push_back({ true, false, false, true, true, false, true, true, true, true, false, false, true, false, true });
    bitmap.push_back({ true, false, true, true, false, false, false, false, false, true, true, false, false, false, true });
    bitmap.push_back({ true, false, false, false, false, true, false, true, false, false, false, false, true, false, true });
    bitmap.push_back({ true, false, true, true, true, true, false, true, true, false, true, true, true, false, true });
    bitmap.push_back({ true, false, false, false, false, false, false, false, false, false, false, false, false, false, true });
    bitmap.push_back({ true, true, true, true, true, true, true, true, true, true, true, true, true, true, true });
}
