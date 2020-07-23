//
//  main.cpp
//  11-OperatorOverloading
//
//  Created by Cong Anh Nguyen on 7/23/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include <vector>
#include "MyString.h"

int main(int argc, const char * argv[]) {
    {
        MyString empty;
        MyString larry {"Larry"};
        MyString stooge {larry};
    
        empty.display();
        larry.display();
        stooge.display();
    }
    
    //Copy assignment
    {
        std::cout << std::endl;
        MyString a {"Hello"};
        MyString b;
        b = a;
        b = "This is a test";
    }
    
    //Move assignment
    {
        std::cout << std::endl;
        MyString a {"Hello"};
        a = MyString {"Konichiwa"};
        a = "Nihao";
    }
    
    //Member/Global functions
    {
        std::cout << std::endl;
        std::cout << std::boolalpha << std::endl;
        
        MyString alpha{"Alpha"};
        MyString beta{"Beta"};
        MyString stooge = alpha;
        
        alpha.display();
        beta.display();
        
        std::cout << (alpha == beta) << std::endl;
        std::cout << (alpha == stooge) << std::endl;
        
        alpha.display();
        MyString alpha2 = -alpha;
        alpha2.display();
        
        MyString stooges = alpha + "Beta";
        //MyString stooges = "Larry" + moe;     //error
        
        MyString two_stooges = beta + " " + "Alpha";
        two_stooges.display();
        
        MyString three_stooges = beta + " " + alpha + " " + "Charlie";
        three_stooges.display();
    }
    
    //Stream Insertion/Extraction
    {
        MyString alpha{"Alpha"};
        MyString beta{"Beta"};
        MyString charlie;
        
        std::cout << "Enter the first one name: ";
        std::cin >> charlie;
        std::cout << "The three stooges are " << alpha << ", " << beta << ", " << charlie << std::endl;
        
        std::cout << "Enter the three stooges name separated by a space: ";
        std::cin >> alpha >> beta >> charlie;
        std::cout << "The three stooges are " << alpha << ", " << beta << ", " << charlie << std::endl;
    }
    
    return 0;
}
