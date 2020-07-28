//
//  Test.cpp
//  14.4-SmartPointers-CustomDeleter
//
//  Created by Cong Anh Nguyen on 7/28/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include "Test.h"
#include <iostream>

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

void my_deleter(Test *ptr) {
    std::cout << "Custom deleter" << std::endl;
    delete ptr;
}
