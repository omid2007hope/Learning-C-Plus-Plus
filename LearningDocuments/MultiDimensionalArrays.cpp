#include <iostream>
#include <string>

int main()
{

    std::string data[2][2][2] = {
        {{"Blue", "Red"},
         {"Green", "Yellow"}},
        {{"White", "Black"},
         {"Brown", "Purple"}}};

    std::cout << data[0][0][1]; // Outputs "Red"

    return 0;
};