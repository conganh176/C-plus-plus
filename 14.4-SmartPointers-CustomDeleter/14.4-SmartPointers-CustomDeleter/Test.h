//
//  Test.h
//  14.4-SmartPointers-CustomDeleter
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

void my_deleter(Test *ptr);

#endif /* Test_h */
