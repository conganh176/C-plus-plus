//
//  main.cpp
//  Cha2-OperatorOverloading
//
//  Created by Cong Anh Nguyen on 7/23/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include "MyString.h"

int main(int argc, const char * argv[]) {
    std::cout << std::boolalpha << std::endl;
    MyString a {"Frank"};
    MyString b {"Frank"};
    std::cout << (a == b) << std::endl;
    std::cout << (a != b) << std::endl;
    
    b = "George";
    std::cout << (a == b) << std::endl;
    std::cout << (a != b) << std::endl;
    std::cout << (a > b) << std::endl;
    std::cout << (a < b) << std::endl;
    
    MyString s1 {"FRANK"};
    s1 = -s1;
    std::cout << s1 << std::endl;
    
    s1 = s1 + "*****";
    std::cout << s1 << std::endl;
    
    
    s1 += "-----";
    std::cout << s1 << std::endl;
    
    MyString s2 {"12345"};
    s1 = s2 * 3;
    std::cout << s1 << std::endl;
    
    MyString s3 {"abcdef"};
    s3 *= 5;
    std::cout << s3 << std::endl;
    
    MyString repeat_string;
    int repeat_times;
    std::cout << "Enter the string you want to repeat: ";
    std::cin >> repeat_string;
    std::cout << "Enter the number of times you want to repeat: ";
    std::cin >> repeat_times;
    repeat_string *= repeat_times;
    std::cout << repeat_string << std::endl;
    
    MyString s {"frank"};
    ++s;
    std::cout << s << std::endl;
    
    s = -s;
    std::cout << s << std::endl;
    MyString result;
    result = ++s;
    std::cout << s << std::endl;
    std::cout << result << std::endl;
    
    s = "Frank";
    s++;
    std::cout << s << std::endl;
    
    s = -s;
    std::cout << s << std::endl;
    result = s++;
    std::cout << s << std::endl;
    std::cout << result << std::endl;
    
    return 0;
}
