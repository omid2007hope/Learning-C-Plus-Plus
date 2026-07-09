#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{

    int choice = 1;

    // 1 = Coffee
    // 2 = Tea

    switch (choice)
    {
    case 1:
        cout << "You ordered Coffee";
        break;

    case 2:
        cout << "You ordered Tea";
        break;

    default:
        cout << "Invalid choice";
    }

    return 0;
};