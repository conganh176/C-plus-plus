//
//  main.cpp
//  13.1-Virtual
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include "Account.h"
#include "Checking.h"
#include "Saving.h"
#include "Trust.h"

int main(int argc, const char * argv[]) {
    Account *p1 = new Account();
    Account *p2 = new Checking();
    Account *p3 = new Saving();
    Account *p4 = new Trust();
    
    p1->withdraw(100.0);
    p2->withdraw(100.0);
    p3->withdraw(100.0);
    p4->withdraw(100.0);
    
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    
    return 0;
}
