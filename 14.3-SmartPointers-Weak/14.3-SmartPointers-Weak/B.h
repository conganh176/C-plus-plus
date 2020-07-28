//
//  B.h
//  14.3-SmartPointers-Weak
//
//  Created by Cong Anh Nguyen on 7/28/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef B_h
#define B_h

#include <memory>
#include "A.h"

class A;

class B {
    std::weak_ptr<A> a_ptr;
public:
    void set_A(std::shared_ptr<A> &a);
    B();
    ~B();
};

#endif /* B_h */
