//
//  A.h
//  14.3-SmartPointers-Weak
//
//  Created by Cong Anh Nguyen on 7/28/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef A_h
#define A_h

#include <memory>
#include "B.h"

class B;

class A {
    std::shared_ptr<B> b_ptr;
public:
    void set_B(std::shared_ptr<B> &b);
    A();
    ~A();
};

#endif /* A_h */
