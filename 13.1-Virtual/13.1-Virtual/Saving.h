//
//  Saving.h
//  13.1-Virtual
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef Saving_h
#define Saving_h
#include "Account.h"

class Saving : public Account {
    virtual void withdraw(double amount);
    virtual ~Saving();
};

#endif /* Saving_h */
