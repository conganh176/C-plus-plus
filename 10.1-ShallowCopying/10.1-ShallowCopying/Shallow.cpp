//
//  Shallow.cpp
//  10.1-ShallowCopying
//
//  Created by Cong Anh Nguyen on 7/21/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include "Shallow.h"
#include <iostream>

void Shallow::set_data_value(int d) {
    *data = d;
}

int Shallow::get_data_value() {
    return *data;
}

Shallow::Shallow(int d) {
    data = new int;
    *data = d;
}

Shallow::Shallow(const Shallow &source)
: data(source.data) {
    std::cout << "Copy constructor - shallow copy" << std::endl;
}

Shallow::~Shallow() {
    delete data;
    std::cout << "Destructor freeing data" << std::endl;
}

void display_shallow(Shallow s) {
    std::cout << s.get_data_value() << std::endl;
}

