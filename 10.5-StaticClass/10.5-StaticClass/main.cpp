//
//  main.cpp
//  10.5-StaticClass
//
//  Created by Cong Anh Nguyen on 7/23/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include "Player.h"

int main(int argc, const char * argv[]) {
    display_active_players();   //0
    Player hero{"Hero"};
    display_active_players();   //1
    
    {
        Player frank{"Frank"};
        display_active_players();   //2
    }
    
    display_active_players();   //1
    
    Player *enemy = new Player{"Enemy", 100, 100};
    display_active_players();   //2
    delete enemy;
    display_active_players();   //1
    
    return 0;
}
