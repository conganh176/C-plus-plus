//
//  main.cpp
//  10-Stack
//
//  Created by Cong Anh Nguyen on 7/30/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include <stack>
#include <vector>
#include <list>

template <typename T>
void display(std::stack<T> s) {
    std::cout << "[ ";
    while (!s.empty())
    {
        T elem = s.top();
        s.pop();
        std::cout << elem << " ";
    }
    std::cout << "]" << std::endl;
}

int main(int argc, const char * argv[]) {
    std::stack<int> s;
    std::stack<int, std::vector<int>> s1;
    std::stack<int, std::list<int>> s2;
    std::stack<int, std::deque<int>> s3;
    
    for (int i : {1, 2, 3, 4, 5})
        s.push(i);
    display(s);
    
    s.push(100);
    display(s);
    
    s.pop();
    s.pop();
    display(s);
    
    while(!s.empty())
        s.pop();
    display(s);
    
    std::cout << "Size: " << s.size() << std::endl;
    
    s.push(10);
    display(s);
    
    s.top() = 100;
    display(s);
    
    return 0;
}
