//
//  Derived.h
//  12.2-ConstructorDestructor
//
//  Created by Cong Anh Nguyen on 7/24/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef Derived_h
#define Derived_h
#include "Base.h"

class Derived : public Base {
//    using Base::Base;       //base value
private:
    int doubled_value;
public:
    Derived();
    Derived(int x);
    ~Derived();
};

#endif /* Derived_h */
