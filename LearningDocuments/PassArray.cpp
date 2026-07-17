#include <iostream>

void passTo(int numbers[5])
{

    numbers[0] = 100;
    numbers[1] = 200;
    numbers[2] = 300;
    numbers[3] = 400;
    numbers[4] = 500;

    for (int i = 0; i < 5; ++i)
    {

        std::cout << numbers[i] << "\n\n";
    }
};

int main()
{
    int list[5] = {10, 20, 30, 40, 50};
    passTo(list);
    return 0;
};