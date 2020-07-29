//
//  main.cpp
//  18-WritingTextFile
//
//  Created by Cong Anh Nguyen on 7/29/20.
//  Copyright © 2020 Cong Anh Nguyen. All rights reserved.
//

#include <iostream>
#include <fstream>

int main(int argc, const char * argv[]) {
    {
        std::ofstream out_file {"output.txt", std::ios::app};
        
        if (!out_file) {
            std::cerr << "Error creating file" << std::endl;
            return 1;
        }
        std::string line;
        std::cout << "Enter something to write to file: ";
        std::getline(std::cin, line);
        out_file << line << std::endl;
        out_file.close();
    }
    
    return 0;
}
