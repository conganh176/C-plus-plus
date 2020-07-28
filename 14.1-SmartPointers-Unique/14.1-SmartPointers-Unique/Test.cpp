//
//  Test.cpp
//  14.1-SmartPointers-Unique
//
//  Created by Cong Anh Nguyen on 7/28/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include "Test.h"

Test::Test()
: data(0) {
    std::cout << "Test constructor (" << data << ")" << std::endl;
}

Test::Test(int data)
: data(data) {
    std::cout << "Test constructor (" << data << ")" << std::endl;
}

int Test::get_data() const {
    return data;
}

Test::~Test() {
    std::cout << "Test destructor (" << data << ")" << std::endl;
}
