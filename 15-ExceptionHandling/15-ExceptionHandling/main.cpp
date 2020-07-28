//
//  main.cpp
//  15-ExceptionHandling
//
//  Created by Cong Anh Nguyen on 7/28/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>

double calculate_mpg(int miles, int gallons);

int main(int argc, const char * argv[]) {
    {
        int miles {};
        int gallons {};
        double miles_per_gallon {};
            
        std::cout << "Enter the miles: ";
        std::cin >> miles;
        std::cout << "Enter the gallons: ";
        std::cin >>gallons;
            
        try {
            miles_per_gallon = calculate_mpg(miles, gallons);
            std::cout << "Result: " << miles_per_gallon << std::endl;
        } catch(int &ex) {
            std::cerr << "Cannot divide by zero" << std::endl;
        } catch (std::string &ex) {
            std::cerr << ex << std::endl;
        }
    }
    
    std::cout << std::endl;
    
    {
        
    }
    
    return 0;
}

double calculate_mpg(int miles, int gallons) {
    if (gallons == 0)
        throw 0;
    if (miles < 0 || gallons < 0)
        throw std::string{"Negative value error"};
    return static_cast<double>(miles) / gallons;
}
