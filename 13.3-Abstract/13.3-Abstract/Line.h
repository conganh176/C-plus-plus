//
//  Line.h
//  13.3-Abstract
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef Line_h
#define Line_h
#include "Open_Shape.h"

class Line : public Open_Shape {
public:
    virtual void draw() override;
    virtual void rotate() override;
    virtual ~Line(){};
};

#endif /* Line_h */
