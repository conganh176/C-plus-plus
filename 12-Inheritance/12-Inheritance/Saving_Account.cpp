//
//  Saving_Account.cpp
//  12-Inheritance
//
//  Created by Cong Anh Nguyen on 7/24/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include "Saving_Account.h"
#include <iostream>

Saving_Account::Saving_Account()
: interest_rate {3.0} {
    
}

Saving_Account::~Saving_Account() {
    
}

void Saving_Account::deposit(double amount) {
    std::cout << "Saving account deposit " << amount << std::endl;
}

void Saving_Account::withdraw(double amount) {
    std::cout << "Saving account withdraw " << amount << std::endl;
}
