//
//  Square.h
//  13.3-Abstract
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef Square_h
#define Square_h
#include "Closed_Shape.h"

class Square : public Closed_Shape {
public:
    virtual void draw() override;
    virtual void rotate() override;
    virtual ~Square() {};
};

#endif /* Square_h */
