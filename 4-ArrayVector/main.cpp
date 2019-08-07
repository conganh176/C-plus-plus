#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vector1;
    vector <int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    cout << "\nvector 1:\n";
    cout << vector1.at(0) << "\n";
    cout << vector1.at(1) << "\n";
    cout << "size: " << vector1.size() << "\n";
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << "\nvector 2:\n";
    cout << vector2.at(0) << "\n";
    cout << vector2.at(1) << "\n";
    cout << "size: " << vector2.size() << "\n";
    
    vector <vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout << "\nvector 2d: \n";
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << "\n";
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << "\n";
    
    vector1.at(0) = 1000;
    
    cout << "\nvector 2d: \n";
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << "\n";
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << "\n";
    
    cout << "\nvector 1:\n";
    cout << vector1.at(0) << "\n";
    cout << vector1.at(1) << "\n";
    cout << "size: " << vector1.size() << "\n";
    
    system("pause");
    
    return 0;
}