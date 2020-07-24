//
//  Saving_Account.cpp
//  12.5-Redefine
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include "Saving_Account.h"

Saving_Account::Saving_Account()
: Saving_Account(0.0, 0.0) {
    
}

Saving_Account::Saving_Account(double balance, double interest_rate)
: Account(balance), interest_rate(interest_rate) {
    
}

void Saving_Account::deposit(double amount) {
    amount += (amount * interest_rate / 100);
    Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const Saving_Account &account) {
    os << "Saving balance: " << account.balance << ". Interest rate: " << account.interest_rate;
    return os;
}
