//
//  main.cpp
//  9-Maps
//
//  Created by Cong Anh Nguyen on 7/30/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include <map>
#include <set>

void display(const std::map<std::string, std::set<int>> &m) {
    std::cout << "[ ";
    for (const auto &elem : m) {
        std::cout << elem.first << ": [";
        for (const auto &set_elem : elem.second)
            std::cout << set_elem << " ";
        std::cout << "] ";
    }
    std::cout << "] " << std::endl;
}

template <typename T1, typename T2>
void display(const std::map<T1, T2> &m) {
    std::cout << "[ ";
    for (const auto &elem : m) {
        std::cout << elem.first << ": " << elem.second << " ";
    }
    std::cout << "]" << std::endl;
}

void test1() {
    std::cout << "----------" << std::endl;
    std::map<std::string, int> people {
        {"Alpha", 12},
        {"Beta", 69},
        {"Charlie", 42}
    };
    
    display(people);
    
    people.insert(std::pair<std::string, int>("Omega", 420));
    display(people);
    
    people.insert(std::make_pair("Anna", 23));
    display(people);
    
    people["Alpha"] = 20;
    display(people);
    
    people["Alpha"] += 8;
    display(people);
    
    people.erase("Beta");
    display(people);
    
    std::cout << "Count for Alpha: " << people.count("Alpha") << std::endl;
    std::cout << "Count for Charlie: " << people.count("Beta") << std::endl;
    
    auto it = people.find("Charlie");
    if (it != people.end())
        std::cout << "Found " << it->first << ": " << it->second << std::endl;
    
    people.clear();
    display(people);
}

void test2() {
    std::cout << "----------" << std::endl;
    std::map<std::string, std::set<int>> grades {
        {"Alpha", {42, 69}},
        {"Beta", {24, 49}},
        {"Charlie", {66, 99}}
    };
    
    display(grades);
    
    grades["Charlie"].insert(46);
    display(grades);
    
    auto it = grades.find("Beta");
    if (it != grades.end())
        it->second.insert(1000);
    
    display(grades);
}

int main(int argc, const char * argv[]) {
    test1();
    test2();
    
    return 0;
}
