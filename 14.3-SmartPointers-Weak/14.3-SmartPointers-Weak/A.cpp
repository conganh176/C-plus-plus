//
//  A.cpp
//  14.3-SmartPointers-Weak
//
//  Created by Cong Anh Nguyen on 7/28/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include "A.h"

void A::set_B(std::shared_ptr<B> &b) {
    b_ptr = b;
}

A::A() {
    std::cout << "A constructor" << std::endl;
}

A::~A() {
    std::cout << "A destructor" << std::endl;
}
