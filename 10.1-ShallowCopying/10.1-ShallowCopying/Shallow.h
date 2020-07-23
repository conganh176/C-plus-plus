//
//  Shallow.h
//  10.1-ShallowCopying
//
//  Created by Cong Anh Nguyen on 7/21/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef _SHALLOW_H_
#define _SHALLOW_H_

class Shallow {
private:
    int *data;
public:
    void set_data_value(int d);
    int get_data_value();
    Shallow(int d);
    Shallow(const Shallow &source);
    ~Shallow();
};

void display_shallow(Shallow s);

#endif /* Shallow_h */
