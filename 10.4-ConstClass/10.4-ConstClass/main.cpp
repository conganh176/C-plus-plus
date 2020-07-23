//
//  main.cpp
//  10.4-ConstClass
//
//  Created by Cong Anh Nguyen on 7/23/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include "Player.h"

int main(int argc, const char * argv[]) {
    const Player villain {"Villain", 100, 55};
    std::cout << villain.get_name() << std::endl;
    display_player_name(villain);
    
    Player hero {"Hero", 100, 0};
    std::cout << hero.get_name() << std::endl;
    display_player_name(hero);
    
    return 0;
}
