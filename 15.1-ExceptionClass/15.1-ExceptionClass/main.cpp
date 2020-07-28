//
//  main.cpp
//  15.1-ExceptionClass
//
//  Created by Cong Anh Nguyen on 7/28/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>

class DividedByZeroException {};
class NegativeValueException {};

double calculate_mpg(int miles, int gallons);

int main(int argc, const char * argv[]) {
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
    } catch(const DividedByZeroException &ex) {
        std::cerr << "Cannot divide by zero" << std::endl;
    } catch (const NegativeValueException &ex) {
        std::cerr << "The value is negative" << std::endl;
    }
    
    return 0;
}

double calculate_mpg(int miles, int gallons) {
    if (gallons == 0)
        throw DividedByZeroException();
    if (miles < 0 || gallons < 0)
        throw NegativeValueException();
    
    return static_cast<double>(miles) / gallons;
}
