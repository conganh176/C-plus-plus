#include <iostream>
#include <vector>

using namespace std;

void display_menu();
char get_choice();

void handle_display(const vector<int> &v);
void handle_add(vector<int> &v);
void handle_mean(const vector<int> &v);
void handle_smallest(const vector<int> &v);
void handle_largest(const vector<int> &v);
void handle_find(const vector<int> &v);
void handle_quit();
void handle_unknown();

void display_list(const vector<int> &v);
double calculate_mean(const vector<int> &v);
int find_smallest(const vector<int> &v);
int find_largest(const vector<int> &v);
bool find(const vector<int> &v, int target);

int main()
{
    vector <int> numbers {};
    char choice {};
    do {
        display_menu();
        choice = get_choice();
        switch (choice)
        {
            case 'P':
                handle_display(numbers);
                break;
            case 'A':
                handle_add(numbers);
                break;
            case 'M':
                handle_mean(numbers);
                break;
            case 'S':
                handle_smallest(numbers);
                break;
            case 'L':
                handle_largest(numbers);
                break;
            case 'F':
                handle_find(numbers);
                break;
            case 'Q':
                handle_quit();
                break;
            default:
                handle_unknown();
        }
    } while (choice != 'Q');
    cout << "\n";
    
    return 0;
}


void display_menu()
{
    cout << "\nP - Print numbers\n";
    cout << "A - Add a number\n";
    cout << "M - Display mean of the numbers\n";
    cout << "S -Display the smallest number\n";
    cout << "L - Display the largest number\n";
    cout << "F - Find a number\n";
    cout << "Q - Quit\n";
    cout << "\nEnter your choice: ";
}


char get_choice()
{
    char choice {};
    cin >> choice;
    return toupper(choice);
}


void handle_display(const vector <int> &v)
{
    if (v.size() == 0)
        cout << "[] - the list in empty\n";
    else
        display_list(v);
}


void handle_add(vector <int> &v)
{
    int number_to_add {};
    cout << "Enter a number: ";
    cin >> number_to_add;
    v.push_back(number_to_add);
    cout << number_to_add << " added.\n";
}


void handle_mean(const vector <int> &v)
{
    if (v.size() == 0)
        cout << "The list is empty. Unable to calculate.\n";
    else
        cout << "The mean is " << calculate_mean(v) << ".\n";
}


void handle_smallest(const vector <int> &v)
{
    if (v.size() == 0)
        cout << "The list is empty. Unable to find.\n";
    else
        cout << "The smallest number is " << find_smallest(v) << ".\n";
}


void handle_largest(const vector <int> &v)
{
    if (v.size() == 0)
        cout << "The list is empty. Unable to find.\n";
    else
        cout << "The largest number is " << find_largest(v) << ".\n";
}


void handle_find(const vector<int> &v)
{
    int target {};
    cout << "Enter the number to find: ";
    cin >> target;
    if (find(v, target))
        cout << target << " was found\n";
    else
        cout << target << " wasn't found.\n";
}


void handle_quit()
{
    cout << "Goodbye!\n";
}


void handle_unknown()
{
    cout << "Unknown choice - try again!\n";
}


void display_list(const vector <int> &v)
{
    cout << "[";
    for (auto num: v)
        cout << num << " ";
    cout << "]\n";
}


double calculate_mean(const vector <int> &v)
{
    int total {};
    for (auto num: v)
        total += num;
    return static_cast<double>(total)/v.size();
}


int find_smallest(const vector <int> &v)
{
    int smallest = v.at(0);
    for (auto num: v)
        if (num < smallest)
            smallest = num;
            
   return smallest;
}


int find_largest(const vector <int> &v)
{
    int largest = v.at(0);
    for (auto num: v)
        if (num > largest)
            largest = num;
   return largest;
}


bool find(const vector<int> &v, int target)
{
    for (auto num: v)
        if (num == target)
            return true;
    return false;
}