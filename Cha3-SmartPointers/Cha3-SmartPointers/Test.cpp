//
//  Test.cpp
//  Cha3-SmartPointers
//
//  Created by Cong Anh Nguyen on 7/28/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include "Test.h"

Test::Test()
: data(0) {
    std::cout << "Constructor (" << data << ")" << std::endl;
}

Test::Test(int data)
: data(data) {
    std::cout << "Constructor (" << this->data << ")" << std::endl;
}

int Test::get_data() const {
    return data;
}

Test::~Test() {
    std::cout << "Destructor (" << this->data << ")" << std::endl;
}
