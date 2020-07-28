//
//  B.cpp
//  14.3-SmartPointers-Weak
//
//  Created by Cong Anh Nguyen on 7/28/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include "B.h"

void B::set_A(std::shared_ptr<A> &a) {
    a_ptr = a;
}

B::B() {
    std::cout << "B constructor" << std::endl;
}

B::~B() {
    std::cout << "B destructor" << std::endl;
}
