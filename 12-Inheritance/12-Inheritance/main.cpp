//
//  main.cpp
//  12-Inheritance
//
//  Created by Cong Anh Nguyen on 7/24/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include "Account.h"
#include "Saving_Account.h"

int main(int argc, const char * argv[]) {
    std::cout << "Account" << std::endl;
    Account acc {};
    acc.deposit(100.0);
    acc.withdraw(500.0);
    
    std::cout << std::endl;
    Account *pacc = nullptr;
    pacc = new Account();
    pacc->deposit(2000.0);
    pacc->withdraw(1000.0);
    delete pacc;
    
    std::cout << std::endl;
    std::cout << "Saving Account" << std::endl;
    Saving_Account sacc {};
    sacc.deposit(800.0);
    sacc.withdraw(400.0);
    
    std::cout << std::endl;
    Saving_Account *psacc {nullptr};
    psacc = new Saving_Account();
    psacc->deposit(600.0);
    psacc->withdraw(200.0);
    
    return 0;
}
