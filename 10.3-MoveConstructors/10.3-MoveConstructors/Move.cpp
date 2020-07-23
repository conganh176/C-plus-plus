//
//  Move.cpp
//  10.3-MoveConstructors
//
//  Created by Cong Anh Nguyen on 7/23/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include "Move.h"
#include <iostream>

void Move::set_data_value(int d) {
    *data = d;
}

int Move::get_data_value() {
    return *data;
}

Move::Move(int d) {
    data = new int;
    *data = d;
    std::cout << "Constructor for " << d << std::endl;
}

//Copy
Move::Move(const Move &source)
    :Move {*source.data} {
    std::cout << "Copy constructor - Deep copying for " << *data << std::endl;
}
    
//Move
Move::Move(Move &&source) noexcept
    :data {source.data} {
        source.data = nullptr;
        std::cout << "Move constructor - Moving resource: " << *data << std::endl;
}

Move::~Move() {
    if (data != nullptr) {
        std::cout << "Destructor freeing data for " << *data << std::endl;
    }
    else {
        std::cout << "Destructor freeing data for nullptr" << std::endl;
    }
    delete data;
}
