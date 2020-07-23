//
//  Deep.cpp
//  10.2-DeepCopying
//
//  Created by Cong Anh Nguyen on 7/21/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include "Deep.h"
#include <iostream>

void Deep::set_data_value(int d) {
    *data = d;
}

int Deep::get_data_value() {
    return *data;
}

Deep::Deep(int d) {
    data = new int;
    *data = d;
}

Deep::Deep(const Deep &source)
: Deep {*source.data} {
    std::cout << "Copy constructor - deep copy" << std::endl;
}
    
Deep::~Deep() {
    delete data;
    std::cout << "Desctructor freeing data" << std::endl;
}
    
void display_deep(Deep s) {
    std::cout << s.get_data_value() << std::endl;
}
