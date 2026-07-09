#include <iostream>
#include <cmath>
#include <string>

const int legalAgeInUS = 21;
const int thisYear = 2026;

/*

Use if to specify a block of code to be executed, if a condition is true
Use else to specify a block of code to be executed, if the same condition is false
Use else if to specify a new condition to test, if the first condition is false
Use switch to specify many alternative blocks of code to be executed

*/

int main()
{

    int birthYear;

    std::cout << "Enter your year of birth please! " << "\n\n";
    std::cin >> birthYear;

    int age = thisYear - birthYear;
    bool child = 14 >= age && 0 != age;
    bool teen = 14 < age && 21 > age;
    bool adult = 21 <= age && 40 >= age;
    bool old = 40 <= age && 80 >= age;
    bool toOld = 80 <= age;

    if (adult)
    {
        std::cout << "Recommend Beer.";
    }
    else if (teen)
    {
        std::cout << "Recommend Soda.";
    }
    else if (child)
    {
        std::cout << "Recommend Water";
    }
    else if (old)
    {
        std::cout << "Recommend Whisky";
    }
    else if (toOld)
    {

        std::cout << "Recommend Water and Vitamins";
    }
    else
    {

        std::cout << "Please enter a valid Birth year!";
    }

    return 0;
}