#include <iostream>
#include "Account.h"
#include "Player.h"

int main(int argc, const char * argv[]) {
    //Account
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
    
    //Player
    {
        Player slayer;
    }
    
    {
        Player hero("Hero");
        Player npc("NPC", 100);
        Player villain("Villain", 100, 12);
    }
    
    {
        Player empty {"XXX", 420, 69};
        Player new_object {empty};
        display_player(empty);
    }
    
    Player *enemy = new Player();
    enemy->set_name("Enemy");
    
    Player *boss = new Player("Boss", 1000, 300);
    boss->set_name("Boss");
    
    delete enemy;
    delete boss;
    
    return 0;
}
