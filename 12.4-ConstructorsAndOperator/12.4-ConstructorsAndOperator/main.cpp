//
//  main.cpp
//  12.4-ConstructorsAndOperator
//
//  Created by Cong Anh Nguyen on 7/24/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include "Base.h"
#include "Derived.h"

int main(int argc, const char * argv[]) {
    {
//        Base b {100};
//        Base b1 {b};
//        b = b1;
    }
    std::cout << std::endl;
    {
        Derived d {100};
        Derived d1 {d};
        d = d1;
    }
    
    return 0;
}
