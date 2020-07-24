//
//  Account.h
//  12-Inheritance
//
//  Created by Cong Anh Nguyen on 7/24/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef Account_h
#define Account_h
#include <string>

class Account {
public:
    double balance;
    std::string name;
    void deposit(double amount);
    void withdraw(double amount);
    Account();
    ~Account();
};

#endif /* Account_h */
