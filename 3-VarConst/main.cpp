#include <iostream>

using namespace std;

int main()
{
    const int smallRoomPrice {25};
    const int largeRoomPrice {35};
    const float taxRate {0.06};
    const int estimateDays {30};
    
    cout << "\nHow many small room would you like to clean? ";
    int smallRoom {0};
    cin >> smallRoom;
    
    cout << "\nHow many small room would you like to clean? ";
    int largeRoom {0};
    cin >> largeRoom;
    
    cout << "\nEstimate for cleaning service:";
    cout << "\nNumber of small rooms: " << smallRoom;
    cout << "\nNumber of large rooms: " << largeRoom;
    cout << "\nPrice per small room: $" << smallRoomPrice;
    cout << "\nPrice per large room: $" << largeRoomPrice;
    
    const int cost = smallRoom * smallRoomPrice + largeRoom * largeRoomPrice;
    cout << "\nCost: $" << cost;
    
    const float tax = cost * taxRate; 
    cout << "\nTax: $" << tax;
    
    cout << "\n==========================================";
    cout << "\nTotal estimate: $" << cost + tax;
    cout << "\nThis estimate is valid for " << estimateDays << " days\n";
    
    system("pause");
   
    return 0;
}