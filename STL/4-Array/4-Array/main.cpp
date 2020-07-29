//
//  main.cpp
//  4-Array
//
//  Created by Cong Anh Nguyen on 7/30/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include <array>
#include <numeric>

void display(const std::array<int, 5> &arr) {
    std::cout << "[ ";
    for (const auto &i : arr)
        std::cout << i << " ";
    std::cout << "]";
    std::cout << std::endl;
}

void test1() {
    std::cout << "----------" << std::endl;
    std::array<int, 5> arr1 {1, 2, 3, 4, 5};
    std::array<int, 5> arr2;
    
    display(arr1);
    display(arr2);
    
    arr2 = {10, 20, 30, 40, 50};
    
    display(arr1);
    display(arr2);
    
    std::cout << "Size of arr1: " << arr1.size() << std::endl;
    std::cout << "Size of arr2: " << arr2.size() << std::endl;
    
    arr1[0] = 1000;
    arr1.at(2) = 2000;
    display(arr1);
    
    std::cout << "Front of arr1: " << arr1.front() << std::endl;
    std::cout << "Back of arr2: " << arr2.back() << std::endl;
    
    std::cout << std::endl;
    
    
}

void test2() {
    std::cout << "----------" << std::endl;
    std::array<int, 5> arr1 {1, 2, 3, 4, 5};
    std::array<int, 5> arr2 {10, 20, 30, 40, 50};
    
    display(arr1);
    display(arr2);
    
    arr1.fill(0);
    
    display(arr1);
    display(arr2);
    
    arr1.swap(arr2);
    
    display(arr1);
    display(arr2);
}

void test3() {
    std::cout << "----------" << std::endl;
    std::array<int, 5> arr1 {1, 2, 3, 4, 5};
    
    int *ptr = arr1.data();
    std::cout << ptr << std::endl;
    *ptr = 10000;
    
    display(arr1);
}

void test4() {
    std::cout << "----------" << std::endl;
    std::array<int, 5> arr1 {3, 1, 5, 2, 4};
    display(arr1);
    
    std::sort(arr1.begin(), arr1.end());
    display(arr1);
}

void test5() {
    std::cout << "----------" << std::endl;
    std::array<int, 5> arr1 {3, 1, 5, 2, 4};
    
    std::array<int, 5>::iterator min_num = std::min_element(arr1.begin(),arr1.end());
    auto max_num = std::max_element(arr1.begin(), arr1.end());
    
    std::cout << "Min: " << *min_num << " Max: " << *max_num << std::endl;
}

void test6() {
    std::cout << "----------" << std::endl;
    std::array<int, 5> arr1 {1, 3, 3, 2, 4};
    
    auto adjacent = std::adjacent_find(arr1.begin(), arr1.end());
    if (adjacent != arr1.end())
        std::cout << "Adjacent found: " << *adjacent << std::endl;
    else
        std::cout << "No adjacent found" << std::endl;
}

void test7() {
    std::cout << "----------" << std::endl;
    std::array<int, 5> arr1 {1, 2, 3, 4, 5};
    
    int sum = std::accumulate(arr1.begin(), arr1.end(), 0);
    std::cout << "Sum: " << sum << std::endl;
}

void test8() {
    std::cout << "----------" << std::endl;
    std::array<int, 10> arr1 {1, 2, 3, 1, 2, 3, 1, 2, 3, 1};
    
    int count = std::count(arr1.begin(), arr1.end(), 3);
    std::cout << "Nums of 3: " << count << std::endl;
}

void test9() {
    std::cout << "----------" << std::endl;
    std::array<int, 10> arr1 {1, 2, 3, 50, 60, 70, 80, 200, 300, 400};
    
    int count = std::count_if(arr1.begin(), arr1.end(), [](int x) {return x > 10 && x < 200;});
    std::cout << "Found: " << count << " matches" << std::endl;
}

int main(int argc, const char * argv[]) {
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();
    
    return 0;
}
