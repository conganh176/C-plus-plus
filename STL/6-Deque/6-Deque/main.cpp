//
//  main.cpp
//  6-Deque
//
//  Created by Cong Anh Nguyen on 7/30/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

template <typename T>
void display(const std::deque<T> &d) {
    std::cout << "[ ";
    for (const auto &elem : d) {
        std::cout << elem << " ";
    }
    std::cout << "]" << std::endl;
}

void test1() {
    std::cout << "----------" << std::endl;
    std::deque<int> d {1, 2, 3, 4, 5};
    display(d);
    
    std::deque<int> d1 (10, 100);
    display(d);
    
    d[0] = 100;
    d.at(1) = 200;
    display(d);
}

void test2() {
    std::cout << "----------" << std::endl;
    std::deque<int> d {0, 0, 0};
    display(d);
    
    d.push_back(10);
    d.push_back(20);
    display(d);
    
    std::cout << "Front: " << d.front() << std::endl;
    std::cout << "Back: " << d.back() << std::endl;
    std::cout << "Size: " << d.size() << std::endl;
    
    d.pop_back();
    d.pop_front();
    display(d);
}

void test3() {
    std::cout << "----------" << std::endl;
    std::vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::deque<int> d;
    
    for (const auto &elem : vec) {
        if (elem % 2 == 0)
            d.push_back(elem);
        else
            d.push_front(elem);
    }
    
    display(d);
}

void test4() {
    std::cout << "----------" << std::endl;
    std::vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::deque<int> d;
    
    for (const auto &elem : vec) {
        d.push_front(elem);
    }
    
    display(d);
    d.clear();
    
    for (const auto &elem : vec) {
        d.push_back(elem);
    }
    
    display(d);
}

void test5() {
    std::cout << "----------" << std::endl;
    std::vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::deque<int> d;
    
    std::copy(vec.begin(), vec.end(), std::front_inserter(d));
    display(d);
    
    d.clear();
    std::copy(vec.begin(), vec.end(), std::back_inserter(d));
    display(d);
}

int main(int argc, const char * argv[]) {
    test1();
    test2();
    test3();
    test4();
    test5();
    
    return 0;
}
