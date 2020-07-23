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

int Player::get_health() {
    return health;
}

int Player::get_xp() {
    return xp;
}

//Player::Player(std::string name_val, int health_val, int xp_val) {
//    name = name_val;
//    health = health_val;
//    xp = xp_val;
//    std::cout << "Three args constructor called" << std::endl;
//}

Player::Player(std::string name_val, int health_val, int xp_val)
    : name {name_val}, health {health_val}, xp {xp_val} {
        std::cout << "Three args constructor called for " << name << std::endl;
    };

Player::Player(const Player &source)
    //: name {source.name}, health {source.health}, xp {source.xp} {
    : Player {source.name, source.health, source.xp} {
        std::cout << "Copy constructor - made copy of : " << source.name << std::endl;
    }

void display_player(Player p) {
    std::cout << "Name: " << p.get_name() << std::endl;
    std::cout << "Health: " << p.get_health() << std::endl;
    std::cout << "XP: " << p.get_xp() << std::endl;
}

Player::~Player() {
    std::cout << "Destructor called for " << name << std::endl;
}
