//
//  MyString.h
//  Cha2-OperatorOverloading
//
//  Created by Cong Anh Nguyen on 7/23/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef _MYSTRING_H
#define _MYSTRING_H
#include <iostream>

class MyString {
    friend std::ostream &operator<<(std::ostream &os, const MyString &rhs);
    friend std::istream &operator>>(std::istream &in, MyString &rhs);
private:
    char *str;
public:
    MyString();
    MyString(const char *s);
    MyString(const MyString &source);
    MyString(MyString &&source);
    ~MyString();
    
    MyString &operator=(const MyString &rhs);
    MyString &operator=(MyString &&rhs);
    
    void display() const;
    int get_length() const;
    const char* get_str() const;
    
    //Overloaded member
    /*MyString operator-() const;                         //lowercase
    MyString operator+(const MyString &rhs) const;      //concat
    bool operator==(const MyString &rhs) const;         //equal
    bool operator!=(const MyString &rhs) const;         //not equal
    bool operator<(const MyString &rhs) const;          //less than
    bool operator>(const MyString &rhs) const;          //greater than
    MyString &operator+=(const MyString &rhs);          //s1 += s2
    MyString operator*(int n) const;                    //s1 = s2 ^ n
    MyString &operator*=(int n);                        //s1 *= s2
    MyString &operator++();                             //++s1
    MyString operator++(int);                           //s1++
    */
    
    //Overloaded friend
    friend MyString operator-(const MyString &obj);                           //lowercase
    friend MyString operator+(const MyString &lhs, const MyString &rhs);      //concat
    friend bool operator==(const MyString &lhs, const MyString &rhs);         //equal
    friend bool operator!=(const MyString &lhs, const MyString &rhs);         //not equal
    friend bool operator<(const MyString &lhs, const MyString &rhs);          //less than
    friend bool operator>(const MyString &lhs, const MyString &rhs);          //greater than
    friend MyString &operator+=(MyString &lhs, const MyString &rhs);          //s1 += s2
    friend MyString operator*(const MyString &obj, int n);                    //s1 = s2 ^ n
    friend MyString &operator*=(MyString &obj, int n);                        //s1 *= s2
    friend MyString &operator++(MyString &obj);                               //++s1
    friend MyString operator++(MyString &obj, int);                           //s1++
};

#endif /* MyString_h */
