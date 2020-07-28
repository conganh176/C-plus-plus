//
//  main.cpp
//  16-StreamManipulators
//
//  Created by Cong Anh Nguyen on 7/28/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include <iomanip>

void ruler();

int main(int argc, const char * argv[]) {
    {
        std::cout << "Boolean" << std::endl;
        std::cout << "no boolalpha - default (10 == 10): " << (10 == 10) << std::endl;
        std::cout << "no boolalpha - default (10 == 20): " << (10 == 20) << std::endl;
        
        std::cout << "----------------------------" << std::endl;
        std::cout << std::boolalpha;
        std::cout << "boolalpha (10 == 10): " << (10 == 10) << std::endl;
        std::cout << "boolalpha (10 == 20): " << (10 == 20) << std::endl;
        
        std::cout << "----------------------------" << std::endl;
        std::cout << std::noboolalpha;
        std::cout << "no boolalpha (10 == 10): " << (10 == 10) << std::endl;
        std::cout << "no boolalpha (10 == 20): " << (10 == 20) << std::endl;
        
        std::cout << "----------------------------" << std::endl;
        std::cout.setf(std::ios::boolalpha);
        std::cout << "boolalpha (10 == 10): " << (10 == 10) << std::endl;
        std::cout << "boolalpha (10 == 20): " << (10 == 20) << std::endl;
        
        std::cout << std::resetiosflags(std::ios::boolalpha);
        std::cout << "Default (10 == 10): " << (10 == 10) << std::endl;
        std::cout << "Default (10 == 20): " << (10 == 20) << std::endl;
    }
    
    std::cout << std::endl;
    
    {
        std::cout << "Integers" << std::endl;
        int num {255};
        
        std::cout << "----------------------------" << std::endl;
        std::cout << std::dec << num << std::endl;
        std::cout << std::hex << num << std::endl;
        std::cout << std::oct << num << std::endl;
        
        std::cout << "----------------------------" << std::endl;
        std::cout << std::showbase;
        std::cout << std::dec << num << std::endl;
        std::cout << std::hex << num << std::endl;
        std::cout << std::oct << num << std::endl;
        
        std::cout << "----------------------------" << std::endl;
        std::cout << std::showbase << std::uppercase;
        std::cout << std::hex << num << std::endl;
        
        std::cout << "----------------------------" << std::endl;
        std::cout << std::showpos;
        std::cout << std::dec << num << std::endl;
        std::cout << std::hex << num << std::endl;
        std::cout << std::oct << num << std::endl;
        
        std::cout << "----------------------------" << std::endl;
        std::cout.setf(std::ios::showbase);
        std::cout.setf(std::ios::uppercase);
        std::cout.setf(std::ios::showpos);
        
        std::cout << "----------------------------" << std::endl;
        std::cout << std::resetiosflags(std::ios::basefield);
        std::cout << std::resetiosflags(std::ios::showpos);
        std::cout << std::resetiosflags(std::ios::showbase);
        std::cout << std::resetiosflags(std::ios::uppercase);
    }
    
    std::cout << std::endl;
    
    {
        std::cout << "Floating point number" << std::endl;
        
        double num1 {123456789.987654321};
        double num2 {1234.5678};
        double num3 {1234.0};
        
        std::cout << "----------------------------" << std::endl;
        std::cout << num1 << std::endl;
        std::cout << num2 << std::endl;
        std::cout << num3 << std::endl;
        
        std::cout << "----------------------------" << std::endl;
        std::cout << std::setprecision(2);
        std::cout << num1 << std::endl;
        std::cout << num2 << std::endl;
        std::cout << num3 << std::endl;
        
        std::cout << "----------------------------" << std::endl;
        std::cout << std::setprecision(5);
        std::cout << num1 << std::endl;
        std::cout << num2 << std::endl;
        std::cout << num3 << std::endl;
        
        std::cout << "----------------------------" << std::endl;
        std::cout << std::setprecision(9);
        std::cout << num1 << std::endl;
        std::cout << num2 << std::endl;
        std::cout << num3 << std::endl;
        
        std::cout << "----------------------------" << std::endl;
        std::cout << std::setprecision(3) << std::fixed;
        std::cout << num1 << std::endl;
        std::cout << num2 << std::endl;
        std::cout << num3 << std::endl;
        
        std::cout << "----------------------------" << std::endl;
        std::cout << std::setprecision(3) << std::scientific;
        std::cout << num1 << std::endl;
        std::cout << num2 << std::endl;
        std::cout << num3 << std::endl;
        
        std::cout << "----------------------------" << std::endl;
        std::cout << std::setprecision(3) << std::scientific << std::uppercase;
        std::cout << num1 << std::endl;
        std::cout << num2 << std::endl;
        std::cout << num3 << std::endl;
        
        std::cout << "----------------------------" << std::endl;
        std::cout << std::setprecision(3) << std::scientific << std::showpos;
        std::cout << num1 << std::endl;
        std::cout << num2 << std::endl;
        std::cout << num3 << std::endl;
        
        std::cout << "----------------------------" << std::endl;
        std::cout.unsetf(std::ios::scientific | std::ios::fixed);
        std::cout << std::resetiosflags(std::ios::showpos);
        
        std::cout << "----------------------------" << std::endl;
        std::cout << std::setprecision(10) << std::showpoint;
        std::cout << num1 << std::endl;
        std::cout << num2 << std::endl;
        std::cout << num3 << std::endl;
        
        std::cout << "----------------------------" << std::endl;
        std::cout.unsetf(std::ios::scientific | std::ios::fixed);
        std::cout << std::setprecision(6);
        std::cout << std::resetiosflags(std::ios::showpos);
        std::cout << std::resetiosflags(std::ios::showpoint);
        
        std::cout << "----------------------------" << std::endl;
        std::cout << num1 << std::endl;
        std::cout << num2 << std::endl;
        std::cout << num3 << std::endl;
    }
    
    std::cout << std::endl;
    
    {
        std::cout << "align and fill" << std::endl;
        int num1 {1234};
        double num2 {1234.5678};
        std::string hello {"Hello"};
        
        std::cout << "----------------------------" << std::endl;
        ruler();
        std::cout << num1 << std::endl;
        std::cout << num2 << std::endl;
        std::cout << hello << std::endl;
        
        std::cout << "----------------------------" << std::endl;
        ruler();
        std::cout << std::setw(10) << num1 << num2 << hello << std::endl;
        
        std::cout << "----------------------------" << std::endl;
        ruler();
        std::cout << std::setw(10) << num1 << std::setw(10) << num2 << hello << std::endl;
        
        std::cout << "----------------------------" << std::endl;
        ruler();
        std::cout << std::setw(10) << num1 << std::setw(10) << num2 << std::setw(10) << hello << std::endl;
        
        std::cout << "----------------------------" << std::endl;
        ruler();
        std::cout << std::setw(10) << std::left << num1 << std::setw(10) << std::left << num2 << std::setw(10) << std::left << hello << std::endl;
        
        std::cout << "----------------------------" << std::endl;
        ruler();
        std::cout << std::setfill('*');
        std::cout << std::setw(10) << std::left << num1 << std::setw(10) << std::left << num2 << std::setw(10) << std::left << hello << std::endl;
        
        std::cout << "----------------------------" << std::endl;
        ruler();
        std::cout << std::setw(10) << std::left << std::setfill('-') << num1 <<
        std::setw(10) << std::left << std::setfill('*') << num2 <<
        std::setw(10) << std::left << std::setfill('%') << hello << std::endl;
    }
    
    return 0;
}

void ruler() {
    std::cout << "12345678901234567890123456789012345678901234567890" << std::endl;
}
