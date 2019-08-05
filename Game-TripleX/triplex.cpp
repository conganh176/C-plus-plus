#include <iostream>

void PrintIntroduction()
{
    std::cout << "\nYou are an adventurer going through the dungeon...\n";
    std::cout << "In the end of the dungeon, behind the sealed door there are huge treasures for someone who is worthy...\n";
    std::cout << "Solve the puzzle by entering the right number, the incorrect numbers will result with the consequence...\n\n";
}

bool PlayGame()
{
    PrintIntroduction();

    const int Number1 = 4;
    const int Number2 = 3;
    const int Number3 = 2;

    const int Sum = Number1 + Number2 + Number3;
    const int Product = Number1 * Number2 * Number3;

    std::cout << "There are 3 numbers for you to put in...\n";
    std::cout << "The numbers add-up to: " << Sum << std::endl;
    std::cout << "The numbers multiply to : "  << Product << std::endl;

    int GuessA, GuessB, GuessC;

    std::cout << "Choose your number: ";
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == Sum && GuessProduct == Product)
    {
        std::cout << "You win!\n";
        return true;
    }
    else
    {
        std::cout << "You lose!\n";
        return false;
    }
}

int main()
{
    while (true)
    {
        bool bLevelCompleted = PlayGame();
        std::cin.clear();
        std::cin.ignore();
    }
    // system("pause");

    return 0;
}