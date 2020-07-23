//
//  main.cpp
//  10.1-ShallowCopying
//
//  Created by Cong Anh Nguyen on 7/21/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include "Shallow.h"
#include <iostream>

int main(int argc, const char * argv[]) {
    Shallow obj1 {100};
    display_shallow(obj1);
    
    Shallow obj2 {obj1};
    obj2.set_data_value(1000);
    //crash
    
    return 0;
}
