//
//  Player.h
//  10.5-StaticClass
//
//  Created by Cong Anh Nguyen on 7/23/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

class Player {
private:
    static int num_players;
    std::string name;
    int health;
    int xp;
public:
    std::string get_name();
    int get_health();
    int get_xp();
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    Player(const Player &source);
    ~Player();
    static int get_num_players();
};

void display_active_players();

#endif /* Player_h */
