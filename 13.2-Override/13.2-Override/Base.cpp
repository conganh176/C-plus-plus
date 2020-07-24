//
//  Base.cpp
//  13.2-Override
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include "Base.h"
#include <iostream>

void Base::say_hello() const {
    std::cout << "Hello from base" << std::endl;
}

Base::~Base() {
    
}
