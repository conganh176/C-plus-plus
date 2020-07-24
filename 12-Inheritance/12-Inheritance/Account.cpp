//
//  Account.cpp
//  12-Inheritance
//
//  Created by Cong Anh Nguyen on 7/24/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include "Account.h"
#include <iostream>

void Account::deposit(double amount) {
    std::cout << "Account deposit " << amount << std::endl;
}

void Account::withdraw(double amount) {
    std::cout << "Account withdraw " << amount << std::endl;
}

Account::Account()
: balance {0.0}, name {"Account"} {
    
}

Account::~Account() {
    
}
