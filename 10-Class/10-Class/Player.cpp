//
//  Player.cpp
//  10-Class
//
//  Created by Cong Anh Nguyen on 7/15/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include "Player.h"
#include <string>

void Player::set_name(std::string n){
    name = n;
}

std::string Player::get_name() {
    return name;
}
