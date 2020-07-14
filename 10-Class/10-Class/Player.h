//
//  Player.h
//  10-Class
//
//  Created by Cong Anh Nguyen on 7/15/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <iostream>
#include <string>

class Player {
private:
    std::string name;
    int health;
    int xp;
public:
    void set_name(std::string n);
    
    std::string get_name();

    //    Player(std::string name_val, int health_val, int xp_val) {
    //        name = name_val;
    //        health = health_val;
    //        xp = xp_val;
    //        std::cout << "Three args constructor called" << std::endl;
    //    }
    
    Player(std::string name_val = "None", int health_val = 100, int xp_val = 0)
    : name {name_val}, health {health_val}, xp {xp_val} {
        std::cout << "Three args constructor called" << std::endl;
    };
    
    ~Player() {
        std::cout << "Destructor called for " << name << std::endl;
    }
};
    
#endif /* Player_h */
