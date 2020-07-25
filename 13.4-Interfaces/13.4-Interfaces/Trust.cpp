//
//  Trust.cpp
//  13.1-Virtual
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include "Trust.h"

void Trust::withdraw(double amount) {
    std::cout << "Withdraw from trust" << std::endl;
}

void Trust::print(std::ostream &os) const {
    os << "Trust display";
}

Trust::~Trust() {}
