//
//  main.cpp
//  8-Sets
//
//  Created by Cong Anh Nguyen on 7/30/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include <set>

class Person {
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
    std::string name;
    int age;
public:
    Person() : name{"Unknown"}, age{0} {};
    Person(std::string name, int age) : name{name}, age{age} {}
    bool operator<(const Person &rhs) const {return this->age < rhs.age;}
    bool operator==(const Person &rhs) const {return this->age == rhs.age && this->name == rhs.name;}
};

std::ostream &operator<<(std::ostream &os, const Person &p) {
    os << p.name << ": " << p.age;
    return os;
}

template <typename T>
void display(const std::set<T> &l) {
    std::cout << "[ ";
    for (const auto &elem : l) {
        std::cout << elem << " ";
    }
    std::cout << "]" << std::endl;
}

void test1() {
    std::cout << "----------" << std::endl;
    std::set<int> s1 {1, 3, 4, 5, 2};
    display(s1);
    
    s1 = {1, 2, 3, 2, 4, 2, 6, 3, 1, 1, 5, 3};
    display(s1);
    
    s1.insert(0);
    s1.insert(10);
    
    display(s1);
    
    if (s1.count(10))
        std::cout << "10 is in the set" << std::endl;
    else
        std::cout << "10 is not in the set" << std::endl;
    
    auto it = s1.find(5);
    if (it != s1.end()) std::cout << "Found " << *it << std::endl;
    
    s1.clear();
    display(s1);
}

void test2() {
    std::cout << "----------" << std::endl;
    std::set<Person> people {
        {"Alpha", 12},
        {"Beta", 69},
        {"Charlie", 42}
    };
    display(people);
    
    people.emplace("Omega", 50);
    display(people);
    
    people.emplace("Zebra", 50);
    display(people);
    
    auto it = people.find(Person{"Beta", 69});
    if (it != people.end())
        people.erase(it);
    
    display(people);
    
    it = people.find(Person{"XXXXXXXX", 12});
    if (it != people.end())
    people.erase(it);
    
    display(people);
}

void test3() {
    std::cout << "----------" << std::endl;
    std::set<std::string> s {"A", "B", "C"};
    display(s);
    
    auto result = s.insert("D");
    display(s);
    
    std::cout << std::boolalpha;
    std::cout << "First: " << *(result.first) << std::endl;
    std::cout << "Second: " << result.second << std::endl;
    
    result = s.insert("A");
    display(s);
    
    std::cout << std::boolalpha;
    std::cout << "First: " << *(result.first) << std::endl;
    std::cout << "Second: " << result.second << std::endl;
}

int main(int argc, const char * argv[]) {
    test1();
    test2();
    test3();
    
    return 0;
}
