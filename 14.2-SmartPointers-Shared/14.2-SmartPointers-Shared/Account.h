//
//  Account.h
//  13.1-Virtual
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef Account_h
#define Account_h
#include "I_Printable.h"

class Account : public I_Printable {
public:
    virtual void withdraw(double amount);
    virtual void print(std::ostream &os) const override;
    virtual ~Account();
};

#endif /* Account_h */
