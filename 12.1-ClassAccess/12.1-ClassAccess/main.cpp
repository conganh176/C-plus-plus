//
//  main.cpp
//  12.1-ClassAccess
//
//  Created by Cong Anh Nguyen on 7/24/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include "Base.h"
#include "Derived.h"

int main(int argc, const char * argv[]) {
    Base base;
    base.a = 100;
//    base.b = 200;       //error
//    base.c = 300;       //error
    
    Derived derived;
    derived.a = 100;
//    derived.b = 200;        //error
//    derived.c = 300;        //error
    derived.access_base_members();
    
    return 0;
}
