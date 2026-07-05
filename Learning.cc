#include <iostream>
using namespace std;

int myAge = 16; 

double myHeight = 6.2;

string myName  = "Omid";
string mylastname = "Teimory";

char bloodIdentifier = 'B';
char bloodBar = '+';

bool isAlive = true; 

int main() {
    cout << "This is" << " " << myName << " " << mylastname << "\n\n";
    cout << "He is" << " " << myAge << " " << "years old" << "\n\n";
    cout << "He has the height of" << " " << myHeight << "\n\n";
    cout << "Is he alive" << " " << isAlive << " " << "and has the blood type of" << " " << bloodIdentifier + bloodBar << "\n\n";
    return 0;
}