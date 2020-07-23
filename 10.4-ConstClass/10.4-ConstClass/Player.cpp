//
//  Player.cpp
//  10.4-ConstClass
//
//  Created by Cong Anh Nguyen on 7/23/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include "Player.h"
#include <iostream>

std::string Player::get_name() const
{
    return name;
}

void Player::set_name(std::string name_val)
{
    name = name_val;
}

Player::Player()
: Player{"None", 0, 0} {}

Player::Player(std::string name_val)
: Player{name_val, 0, 0} {}

Player::Player(std::string name_val, int health_val, int xp_val)
: name{name_val}, health{health_val}, xp{xp_val} {}

void display_player_name(const Player &p) {
    std::cout << p.get_name() << std::endl;
}
