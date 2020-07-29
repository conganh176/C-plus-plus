//
//  main.cpp
//  19-StringStreams
//
//  Created by Cong Anh Nguyen on 7/29/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <limits>

int main(int argc, const char * argv[]) {
    int num {};
    double total {};
    std::string name {};
    
    std::string info {"Alpha 1234 1234.5678"};
    std::istringstream iss{info};
    
    iss >> name >> num >> total;
    std::cout << std::setw(10) << std::left << name <<
    std::setw(5) << std::left << num <<
    std::setw(10) << std::left << total << std::endl;
    
    std::cout << "----------------" << std::endl;
    std::ostringstream oss{};
    oss << std::setw(10) << std::left << name <<
    std::setw(5) << std::left << num <<
    std::setw(10) << std::left << total << std::endl;
    std::cout << oss.str();
    
    std::cout << "-------Data validation-------" << std::endl;
    int value {};
    std::string entry {};
    bool is_done = false;
    
    do {
        std::cout << "Enter an integer: ";
        std::cin >> entry;
        std::istringstream validator {entry};
        if (validator >> value)
            is_done = true;
        else
            std::cout << "Enter again" << std::endl;
    } while (!is_done);
    
    return 0;
}
