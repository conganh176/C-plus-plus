//
//  Derived.cpp
//  13-Polymorphism
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include "Derived.h"
#include <iostream>

void Derived::say_hello() const {
    std::cout << "Hello from derived class" << std::endl;
}
