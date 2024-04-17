#include <iostream>

int main()
{

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = rand() % 10 + 1;

    std::cout << "******NUMBER GUESSING GAME******\n";
    do
    {
        std::cout << "Enter a guess between (1 - 10): ";
        std::cin >> guess;
        tries++;

        if (guess > num)
        {
            std::cout << "Too high \n";
        }
        else if (guess < num)
        {
            std::cout << "Too low \n";
        }
        else
        {
            std::cout << "CORRECT! number of tries: " << tries << "\n";
        }

        std::cout << "*********************************\n";
    } while (guess != num);

    return 0;
}