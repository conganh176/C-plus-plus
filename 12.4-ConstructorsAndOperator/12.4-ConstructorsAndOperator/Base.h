//
//  Base.h
//  12.4-ConstructorsAndOperator
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef Base_h
#define Base_h

class Base {
private:
    int value;
public:
    Base();
    Base(int x);
    Base(const Base &other);
    Base &operator=(const Base &rhs);
    ~Base();
};

#endif /* Base_h */
