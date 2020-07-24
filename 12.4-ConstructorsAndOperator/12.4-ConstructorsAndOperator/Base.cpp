//
//  Base.cpp
//  12.4-ConstructorsAndOperator
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Base.h"

Base::Base()
: value(0) {
    std::cout << "Base no-arg constructor" << std::endl;
}

Base::Base(int x)
: value(x) {
    std::cout << "Base int constructor" << std::endl;
}

Base::Base(const Base &other)
: value(other.value) {
    std::cout << "Base copy constructor" << std::endl;
}

Base &Base::operator=(const Base &rhs) {
    std::cout << "Base operator=" << std::endl;
    if (this == &rhs)
    {
        return *this;
    }
    value = rhs.value;
    return *this;
}

Base::~Base() {
    std::cout << "Base destructor" << std::endl;
}
