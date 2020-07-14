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
    int get_health();
    int get_xp();
    
    Player(std::string name_val = "None", int health_val = 100, int xp_val = 0);
        
    //Copy constructor
    Player(const Player &source);
        
    //Destructor
    ~Player() {
        std::cout << "Destructor called for " << name << std::endl;
    }
};

void display_player(Player p);
    
#endif /* Player_h */

