//
//  MyString.h
//  11-OperatorOverloading
//
//  Created by Cong Anh Nguyen on 7/23/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class MyString {
    //Global functions
    friend bool operator==(const MyString &lhs, const MyString &rhs);
    friend MyString operator-(const MyString &obj);
    friend MyString operator+(const MyString &lhs, const MyString &rhs);
private:
    char *str;
public:
    MyString();
    MyString(const char *s);
    MyString(const MyString &source);
    MyString(MyString && source);
    ~MyString();
    
    void display() const;
    int get_length() const;
    const char *get_str() const;
    
    //Copy assignment
    MyString &operator=(const MyString &rhs);
    
    //Move assignment
    MyString &operator=(MyString &&rhs);
    
    //Member functions
//    MyString operator-() const;     //make lowercase
//    MyString operator+(const MyString &rhs) const;     //concat
//    bool operator==(const MyString &rhs) const;
};

#endif /* MyString_h */
