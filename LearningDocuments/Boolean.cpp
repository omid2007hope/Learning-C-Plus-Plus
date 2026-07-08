

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

bool isCodingFun = true;
bool isFishTasty = false;

int main()
{

    /*

    If you prefer to print true and false as words instead of 1 and 0,
    you can use the boolalpha manipulato

    */

    cout << boolalpha; // enable printing "true"/"false"

    cout << isCodingFun << "\n"; // Outputs true
    cout << isFishTasty << "\n"; // Outputs false

    return 0;
};
