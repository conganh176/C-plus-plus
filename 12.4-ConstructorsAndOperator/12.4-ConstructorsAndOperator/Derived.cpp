//
//  Derived.cpp
//  12.4-ConstructorsAndOperator
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Derived.h"

Derived::Derived()
: Base() {
    std::cout << "Derived no-args constructor" << std::endl;
}

Derived::Derived(int x)
: Base(x), doubled_value(x * 2) {
    std::cout << "Derived int constructor" << std::endl;
}

Derived::Derived(const Derived &other)
: Base(other), doubled_value(other.doubled_value) {
    std::cout << "Derived copy constructor" << std::endl;
}

Derived &Derived::operator=(const Derived &rhs) {
    std::cout << "Derived operator=" << std::endl;
    if (this == &rhs)
    {
        return *this;
    }
    Base::operator=(rhs);
    doubled_value = rhs.doubled_value;
    return *this;
}

Derived::~Derived() {
    std::cout << "Derived destructor" << std::endl;
}
