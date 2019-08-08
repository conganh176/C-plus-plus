#include <iostream>
#include <string>

using namespace std;

int main()
{
    string theString {};
    cout << "Enter the string: ";
    cin >> theString;
    
    size_t stringLength = theString.length();
    int position {0};
    
    for (char letters: theString)
    {
        size_t spaces = stringLength - position;
        while (spaces > 0)
        {
            cout << " ";
            --spaces;
        }
        
        for (int j = 0; j < position; j++)
        {
            cout << theString.at(j);
        }
        
        cout << letters;
        
        for (int j = position - 1;  j >= 0; --j) 
        {
            auto k = static_cast<size_t>(j);
            cout << theString.at(k);
        }
        
        cout << "\n";
        ++position;
    }
     cout << "\n";
    
    return 0;
}