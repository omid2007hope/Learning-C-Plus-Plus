#include <iostream>

enum Level
{
    Easy = 25,
    Normal = 50,
    Hard = 75

};

int main()
{
    enum Level thisVar = Normal;

    switch (thisVar)
    {
    case 25:
        std::cout << "difficulty: Easy";
        break;

    case 50:
        std::cout << "difficulty: Normal";
        break;

    case 75:
        std::cout << "difficulty: Hard";
        break;

    default:
        std::cout << "difficulty: Undifined";
        break;
    }

    return 0;
};