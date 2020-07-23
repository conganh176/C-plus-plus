//
//  MyString.cpp
//  11-OperatorOverloading
//
//  Created by Cong Anh Nguyen on 7/23/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include "MyString.h"
#include <iostream>
#include <cstring>

MyString::MyString()
: str(nullptr) {
    str = new char[1];
    *str = '\0';
}

//Overloaded constructor
MyString::MyString(const char *s)
: str(nullptr) {
    if (s == nullptr) {
        str = new char[1];
        *str = '\0';
    }
    else {
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}

//Copy constructor
MyString::MyString(const MyString &source)
: str(nullptr) {
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
    std::cout << "Copy constructor used" << std::endl;
}

//Move constructor
MyString::MyString(MyString && source)
: str(source.str) {
    source.str = nullptr;
    std::cout << "Move constructor used" << std::endl;
}

MyString::~MyString() {
    if (str != nullptr) {
        std::cout << "Destructor freeing data for " << str << std::endl;
    }
    else {
        std::cout << "Destructor freeing data for nullptr" << std::endl;
    }
    delete [] str;
}

void MyString::display() const {
    std::cout << str << ": " << get_length() << std::endl;
}

int MyString::get_length() const {
    return (int) std::strlen(str);
}

const char *MyString::get_str() const {
    return str;
}

//Copy assignment
MyString &MyString::operator=(const MyString &rhs) {
    std::cout << "Copy assignment" << std::endl;
    if (this == &rhs)
        return *this;
    
    delete [] this->str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
    return *this;
}

//Move assignment
MyString &MyString::operator=(MyString &&rhs) {
    std::cout << "Move assignment" << std::endl;
    if (this == &rhs)
        return *this;
    
    delete [] this->str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}
    
//Member functions      //uncomment then comment global
//MyString MyString::operator-() const {
//    char *buff = new char[std::strlen(str) + 1];
//    std::strcpy(buff, str);
//    for (size_t i = 0; i < std::strlen(buff); i++)
//    {
//        buff[i] = std::tolower(buff[i]);
//    }
//    MyString temp {buff};
//    delete [] buff;
//    return temp;
//}
//
//MyString MyString::operator+(const MyString &rhs) const {
//    char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
//    std::strcpy(buff, str);
//    std::strcat(buff, rhs.str);
//    
//    MyString temp {buff};
//    delete [] buff;
//    return temp;
//}
//
//bool MyString::operator==(const MyString &rhs) const {
//    return (std::strcmp(str, rhs.str) == 0);
//}

//Global functions
bool operator==(const MyString &lhs, const MyString &rhs) {
    return (std::strcmp(lhs.str, rhs.str));
}

MyString operator-(const MyString &obj) {
    char *buff = new char[std::strlen(obj.str) + 1];
    std::strcpy(buff, obj.str);
    for (size_t i = 0; i < std::strlen(buff); i++)
    {
        buff[i] = std::tolower(buff[i]);
    }
    MyString temp = buff;
    delete[] buff;
    return temp;
}

MyString operator+(const MyString &lhs, const MyString &rhs) {
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    
    MyString temp = buff;
    delete[] buff;
    return temp;
}
