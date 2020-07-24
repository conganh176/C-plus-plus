//
//  Derived.h
//  12.4-ConstructorsAndOperator
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef Derived_h
#define Derived_h
#include "Base.h"

class Derived : public Base {
private:
    int doubled_value;
public:
    Derived();
    Derived(int x);
    Derived(const Derived &other);
    Derived &operator=(const Derived &rhs);
    ~Derived();
};

#endif /* Derived_h */
