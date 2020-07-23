//
//  main.cpp
//  10.2-DeepCopying
//
//  Created by Cong Anh Nguyen on 7/21/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include "Deep.h"

int main(int argc, const char * argv[]) {
    Deep obj1 {100};
    display_deep(obj1);
    
    Deep obj2 {obj1};
    obj2.set_data_value(1000);
}
