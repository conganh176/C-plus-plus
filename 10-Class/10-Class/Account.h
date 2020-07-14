//
//  Account.h
//  10-Class
//
//  Created by Cong Anh Nguyen on 7/15/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

//#ifndef Account_h
//#define Account_h

#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

class Account {
private:
    std::string name;
    double balance;
    
public:
    void set_balance(double bal);
    double get_balance();
    
    void set_name(std::string name);
    std::string get_name();
    
    bool deposit(double bal);
    bool withdraw(double bal);
};

#endif /* Account_h */
