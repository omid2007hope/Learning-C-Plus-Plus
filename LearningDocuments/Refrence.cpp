#include <iostream>
#include <string>

std::string breakFast = "Bacon and Egg";
std::string lunch = "Mac and Chess";
std::string diner = "BQQ Pork Ribs";

std::string &meal = lunch;

int main()
{

    std::cout << meal;

    return 0;
};