//
//  Derived.h
//  13-Polymorphism
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef Derived_h
#define Derived_h
#include "Base.h"

class Derived : public Base {
public:
    void say_hello() const;
};

#endif /* Derived_h */
