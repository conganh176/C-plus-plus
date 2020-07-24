//
//  Derived.cpp
//  12.1-ClassAccess
//
//  Created by Cong Anh Nguyen on 7/24/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include "Derived.h"

void Derived::access_base_members() {
    a = 200;
    b = 300;
//    c = 400;        //error
}
