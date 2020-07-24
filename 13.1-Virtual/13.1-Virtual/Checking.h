//
//  Checking.h
//  13.1-Virtual
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef Checking_h
#define Checking_h
#include "Account.h"

class Checking : public Account {
    virtual void withdraw(double amount);
    virtual ~Checking();
};

#endif /* Checking_h */
