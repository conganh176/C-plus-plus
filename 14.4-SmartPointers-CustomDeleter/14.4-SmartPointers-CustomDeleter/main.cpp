//
//  main.cpp
//  14.4-SmartPointers-CustomDeleter
//
//  Created by Cong Anh Nguyen on 7/28/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include <memory>
#include "Test.h"

int main(int argc, const char * argv[]) {
    {
        std::shared_ptr<Test> ptr1 {new Test{100}, my_deleter};
    }
    
    {
        //lambda
        std::shared_ptr<Test> ptr2 (new Test{1000}, [] (Test* ptr) {
            std::cout << "Using lambda deleter" << std::endl;
            delete ptr;
        });
    }
    
    return 0;
}
