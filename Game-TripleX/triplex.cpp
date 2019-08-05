#include <iostream>

void PrintIntroduction(int Difficult)
{
    std::cout << "\nThou art an adventurer going through the dungeon...\n";
    std::cout << "In the end of the dungeon, behind the sealed door there are huge treasures for someone who is worthy...\n";
    std::cout << "Door number " << Difficult << std::endl;
    std::cout << "Solve the puzzle by entering the right number, the incorrect numbers will result with the consequence...\n\n";
}

bool PlayGame(int Difficult)
{
    PrintIntroduction(Difficult);

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
        std::cout << "\nThou solved the puzzled. The upcomming is waiting for thou...\n";
        return true;
    }
    else
    {
        std::cout << "\nThou's life journey has come to an end...\n";
        return false;
    }
}

int main()
{
    int Difficult = 1;
    const int MaxDifficult = 5;
    while (Difficult <= MaxDifficult)
    {
        bool bLevelCompleted = PlayGame(Difficult);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelCompleted)
        {
            ++Difficult;
        }
    }
    // system("pause");

    std::cout << "Well done! Thou solved all the puzzle doors. The treasures will belong to the worthy. And that shalt be thou.";
    return 0;
}