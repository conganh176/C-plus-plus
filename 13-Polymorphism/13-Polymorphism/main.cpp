//
//  main.cpp
//  13-Polymorphism
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include "Base.h"
#include "Derived.h"
#include "main.h"

int main(int argc, const char * argv[]) {
    Base b;
    b.say_hello();
    
    std::cout << std::endl;
    Derived d;
    d.say_hello();
    
    std::cout << std::endl;
    greeting(b);
    greeting(d);
    
    std::cout << std::endl;
    Base *ptr = new Derived();
    ptr->say_hello();
    delete ptr;
    
    return 0;
}

void greeting(const Base &obj) {
    std::cout << "Greeting: ";
    obj.say_hello();
}
