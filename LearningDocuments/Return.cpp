#include <iostream>
#include <cmath>

int roundIt(int num)
{

    return round(num);
};

int toKmPerHour(int speed)
{

    return speed / 1000;
};

int main()
{

    int speedOfLight = 299792458;

    double x = toKmPerHour(speedOfLight);

    std::cout << "Result " << roundIt(x);

    return 0;
};
