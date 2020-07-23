//
//  Player.cpp
//  10.5-StaticClass
//
//  Created by Cong Anh Nguyen on 7/23/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include "Player.h"
#include <iostream>

int Player::num_players {0};

std::string Player::get_name() {
    return name;
}

int Player::get_health() {
    return health;
}

int Player::get_xp() {
    return xp;
}

Player::Player(std::string name_val, int health_val, int xp_val)
: name{name_val}, health{health_val}, xp{xp_val} {
    ++num_players;
}

Player::Player(const Player &source)
: Player{source.name, source.health, source.xp} {}

Player::~Player() {
    --num_players;
}

int Player::get_num_players() {
    return num_players;
}

void display_active_players() {
    std::cout << "Active players: " << Player::get_num_players() << std::endl;
}
