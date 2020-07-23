//
//  MyString.cpp
//  Cha2-OperatorOverloading
//
//  Created by Cong Anh Nguyen on 7/23/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include "MyString.h"
#include <iostream>

MyString::MyString()
: str{nullptr} {
    str = new char[1];
    *str = '\0';
}

MyString::MyString(const char *s)
: str{nullptr} {
    if (s == nullptr) {
        str = new char[1];
        *str = '\0';
    }
    else {
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}

MyString::MyString(const MyString &source)
: str(nullptr) {
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

MyString::MyString(MyString &&source)
: str(source.str) {
    source.str = nullptr;
}

MyString::~MyString() {
    delete[] str;
}

MyString &MyString::operator=(const MyString &rhs) {
    if (this == &rhs) {
        return *this;
    }
    delete[] str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);
    return *this;
}

MyString &MyString::operator=(MyString &&rhs) {
    if (this == &rhs) {
        return *this;
    }
    delete[] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
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

std::ostream &operator<<(std::ostream &os, const MyString &rhs) {
    os << rhs.str;
    return os;
}

std::istream &operator>>(std::istream &in, MyString &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = MyString{buff};
    delete[] buff;
    return in;
}

//Overloaded member
/*MyString MyString::operator-() const {
    char* buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str);
    for (size_t i = 0; i < std::strlen(buff); i++)
    {
        buff[i] = std::tolower(buff[i]);
    }
    MyString temp = buff;
    delete[] buff;
    return temp;
}

MyString MyString::operator+(const MyString &rhs) const {
    char* buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    MyString temp = buff;
    delete[] buff;
    return temp;
}

bool MyString::operator==(const MyString &rhs) const {
    return (std::strcmp(str, rhs.str) == 0);
}

bool MyString::operator!=(const MyString &rhs) const {
    return !(std::strcmp(str, rhs.str) == 0);
}

bool MyString::operator<(const MyString &rhs) const {
    return (std::strcmp(str, rhs.str) < 0);
}

bool MyString::operator>(const MyString &rhs) const {
    return (std::strcmp(str, rhs.str) > 0);
}

MyString &MyString::operator+=(const MyString &rhs) {
    *this = *this + rhs;
    return *this;
}

MyString MyString::operator*(int n) const {
    MyString temp;
    for (int i = 1; i <= n; i++)
    {
        temp += *this;
    }
    return temp;
}

MyString &MyString::operator*=(int n) {
    *this = *this * n;
    return *this;
}

MyString &MyString::operator++() {
    for (size_t i = 0; i < std::strlen(str); i++)
    {
        str[i] = std::toupper(str[i]);
    }
    return *this;
}

MyString MyString::operator++(int) {
    MyString temp {*this};
    operator++();
    return temp;
}
*/

//Overloaded friend
MyString operator-(const MyString &obj) {
    char* buff = new char[std::strlen(obj.str) + 1];
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
    char* buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    MyString temp = buff;
    delete[] buff;
    return temp;
}

bool operator==(const MyString &lhs, const MyString &rhs) {
    return (std::strcmp(lhs.str, rhs.str) == 0);
}

bool operator!=(const MyString &lhs, const MyString &rhs) {
    return !(std::strcmp(lhs.str, rhs.str) == 0);
}

bool operator<(const MyString &lhs, const MyString &rhs) {
    return (std::strcmp(lhs.str, rhs.str) < 0);
}

bool operator>(const MyString &lhs, const MyString &rhs) {
    return (std::strcmp(lhs.str, rhs.str) > 0);
}

MyString &operator+=(MyString &lhs, const MyString &rhs) {
    lhs = lhs + rhs;
    return lhs;
}

MyString operator*(const MyString &obj, int n) {
    MyString temp;
    for (int i = 1; i <= n; i++)
    {
        temp += obj;
    }
    return temp;
}

MyString &operator*=(MyString &obj, int n) {
    obj = obj * n;
    return obj;
}

MyString &operator++(MyString &obj) {
    for (size_t i = 0; i < std::strlen(obj.str); i++)
    {
        obj.str[i] = std::toupper(obj.str[i]);
    }
    return obj;
}

MyString operator++(MyString &obj, int) {
    MyString temp {obj};
    ++obj;
    return temp;
}
