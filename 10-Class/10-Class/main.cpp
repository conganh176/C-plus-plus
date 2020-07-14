#include <iostream>
#include "Account.h"

int main(int argc, const char * argv[]) {
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(5000.0);
    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);
    
    if (frank_account.deposit(500.0)) {
        std::cout << "Deposit OK" << std::endl;
    }
    else {
        std::cout << "Deposit Error" << std::endl;
    }
    
    if (frank_account.withdraw(1500.0)) {
        std::cout << "Withdraw OK" << std::endl;
    }
    else {
        std::cout << "Withdraw Error" << std::endl;
    }
        
    if (frank_account.withdraw(5500.0)) {
        std::cout << "Withdraw OK" << std::endl;
    }
    else {
        std::cout << "Withdraw Error" << std::endl;
    }
    
    return 0;
}
