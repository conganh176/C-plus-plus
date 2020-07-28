//
//  main.cpp
//  14.3-SmartPointers-Weak
//
//  Created by Cong Anh Nguyen on 7/28/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include <memory>

#include "A.h"
#include "B.h"

int main(int argc, const char * argv[]) {
    std::shared_ptr<A> a = std::make_shared<A>();
    std::shared_ptr<B> b = std::make_shared<B>();
    
    a->set_B(b);
    b->set_A(a);
    
    return 0;
}
