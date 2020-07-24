//
//  Account.h
//  12.5-Redefine
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef Account_h
#define Account_h

class Account {
    friend std::ostream &operator<<(std::ostream &os, const Account &account);
protected:
    double balance;
public:
    Account();
    Account(double balance);
    void deposit(double amount);
    void withdraw(double amount);
};

#endif /* Account_h */
