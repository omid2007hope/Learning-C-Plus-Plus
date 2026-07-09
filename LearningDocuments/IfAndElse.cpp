#include <iostream>
#include <cmath>
#include <string>

/*

Use if to specify a block of code to be executed, if a condition is true
Use else to specify a block of code to be executed, if the same condition is false
Use else if to specify a new condition to test, if the first condition is false
Use switch to specify many alternative blocks of code to be executed

*/

int main()
{

    const int legalAgeInUS = 21;
    const int thisYear = 2026;

    const int birthYearInID = 1980;

    int birthEntryByUser;

    std::cout << "Enter your year of birth please! " << "\n\n";
    std::cin >> birthEntryByUser;

    int ageBaseOnID = thisYear - birthYearInID;

    int ageEntryByUser = thisYear - birthEntryByUser;

    bool verfiy = ageBaseOnID == ageEntryByUser;
    std::string policy = (verfiy) ? "+21\n User is Verified \n\n" : "Age verification failed, please try again \n\n Note: flase age entry";

    std::cout << policy << "\n\n";

    bool adult = 21 <= ageEntryByUser && 40 >= ageEntryByUser;
    bool old = 40 <= ageEntryByUser && 80 >= ageEntryByUser;
    bool toOld = 80 <= ageEntryByUser;

    if (adult)
    {
        std::cout << "Recommend Beer.";
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