//
//  main.cpp
//  13.2-Override
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include "Base.h"
#include "Derived.h"

int main(int argc, const char * argv[]) {
    Base *p1 = new Base();
    p1->say_hello();
    
    Derived *p2 = new Derived();
    p2->say_hello();
    
    Base *p3 = new Derived();
    p3->say_hello();
    
    return 0;
}
