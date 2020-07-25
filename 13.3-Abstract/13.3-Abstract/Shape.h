//
//  Shape.h
//  13.3-Abstract
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef Shape_h
#define Shape_h

class Shape {       //Abstract
private:
public:
    virtual void draw() = 0;
    virtual void rotate() = 0;
    virtual ~Shape() {};
};

#endif /* Shape_h */
