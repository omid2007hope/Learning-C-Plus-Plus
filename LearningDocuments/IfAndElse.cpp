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

    /*

    There is also a short-hand if...else,
    known as the ternary operator because it uses three operands.

    The ternary operator returns a value based on a condition: if the condition is true,
    it returns the first value; otherwise, it returns the second value.

    It can be used to replace multiple lines of code with a single line,
    and is often used to replace simple if...else statements:

    */

    bool verfiy = ageBaseOnID == ageEntryByUser;
    std::string policy = (verfiy) ? "+21\n User is Verified \n\n" : "Age verification failed, please try again \n\n Note: flase age entry";

    std::cout << policy << "\n\n";

    /*
    Nested Ternary
    You can nest ternary operators to handle more than two outcomes, but it can make your code harder to read:

    Example
    int time = 22;
    string message = (time < 12) ? "Good morning."
    : (time < 18) ? "Good afternoon."
    : "Good evening.";
    cout << message;

    */

    /*

    && (AND) - all conditions must be true
    || (OR) - at least one condition must be true
    ! (NOT) - reverses a condition (true → false, false → true)

    */

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