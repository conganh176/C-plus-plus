//
//  main.cpp
//  15.2-ClassLevelException
//
//  Created by Cong Anh Nguyen on 7/28/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include "Account.h"
#include "IllegalBalanceException.h"

int main(int argc, const char * argv[]) {
    try {
        std::unique_ptr<Account> account = std::make_unique<Account>("John", -1000.0);
        std::cout << *account << std::endl;
    } catch(const IllegalBalanceException &ex) {
        std::cerr << "Cannot create account - negative balance" << std::endl;
    }
    
    return 0;
}
