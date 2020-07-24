//
//  Saving_Account.h
//  12.5-Redefine
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef Saving_Account_h
#define Saving_Account_h
#include "Account.h"

class Saving_Account : public Account {
    friend std::ostream &operator<<(std::ostream &os, const Saving_Account &account);
protected:
    double interest_rate;
public:
    Saving_Account();
    Saving_Account(double balance, double interest_rate);
    void deposit(double amount);
};

#endif /* Saving_Account_h */
