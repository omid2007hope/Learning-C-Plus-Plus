

#include <iostream>
using namespace std;

/*

Very often, in programming,
you will need a data type that can only have one of two values, like:

YES / NO
ON / OFF
TRUE / FALSE

true (1) or false (0).

*/

int age = 21;
const int votingAge = 18;

bool isAboveVotingAge = age >= votingAge;

int x = 10;
int y = 5;

// You can also store the result of a comparison in a bool variable:
bool ifGreater = x > y;

bool isCodingFun = true;
bool isFishTasty = false;

int main()
{

    /*

    If you prefer to print true and false as words instead of 1 and 0,
    you can use the boolalpha manipulato

    */

    cout << boolalpha; // enable printing "true"/"false"

    /*

    If you prefer to print true and false as words instead of 1 and 0,
    you can use the boolalpha manipulato

    */

    cout << isCodingFun << "\n"
         << endl; // Outputs true
    cout << isFishTasty << "\n"
         << endl; // Outputs false

    cout << noboolalpha; // reset to 1/0

    // If you want to go back to the default behavior (printing 1 and 0), you can use noboolalpha:

    cout << isCodingFun << "\n"
         << endl; // Outputs true
    cout << isFishTasty << "\n"
         << endl; // Outputs false

    /*

    Note: It is up to you whether you prefer the default 1 and 0,
    or the words true and false. Both are correct in C++,
    and you can switch between them using boolalpha and noboolalpha.

    */

    cout << (x > 5) << endl; // returns 1 (true), because 10 is higher than 5

    cout << ifGreater << endl;

    cout << boolalpha; // enable printing "true"/"false"

    cout << "Is this person above the voting Age? " << isAboveVotingAge << endl;

    return 0;
};
