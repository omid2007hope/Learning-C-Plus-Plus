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
    cout << "This is" << endl << myName << endl << mylastname << "\n\n";
    cout << "He is" << endl << myAge << endl << "years old" << "\n\n";
    cout << "He has the height of" << endl << myHeight << "\n\n";
    cout << "Is he alive" << endl  << isAlive << endl  << "and has the blood type of" << endl << bloodIdentifier + bloodBar << "\n\n";
    return 0;
}