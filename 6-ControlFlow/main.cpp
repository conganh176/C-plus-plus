#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> numbers {};
    char choice {};
    
    do {
        cout << "\nP - Print numbers\n";
        cout << "A - Add a number\n";
        cout << "M - Display mean of the numbers\n";
        cout << "S -Display the smallest number\n";
        cout << "L - Display the largest number\n";
        cout << "Q - Quit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;
        
        if (choice == 'P' || choice == 'p')
        {
            if (numbers.size() == 0)
            {
                cout << "[] - the list is empty\n";
            }
            else
            {
                cout << "[";
                for (auto num: numbers)
                {
                    cout << num << " ";
                }
                cout << "]\n";
            }
        }
        else if (choice == 'A' || choice == 'a')
        {
            int num_to_add {};
            cout << "Enter an number to the list (MUST BE " << typeid(num_to_add).name() << " or the programm will be crashed): ";
            cin >> num_to_add;
            numbers.push_back(num_to_add);
            cout << num_to_add << " added!\n";
        }
        else if (choice == 'M' || choice == 'm')
        {
            if (numbers.size() == 0)
            {
                cout << "Unable to calculate mean - no data\n";
            }
            else
            {
                int total {};
                for (auto num: numbers)
                {
                    total += num;
                }
                cout << "The mean is: " << static_cast<float>(total)/numbers.size() << "\n";
            }
        }
        else if (choice == 'S' || choice == 's')
        {
            if (numbers.size() == 0)
            {
                cout << "List is empty\n";
            }
            else
            {
                int smallest = numbers.at(0);
                for (auto num: numbers)
                {
                    if (num < smallest)
                        smallest = num;
                }
                cout << "The smallest number is: " << smallest << "\n";
            }
        }
        else if (choice == 'L' || choice == 'l')
        {
            if (numbers.size() == 0)
            {
                cout << "List is empty\n";
            }
            else
            {
                int largest = numbers.at(0);
                for (auto num: numbers)
                {
                    if (num > largest)
                        largest = num;
                }
                cout << "The largest number is: " << largest << "\n";
            }
        }
        else if (choice == 'Q' || choice == 'q')
        {
            cout << "Goodbye.\n";
        }
        else
        {
            cout << "Unknown choice, please try again!!!\n";
        }
    } while (choice != 'q' && choice != 'Q');

    return 0;
}