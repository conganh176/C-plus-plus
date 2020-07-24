//
//  Saving_Account.h
//  12-Inheritance
//
//  Created by Cong Anh Nguyen on 7/24/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef Saving_Account_h
#define Saving_Account_h
#include "Account.h"

class Saving_Account : public Account {
public:
    double interest_rate;
    Saving_Account();
    ~Saving_Account();
    void deposit(double amount);
    void withdraw(double amount);
};

#endif /* Saving_Account_h */
