#include <iostream>
#include <string>

struct
{
    std::string brand;
    std::string model;
    int serialNumber;
    int howManyUnits;
    double productionCost;
    double AddsUpProfit;
    double taxRate;
    double finalPrice;
} watchOne, watchTwo;

int main()
{

    std::cout << "Brand" << "\n\n";
    std::cin >> watchOne.brand;

    std::cout << "Unit's Model " << "\n\n";
    std::cin >> watchOne.model;

    std::cout << "Unit's serial number " << "\n\n";
    std::cin >> watchOne.serialNumber;

    std::cout << "Please enter the production cost" << "\n\n";
    std::cin >> watchOne.productionCost;

    std::cout << "Determine the profit goal in USD" << "\n\n";
    std::cin >> watchOne.AddsUpProfit;

    std::cout << "Enter the product's tax rate in %" << "\n\n";
    std::cin >> watchOne.taxRate;

    std::cout << "How many units of this product you (did/want to) sell?" << "\n\n";
    std::cin >> watchOne.howManyUnits;

    double price = watchOne.productionCost + watchOne.AddsUpProfit;
    double priceInTotal = price * watchOne.howManyUnits;

    double computeTax = price / 100 * watchOne.taxRate;
    double computeTaxInTotal = computeTax * watchOne.howManyUnits;

    double result = price + computeTax;
    double resultInTotal = result * watchOne.howManyUnits;

    std::cout << "Brand: " << watchOne.brand << "\n\n";
    std::cout << "Model: " << watchOne.model << "\n\n";
    std::cout << "Serial Number: " << watchOne.serialNumber << "\n\n";

    std::cout << "Intend to sell: " << watchOne.howManyUnits << " Units" << "\n\n";

    std::cout << "Each unit costs: " << price << "\n\n";
    std::cout << "Tax on each unit: " << computeTax << "\n\n";
    std::cout << "Finale Pricing: " << result << "\n\n";

    std::cout << "................................." << "\n\n";

    std::cout << "Total costs: " << priceInTotal << "\n\n";
    std::cout << "Tax in total: " << computeTaxInTotal << "\n\n";
    std::cout << "Total Pricing: " << resultInTotal << "\n\n";

    return 0;
};