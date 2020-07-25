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
public:
    virtual void withdraw(double amount) override;
    virtual void print(std::ostream &os) const override;
    virtual ~Checking();
};

#endif /* Checking_h */
