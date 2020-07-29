//
//  main.cpp
//  17-ReadingTextFile
//
//  Created by Cong Anh Nguyen on 7/29/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include <fstream>

int main(int argc, const char * argv[]) {
    {
        std::ifstream in_file;
        std::string line;
        
        in_file.open("file.txt");
        
        if (!in_file) {
            std::cerr << "File not found" << std::endl;
            return 1;
        }
        std::cout << "File found" << std::endl;
        
        while (!in_file.eof()) {
            in_file >> line;
            std::cout << line << " ";
        }
        std::cout << std::endl;
        std::cout << "File closing" << std::endl;
        
        in_file.close();
    }
    
    std::cout << std::endl;
    
    {
        std::ifstream in_file;
        std::string line {};
        
        in_file.open("file.txt");
        
        if (!in_file) {
            std::cerr << "File not found" << std::endl;
            return 1;
        }
        std::cout << "File found" << std::endl;
        
        while (std::getline(in_file, line)) {
            std::cout << line << std::endl;
        }
        
        std::cout << "File closing" << std::endl;
        
        in_file.close();
    }
    
    std::cout << std::endl;
    
    {
        std::ifstream in_file;
        char c {};
        
        in_file.open("file.txt");
        
        if (!in_file) {
            std::cerr << "File not found" << std::endl;
            return 1;
        }
        std::cout << "File found" << std::endl;
        
        while (in_file.get(c)) {
            std::cout << c;
        }
        
        std::cout << std::endl;
        std::cout << "File closing" << std::endl;
        
        in_file.close();
    }
    
    return 0;
}
