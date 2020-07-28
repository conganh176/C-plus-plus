//
//  Test.h
//  14.1-SmartPointers-Unique
//
//  Created by Cong Anh Nguyen on 7/28/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef Test_h
#define Test_h

class Test {
private:
    int data;
public:
    Test();
    Test(int data);
    int get_data() const;
    ~Test();
};

#endif /* Test_h */
