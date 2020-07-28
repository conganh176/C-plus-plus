//
//  main.cpp
//  Cha3-SmartPointers
//
//  Created by Cong Anh Nguyen on 7/28/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include <memory>
#include "Test.h"
#include <vector>

std::unique_ptr<std::vector<std::shared_ptr<Test>>> make();
void fill(std::vector<std::shared_ptr<Test>> &vec, int num);
void display(const std::vector<std::shared_ptr<Test>> &vec);

int main(int argc, const char * argv[]) {
    std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
    std::cout << "How many data points want to enter: ";
    int num;
    std::cin >> num;
    fill(*vec_ptr, num);
    display(*vec_ptr);
    
    return 0;
}

std::unique_ptr<std::vector<std::shared_ptr<Test>>> make() {
    return std::make_unique<std::vector<std::shared_ptr<Test>>>();
}

void fill(std::vector<std::shared_ptr<Test>> &vec, int num) {
    int temp;
    for (int i = 0; i <= num; ++i) {
        std::cout << "Enter data point: [" << i << "]: ";
        std::cin >> temp;
        std::shared_ptr<Test> ptr = std::make_shared<Test>(temp);
        vec.push_back(ptr);
    }
}

void display(const std::vector<std::shared_ptr<Test>> &vec) {
    for (const auto &ptr : vec) {
        std::cout << ptr->get_data() << std::endl;
    }
}
