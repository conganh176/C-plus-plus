//
//  main.cpp
//  12.5-Redefine
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include "Account.h"
#include "Saving_Account.h"

int main(int argc, const char * argv[]) {
    std::cout << "Account" << std::endl;
    Account a1 {1000.0};
    std::cout << a1 << std::endl;
    
    a1.deposit(500.0);
    std::cout << a1 << std::endl;
    
    a1.withdraw(1000.0);
    std::cout << a1 << std::endl;
    
    a1.withdraw(2000.0);
    std::cout << a1 << std::endl;
    
    std::cout << std::endl;
    std::cout << "Saving account" << std::endl;
    Saving_Account s1 {1000.0, 5.0};
    std::cout << s1 << std::endl;
    
    s1.deposit(500.0);
    std::cout << s1 << std::endl;
    
    s1.withdraw(1000.0);
    std::cout << s1 << std::endl;
    
    s1.withdraw(1000.0);
    std::cout << s1 << std::endl;
    
    return 0;
}
