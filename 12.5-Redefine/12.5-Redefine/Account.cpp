//
//  Account.cpp
//  12.5-Redefine
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include "Account.h"

Account::Account()
: Account(0.0) {
    
}

Account::Account(double balance)
: balance(balance) {
    
}

void Account::deposit(double amount) {
    balance += amount;
}

void Account::withdraw(double amount) {
    if (balance - amount >= 0)
        balance -= amount;
    else
        std::cout << "Not enough" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Account &account) {
    os << "Balance: " << account.balance;
    return os;
}
