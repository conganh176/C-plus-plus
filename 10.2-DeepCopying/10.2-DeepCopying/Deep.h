//
//  Deep.h
//  10.2-DeepCopying
//
//  Created by Cong Anh Nguyen on 7/21/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef _DEEP_H_
#define _DEEP_H_

class Deep {
private:
    int *data;
public:
    void set_data_value(int d);
    int get_data_value();
    Deep(int d);
    Deep(const Deep &source);
    ~Deep();
};

void display_deep(Deep s);

#endif /* Deep_h */
