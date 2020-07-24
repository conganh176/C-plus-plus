//
//  Derived.cpp
//  12.3-ArgumentsToBaseClass
//
//  Created by Cong Anh Nguyen on 7/24/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include "Derived.h"
#include <iostream>

Derived::Derived()
: Base(0), double_value(0) {
    std::cout << "Derived no-args constructor" << std::endl;
}

Derived::Derived(int x)
: Base(x), double_value(x) {
    std::cout << "Derived overloaded constructor" << std::endl;
}

Derived::~Derived() {
    std::cout << "Derived destructor" << std::endl;
}
