//
//  Derived.cpp
//  12.2-ConstructorDestructor
//
//  Created by Cong Anh Nguyen on 7/24/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Derived.h"

Derived::Derived()
: doubled_value{0} {
    std::cout << "Derived no-args constructor" << std::endl;
}

Derived::Derived(int x)
: doubled_value{x} {
    std::cout << "Derived overloaded constructor" << std::endl;
}

Derived::~Derived() {
    std::cout << "Derived destructor" << std::endl;
}
