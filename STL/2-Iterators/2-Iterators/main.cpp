//
//  main.cpp
//  2-Iterators
//
//  Created by Cong Anh Nguyen on 7/30/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

void display(const std::vector<int> &vec) {
    std::cout << "[ ";
    for (const auto &i : vec)
        std::cout << i << " ";
    std::cout << "]";
}

void test1() {
    std::cout << "-------------------" << std::endl;
    std::vector<int> nums1 {1, 2, 3, 4, 5};
    auto it = nums1.begin();
    std::cout << *it << std::endl;
    
    it++;
    std::cout << *it << std::endl;
    
    it += 2;
    std::cout << *it << std::endl;
    
    it -= 2;
    std::cout << *it << std::endl;
    
    it = nums1.end() - 1;
    std::cout << *it << std::endl;
}

void test2() {
    std::cout << "-------------------" << std::endl;
    std::vector<int> nums1 {1, 2, 3, 4, 5};
    std::vector<int>::iterator it = nums1.begin();
    
    while (it != nums1.end()) {
        std::cout << *it << std::endl;
        it++;
    }
    
    it = nums1.begin();
    while (it != nums1.end()) {
        *it = 0;
        it++;
    }
    
    display(nums1);
    std::cout << std::endl;
}

void test3() {
    std::cout << "-------------------" << std::endl;
    std::vector<int> nums1 {1, 2, 3, 4, 5};
    //auto it1 = nums.cbegin();
    std::vector<int>::const_iterator it1 = nums1.begin();
    
    while (it1 != nums1.end()) {
        std::cout << *it1 << std::endl;
        it1++;
    }
}

void test4() {
    std::cout << "-------------------" << std::endl;
    std::vector<int> vec {1, 2, 3, 4};
    auto it1 = vec.crbegin();
    while (it1 != vec.rend()) {
        std::cout << *it1 << std::endl;
        it1++;
    }
}

void test5() {
    std::cout << "-------------------" << std::endl;
    std::vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto start = vec.begin() + 2;
    auto finish = vec.end() - 3;
    
    while (start != finish) {
        std::cout << *start << std::endl;
        start++;
    }
}

int main(int argc, const char * argv[]) {
    test1();
    test2();
    test3();
    test4();
    test5();
    
    return 0;
}
