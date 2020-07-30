//
//  main.cpp
//  12-PriorityQueue
//
//  Created by Cong Anh Nguyen on 7/30/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include <queue>

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
void display(std::priority_queue<T> pq) {
    std::cout << "[ ";
    while (!pq.empty()) {
        T elem = pq.top();
        pq.pop();
        std::cout << elem << " ";
    }
    std::cout << "]" << std::endl;
}

void test1() {
    std::cout << "----------" << std::endl;
    std::priority_queue<int> pq;
    for (int i : {45, 534, 34, 3, 54 ,65, 3, 0})
        pq.push(i);
    
    std::cout << "Size: " << pq.size() << std::endl;
    std::cout << "Top: " << pq.top() << std::endl;
    
    display(pq);
    
    pq.pop();
    display(pq);
}

void test2() {
    std::cout << "----------" << std::endl;
    std::priority_queue<Person> pq;
    pq.push(Person{"A", 10});
    pq.push(Person{"B", 1});
    pq.push(Person{"C", 14});
    pq.push(Person{"D", 18});
    pq.push(Person{"E", 7});
    pq.push(Person{"F", 27});
    
    display(pq);
}

int main(int argc, const char * argv[]) {
    test1();
    test2();
    
    return 0;
}
