#include <iostream>
#include <string>

int num[] = {10, 20, 30};

int main()
{

    // To get the size of an array, you can use the sizeof() operator:

    /*
    ! Why did the result show 12 instead of 3, when the array contains 3 elements?
    ! It is because the sizeof() operator returns the size of a type in bytes.
    */

    //  You learned from the Data Types chapter that an int  type is usually 4 bytes, so from the example above, 4 x 3 (4 bytes x 3 elements) = 12 bytes.

    std::cout << sizeof(num);

    return 0;
};