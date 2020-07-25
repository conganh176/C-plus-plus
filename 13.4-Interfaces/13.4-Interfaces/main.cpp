//
//  main.cpp
//  13.4-Interfaces
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include "Account.h"
#include "Checking.h"
#include "Saving.h"
#include "Trust.h"

int main(int argc, const char * argv[]) {
//    Account a;
//    std::cout << a << std::endl;
//
//    Checking c;
//    std::cout << c << std::endl;
//
//    Saving s;
//    std::cout << s << std::endl;
//
//    Trust t;
//    std::cout << t << std::endl;
    
    Account *a1 = new Account();
    std::cout << *a1 << std::endl;
    
    Account *a2 = new Checking();
    std::cout << *a2 << std::endl;
    
    return 0;
}
