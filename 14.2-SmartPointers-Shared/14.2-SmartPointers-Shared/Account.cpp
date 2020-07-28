//
//  Account.cpp
//  13.1-Virtual
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include "Account.h"

void Account::withdraw(double amount) {
    std::cout << "Withdraw from account" << std::endl;
}

void Account::print(std::ostream &os) const {
    os << "Account display";
}

Account::~Account() {}
