#include <iostream>

int main()
{
    int favoriteNumber;
    std::cout << "Please enter your favorite number between 0 to 100: ";
    std::cin >> favoriteNumber;
    
    std::cout << "Wow! " << favoriteNumber << " is my favorite number too!" << std::endl;
    
    return 0;
}