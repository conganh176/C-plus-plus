//
//  Base.cpp
//  12.3-ArgumentsToBaseClass
//
//  Created by Cong Anh Nguyen on 7/24/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include "Base.h"
#include <iostream>

Base::Base()
: value(0) {
    std::cout << "Base no-args constructor" << std::endl;
}

Base::Base(int x)
: value(x) {
    std::cout << "Base overloaded constructor" << std::endl;
}

Base::~Base() {
    std::cout << "Base destructor" << std::endl;
}
