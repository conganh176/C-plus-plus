//
//  main.cpp
//  1-Generic
//
//  Created by Cong Anh Nguyen on 7/30/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

//function
template <typename T>
T min(T a, T b) {
    return (a < b) ? a : b;
}

template <typename T1, typename T2>
void func(T1 a, T2 b) {
    std::cout << a << " " << std::endl;
}

struct Person {
    std::string name;
    int age;
    bool operator<(const Person &rhs) const {
        return (this->age < rhs.age);
    }
};

std::ostream &operator<<(std::ostream &os, const Person &p) {
    os << p.name;
    return os;
}

template <typename T>
void my_swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

//class
template <typename T>
class Item {
private:
    std::string name;
    T value;
public:
    Item(std::string name, T value) : name{name}, value{value} {}
    std::string get_name() const {return name;}
    T get_value() const {return value;}
};

template <typename T1, typename T2>
struct My_Pair {
    T1 first;
    T2 second;
};

//array class
template <typename T, int N>
class Array {
    int size {N};
    T values[N];
    
    friend std::ostream &operator<<(std::ostream &os, const Array<T, N> &arr) {
        os << "[ ";
        for (const auto &val : arr.values)
            os << val << " ";
        os << "]" << std::endl;
        return os;
    }
public:
    Array() = default;
    Array(T init_val) {
        for (auto &item : values)
            item = init_val;
    }
    void fill(T val) {
        for (auto &item : values)
            item = val;
    }
    int get_size() const {
        return size;
    }
    T &operator[](int index) {
        return values[index];
    }
};

int main(int argc, const char * argv[]) {
    {
        //function template
        std::cout << min<int>(6, 9) << std::endl;
        std::cout << min(6, 9) << std::endl;
        std::cout << min('D', 'B') << std::endl;
        std::cout << min(42.6, 0.9) << std::endl;
        std::cout << min(4 + 2 * 2, 60 + 9) << std::endl;
        
        Person p1 {"Alpha", 420};
        Person p2 {"Beta", 69};
        Person p3 = min(p1, p2);
        std::cout << p3.name << " is younger" << std::endl;
        
        func<int, int>(10, 20);
        func(10, 20);
        func<char, double>('A', 42.0);
        func('A', 42.0);
        func(1000, "Testing");
        func(2000, std::string{"Alpha"});
        
        func(p1, p2);
        
        int x {100};
        int y {200};
        std::cout << x << " " << y << std::endl;
        my_swap(x, y);
        std::cout << x << " " << y << std::endl;
    }
    std::cout << std::endl;
    {
        //class template
        Item<int> item1 {"Alpha", 100};
        std::cout << item1.get_name() << std::endl;
        
        Item<std::string> item2 {"Beta", "Charlie"};
        std::cout << item2.get_name() << " " << item2.get_value() << std::endl;
        
        Item<Item<std::string>> item3 {"Omega", {"Dollar", "England"}};
        std::cout << item3.get_name() << " " << item3.get_value().get_value() << " " << item3.get_value().get_name() << std::endl;
        
        std::vector<Item<double>> vec{};
        vec.push_back(Item<double>("Oalpha", 420.0));
        vec.push_back(Item<double>("Obeta", 69.0));
        vec.push_back(Item<double>("Oomega", 420.69));
        
        for (const auto &item : vec) {
            std::cout << item.get_name() << " " << item.get_value() << std::endl;
        }
        
        My_Pair<std::string, int> p1{"Frank", 100};
        My_Pair<int, double> p2{420, 69.69};
        
        std::cout << p1.first << " " << p1.second << std::endl;
        std::cout << p2.first << " " << p2.second << std::endl;
    }
    std::cout << std::endl;
    {
        //array class template
        Array<int, 5> nums;
        std::cout << "Size of nums: " << nums.get_size() << std::endl;
        std::cout << nums << std::endl;
        
        nums.fill(0);
        std::cout << "Size of nums: " << nums.get_size() << std::endl;
        std::cout << nums << std::endl;
        
        nums.fill(10);
        std::cout << nums << std::endl;
        
        nums[0] = 1000;
        nums[3] = 2000;
        std::cout << nums << std::endl;
        
        Array<int, 100> nums2 {1};
        std::cout << "Size of nums: " << nums2.get_size() << std::endl;
        std::cout << nums2 << std::endl;
        
        Array<std::string, 10> strings{std::string{"Omega"}};
        std::cout << "Size of strings: " << strings.get_size() << std::endl;
        std::cout << strings << std::endl;
        
        strings[0] = std::string{"Alpha"};
        std::cout << strings << std::endl;
        
        strings.fill(std::string{"X"});
        std::cout << strings << std::endl;
    }
    
    return 0;
}
