//
//  Account.h
//  13.1-Virtual
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef Account_h
#define Account_h

class Account {
public:
    virtual void withdraw(double amount);
    virtual ~Account();
};

#endif /* Account_h */
