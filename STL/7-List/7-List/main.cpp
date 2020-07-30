//
//  main.cpp
//  7-List
//
//  Created by Cong Anh Nguyen on 7/30/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

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
void display(const std::list<T> &l) {
    std::cout << "[ ";
    for (const auto &elem : l) {
        std::cout << elem << " ";
    }
    std::cout << "]" << std::endl;
}

void test1() {
    std::cout << "----------" << std::endl;
    std::list<int> l1 {1, 2, 3, 4, 5};
    display(l1);
    
    std::list<std::string> l2;
    l2.push_back("Back");
    l2.push_front("Front");
    display(l2);
    
    std::list<int> l3;
    l3 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(l3);
    
    std::list<int> l4 (10, 100);
    display(l4);
}

void test2() {
    std::cout << "----------" << std::endl;
    std::list<int> l {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(l);
    
    std::cout << "Size: " << l.size() << std::endl;
    std::cout << "Front: " << l.front() << std::endl;
    std::cout << "Back: " << l.back() << std::endl;
    
    l.clear();
    display(l);
    std::cout << "Size: " << l.size() << std::endl;
}

void test3() {
    std::cout << "----------" << std::endl;
    std::list<int> l {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(l);
    
    l.resize(5);
    display(l);
    
    l.resize(10);
    display(l);
    
    std::list<Person> people;
    people.resize(5);
    display(people);
}

void test4() {
    std::cout << "----------" << std::endl;
    std::list<int> l {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(l);
    auto it = std::find(l.begin(), l.end(), 5);
    if (it != l.end())
        l.insert(it, 1000);
    
    display(l);
    
    std::list<int> l2 {100, 200, 300};
    l.insert(it, l2.begin(), l2.end());
    display(l);
    
    std::advance(it, -4);
    std::cout << *it << std::endl;
    
    l.erase(it);
    display(l);
}

void test5() {
    std::cout << "----------" << std::endl;
    std::list<Person> people {
        {"Alpha", 12},
        {"Beta", 69},
        {"Charlie", 42}
    };
    
    display(people);

    std::string name;
    int age {};
    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "Enter age: ";
    std::cin >> age;
    
    people.emplace_back(name, age);
    display(people);
    
    auto it = std::find(people.begin(), people.end(), Person{"Beta", 69});
    if (it != people.end())
        people.emplace(it, "Omega", 18);
    display(people);
}

void test6() {
    std::cout << "----------" << std::endl;
    std::list<Person> people {
        {"Alpha", 12},
        {"Beta", 69},
        {"Charlie", 42}
    };
    
    display(people);
    people.sort();
    display(people);
}

int main(int argc, const char * argv[]) {
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    
    return 0;
}
