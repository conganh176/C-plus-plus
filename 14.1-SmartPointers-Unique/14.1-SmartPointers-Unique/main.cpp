//
//  main.cpp
//  14.1-SmartPointers-Unique
//
//  Created by Cong Anh Nguyen on 7/28/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include <memory>
#include <vector>

#include "Account.h"
#include "Checking.h"
#include "Saving.h"
#include "Trust.h"
#include "Test.h"

int main(int argc, const char * argv[]) {
    {
    //raw pointer
    Test *t1 = new Test {1000};
    delete t1;
    
    //unique pointer
    std::unique_ptr<Test> t2 {new Test{100}};
    std::unique_ptr<Test> t3 = std::make_unique<Test>(1000);
    
    std::unique_ptr<Test> t4;
    t4 = std::move(t2);
    
    if (!t2)
        std::cout << "t2 is nullptr" << std::endl;
    }
    
    std::unique_ptr<Account> a1 = std::make_unique<Checking>();
    std::cout << *a1 << std::endl;
    a1->withdraw(1000);
    
    std::vector<std::unique_ptr<Account>> accounts;
    accounts.push_back(std::make_unique<Checking>());
    accounts.push_back(std::make_unique<Saving>());
    accounts.push_back(std::make_unique<Trust>());
    
    for (const auto &acc : accounts)
        std::cout << *acc << std::endl;
    
    return 0;
}
