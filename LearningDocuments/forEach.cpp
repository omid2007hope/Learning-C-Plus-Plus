#include <iostream>
#include <cmath>
#include <string>

int nums[3] = {3, 6, 9};
std::string sample = "XYZ";

int main()
{

    for (int num : nums)
    {
        std::cout << log(num) << "\n\n";

        for (char x : sample)
        {
            std::cout << x << "\n\n";
        };
    };

    return 0;
};
