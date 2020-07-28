//
//  main.cpp
//  14.2-SmartPointers-Shared
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
        std::shared_ptr<int> p1 {new int{100}};
        std::cout << "Count: " << p1.use_count() << std::endl;
    
        std::shared_ptr<int> p2 { p1 };
        std::cout << "Count: " << p1.use_count() << std::endl;
    
        p1.reset();
        std::cout << "Count p1: " << p1.use_count() << std::endl;
        std::cout << "Count p2: " << p2.use_count() << std::endl;
    }
    
    std::cout << std::endl;
    
    {
        std::shared_ptr<Test> ptr = std::make_shared<Test>(100);
        
        std::cout << "Use count: " << ptr.use_count() << std::endl;
        {
            std::shared_ptr<Test> ptr1 = ptr;
            std::cout << "Use count: " << ptr.use_count() << std::endl;
            {
                std::shared_ptr<Test> ptr2 = ptr;
                std::cout << "Use count: " << ptr.use_count() << std::endl;
                ptr.reset();
            }
            std::cout << "Use count: " << ptr.use_count() << std::endl;
        }
        std::cout << "Use count: " << ptr.use_count() << std::endl;
    }
    
    std::cout << std::endl;
    
    {
        std::shared_ptr<Account> acc1 = std::make_shared<Checking>();
        std::shared_ptr<Account> acc2 = std::make_shared<Saving>();
        std::shared_ptr<Account> acc3 = std::make_shared<Trust>();
        
        std::vector<std::shared_ptr<Account>> accounts;
        accounts.push_back(acc1);
        accounts.push_back(acc2);
        accounts.push_back(acc3);
        
        for (const auto &account : accounts) {
            std::cout << *account << std::endl;
            std::cout << "Use count: " << account.use_count() << std::endl;
        }
    }
    
    return 0;
}
