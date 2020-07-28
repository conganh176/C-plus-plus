//
//  Saving.cpp
//  13.1-Virtual
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include "Saving.h"

void Saving::withdraw(double amount) {
    std::cout << "Withdraw from saving" << std::endl;
}

void Saving::print(std::ostream &os) const {
    os << "Saving display";
}

Saving::~Saving() {}
