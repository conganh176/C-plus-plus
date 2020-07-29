//
//  main.cpp
//  3-Algorithms
//
//  Created by Cong Anh Nguyen on 7/30/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <cctype>

class Person {
    std::string name;
    int age;
public:
    Person() = default;
    Person(std::string name, int age) : name{name}, age{age} {}
    bool operator<(const Person &rhs) const {return this->age < rhs.age;}
    bool operator==(const Person &rhs) const {return this->age == rhs.age && this->name == rhs.name;}
};

void find_test() {
    std::vector<int> vec {1, 2, 3, 4, 5};
    auto loc = std::find(std::begin(vec), std::end(vec), 3);
    
    if (loc != std::end(vec))
        std::cout << "Found number " << *loc << std::endl;
    else
        std::cout << "Number not found" << std::endl;
}

void find_test2() {
    std::list<Person> players {
        {"Alpha", 69},
        {"Beta", 40},
        {"Charlie", 25}
    };
    
    auto loc = std::find(players.begin(), players.end(), Person{"Beta", 40});
    
    if (loc != players.end())
        std::cout << "Found player" << std::endl;
    else
        std::cout << "Player not found" << std::endl;
}

void count_test() {
    std::vector<int> vec {1, 2, 3, 4, 5, 2, 1, 2, 1, 1};
    
    int num = std::count(vec.begin(), vec.end(), 1);
    std::cout << "nums of 1: " << num << std::endl;
}

void count_if_test() {
    std::vector<int> vec {1, 2, 3, 4, 5, 2, 1, 2, 1, 1};
    int even_nums = std::count_if(vec.begin(), vec.end(), [](int x) {return x % 2 == 0;});
    int odd_nums = std::count_if(vec.begin(), vec.end(), [](int x) {return x % 2 != 0;});
    
    std::cout << "even numbesrs: " << even_nums << std::endl;
    std::cout << "odd numbesrs: " << even_nums << std::endl;
    
    int nums = std::count_if(vec.begin(), vec.end(), [](int x) {return x >= 3;});
    std::cout << "nums >= 3: " << nums << std::endl;
}

void replace_test() {
    std::vector<int> vec {1, 2, 3, 4, 5, 2, 1, 2, 1, 1};
    for (auto i : vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    std::replace(vec.begin(), vec.end(), 1, 69);
    for (auto i : vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

void all_of_test() {
    std::vector<int> vec {1, 2, 3, 4, 5, 2, 1, 2, 1, 1};
    if (std::all_of(vec.begin(), vec.end(), [](int x) {return x > 3;}))
        std::cout << "All elements that > 3" << std::endl;
    else
        std::cout << "Not all elements that > 3" << std::endl;
    
    if (std::all_of(vec.begin(), vec.end(), [](int x) {return x < 20;}))
        std::cout << "All elements that < 20" << std::endl;
    else
        std::cout << "Not all elements that < 20" << std::endl;
}

void string_transform_test() {
    std::string str1 = "This is a test";
    std::cout << "Before: " << str1 << std::endl;
    std::transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    std::cout << "After: " << str1 << std::endl;
}

int main(int argc, const char * argv[]) {
    find_test();
    find_test2();
    count_test();
    count_if_test();
    replace_test();
    all_of_test();
    string_transform_test();
    
    return 0;
}
