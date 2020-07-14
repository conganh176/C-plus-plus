#include <iostream>

class Player {
private:
    std::string name {"Player"};
    int health;
    int xp;
public:
    void talk(std::string text) {
        std::cout << name << " says " << text << std::endl;
    }
    bool is_dead();
};

class Account {
private:
    std::string name;
    double balance;
    
public:
    void deposit(double bal) {
        balance += bal;
        std::cout << "In deposit" << std::endl;
    }
    void withdraw(double bal) {
        balance -= bal;
        std::cout << "In withdraw" << std::endl;
    }
};

int main(int argc, const char * argv[]) {
    Player frank;
//    frank.name = "Frank";
//    frank.health = 100;
//    frank.xp = 20;
    frank.talk("Hello");
    
    Player *enemy = new Player;
//    (*enemy).name = "Enemy";
//    (*enemy).health = 100;
//    enemy->xp = 15;
    enemy->talk("Sup'");
    delete enemy;
    
    Account frank_account;
//    frank_account.name = "Frank's account";
//    frank_account.balance = 5000.0;
    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);
    
    return 0;
}
