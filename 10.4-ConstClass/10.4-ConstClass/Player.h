//
//  Player.h
//  10.4-ConstClass
//
//  Created by Cong Anh Nguyen on 7/23/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <iostream>

class Player {
private:
    std::string name;
    int health;
    int xp;
public:
    std::string get_name() const;
    void set_name(std::string name_val);
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

void display_player_name(const Player &p);

#endif /* Player_h */
