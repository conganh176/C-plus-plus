//
//  Checking.cpp
//  13.1-Virtual
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include "Checking.h"

void Checking::withdraw(double amount) {
    std::cout << "Withdraw from checking" << std::endl;
}

Checking::~Checking() {
    std::cout << "Checking desctructor" << std::endl;
}
