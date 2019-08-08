#include <iostream>
#include <string>

using namespace std;

int main()
{
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmilkjihgfedcba"};
    
    cout << "Enter the secret message: ";
    string message {};
    getline(cin, message);
    
    string encrypted {};
    
    cout << "Encrypting message...\n";
    
    for (char letter: message)
    {
        size_t position = alphabet.find(letter);
        if (position != string::npos)
        {
            char new_letter {key.at(position)};
            encrypted += new_letter;
        }
        else
        {
            encrypted += letter;
        }
    }
    
    cout << "Encrypted: " << encrypted << "\n\n";
    
    string decrypted {};
    cout << "Decrypting message...\n";
    
    for (char letter: encrypted)
    {
        size_t position = key.find(letter);
        if (position != string::npos)
        {
            char new_letter {alphabet.at(position)};
            decrypted += new_letter;
        }
        else
        {
            decrypted += letter;
        }
    }
    
    cout << "Decrypted: " << decrypted << "\n\n";
    
    return 0;
}