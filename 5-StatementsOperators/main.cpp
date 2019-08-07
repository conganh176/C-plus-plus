#include <iostream>

using namespace std;

int main()
{
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    int cents{}, remains {}, dollar {}, quarter {}, dime {}, nickel {}, penny {};
    
    cout << "Please provide the number of cents: ";
    cin >> cents;
    
    dollar = cents / dollar_value;
//    remains = cents - (dollar * dollar_value);
    remains = cents % dollar_value;
    
    quarter = remains / quarter_value;
//    remains -= quarter * quarter_value;
    remains %= quarter_value;

    dime = remains / dime_value;
//    remains -= dime * dime_value;
    remains %= dime_value;
    
    nickel = remains / nickel_value;
//    remains -= nickel + nickel_value;
    remains %= nickel_value;
    
    penny = remains;
    
    cout << "\nDollars: " << dollar;
    cout << "\nQuarters: " << quarter;
    cout << "\nDimes: " << dime;
    cout << "\nNickels: " << nickel;
    cout << "\nPennies: " << penny;
    cout << "\n";

    system("pause");
    return 0;
}