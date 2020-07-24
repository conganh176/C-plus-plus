//
//  main.cpp
//  12.3-ArgumentsToBaseClass
//
//  Created by Cong Anh Nguyen on 7/24/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include "Base.h"
#include "Derived.h"

int main(int argc, const char * argv[]) {
    {
        Base b;
    }
    
    std::cout << std::endl;
    
    {
        Base b {100};
    }
    
    std::cout << std::endl;
    
    {
        Derived d;
    }
    
    std::cout << std::endl;
    
    {
        Derived d {100};
    }
    
    return 0;
}
