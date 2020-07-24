//
//  Derived.h
//  12.1-ClassAccess
//
//  Created by Cong Anh Nguyen on 7/24/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef Derived_h
#define Derived_h
#include "Base.h"

class Derived : public Base {
public:
    void access_base_members();
};

#endif /* Derived_h */
