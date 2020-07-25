//
//  main.cpp
//  13.3-Abstract
//
//  Created by Cong Anh Nguyen on 7/25/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include "Line.h"
#include "Circle.h"
#include "Square.h"
#include <vector>

void screen_refresh(const std::vector<Shape *> &shapes);

int main(int argc, const char * argv[]) {
//    Shape s;                      //error
//    Shape *p = new Shape();       //error
    
//    Circle c;
//    c.draw();
    
    Shape *s1 = new Circle();
    s1->draw();
    s1->rotate();
    
    std::cout << std::endl;
    Shape *s2 = new Square();
    s2->draw();
    s2->rotate();
    
    std::cout << std::endl;
    Shape *s3 = new Line();
    s3->draw();
    s3->rotate();
    
    std::cout << std::endl;
    std::vector<Shape *> shapes {s1, s2, s3};
    
//    for (const auto p : shapes)
//        p->draw();
    
    screen_refresh(shapes);
    
    delete s1;
    delete s2;
    delete s3;
    
    return 0;
}

void screen_refresh(const std::vector<Shape *> &shapes) {
    std::cout << "Refreshing" << std::endl;
    for (const auto p : shapes)
        p->draw();
}
